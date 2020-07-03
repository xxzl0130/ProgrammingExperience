#pragma once
#include "stdafx.h"
#include "InterpolatorS.h"

class DLL_EXPORT KinematicsAlgorithm
{
public:
	KinematicsAlgorithm();
	~KinematicsAlgorithm();

	rl::plan::SimpleModel* model;
	rl::plan::Planner* planner;
	rl::plan::Optimizer* optimizer;

	rl::plan::Planner* loosePlanner;
	rl::plan::Optimizer* looseOptimizer;

	bool running;
	double delta;
	//ik解算时允许解算结果与初始姿态间的差
	double diff;

	enum IkSolver
	{
		Nlopt = 0x01,
		Jacobian = 0x02
	};

	rl::math::Transform fkine(const rl::math::Vector& q);

	/**
	 * \brief 点到点直线路径计算，使用IK解算器
	 * \param start 起点
	 * \param goal 终点
	 * \param path 输出结果
	 * \param nPoints 中间路径点数，为0或省略时会以delta计算点数
	 * \return 是否成功
	 */
	bool linePlan(const rl::math::Vector& start, const rl::math::Vector& goal, rl::plan::VectorList& path,
		unsigned int nPoints = 0);
	
	/**
	 * \brief 点到点直线路径计算，使用IK解算器，带速度规划
	 * \param start 起点
	 * \param goal 终点
	 * \param vs 初速度
	 * \param vt 末速度
	 * \param accel 加速度
	 * \param vmax 最大速度
	 * \param sampleTime 采样时间
	 * \param path 输出路径
	 * \param pathVel 输出速度
	 * \return 是否成功
	 */
	bool linePlan(const rl::math::Vector& start, const rl::math::Vector& goal, double vs,double vt, double vmax,
	              double accel, double sampleTime,	rl::plan::VectorList& path, rl::plan::VectorList& pathVel);

	/**
	 * \brief 点到点的关节空间运动规划
	 * \param start 起点
	 * \param goal 终点
	 * \param path 输出结果
	 * \return 是否成功
	 */
	bool point2PointPlan(const rl::math::Vector& start, const rl::math::Vector& goal,
		rl::plan::VectorList& path);

	/**
	 * \brief 点到点的空间关节运动规划，带速度规划，不使用planner做规划，直接做点到点的插补
	 * \param start 起点
	 * \param goal 终点
	 * \param vs 初速度
	 * \param vt 末速度
	 * \param accel 加速度
	 * \param vmax 最大速度
	 * \param sampleTime 采样时间
	 * \param path 输出路径
	 * \param pathVel 路径上的速度
	 * \return 是否成功
	 */
	bool point2PointPlan(const rl::math::Vector& start, const rl::math::Vector& goal,
		const rl::math::Vector& vs,double vt,double vmax, double accel,double sampleTime,
		rl::plan::VectorList& path, rl::plan::VectorList& pathVel);

	/**
	 * \brief 三点求圆规划
	 * \param point1 点1
	 * \param point2 点2
	 * \param point3 点3
	 * \param path 输出路径
	 * \param nPoints 总点数，忽略则以delta计算插补点数
	 * \return 解算是否成功
	 */
	bool circlePlan(const rl::math::Vector& point1, const rl::math::Vector& point2, const rl::math::Vector& point3,
		rl::plan::VectorList& path, unsigned int nPoints = 0);

	/**
	 * \brief 带速度的三点求圆规划
	 * \param point1 点1
	 * \param point2 点2
	 * \param point3 点3
	 * \param vs 初速度（线速度）
	 * \param vt 末速度（线速度）
	 * \param vmax 最大速度（线速度）
	 * \param accel 加速度（线速度）
	 * \param sampleTime 采样时间
	 * \param path 输出路径
	 * \param pathVel 输出速度
	 * \return 是否成功
	 */
	bool circlePlan(const rl::math::Vector& point1, const rl::math::Vector& point2, const rl::math::Vector& point3,
		double vs, double vt, double vmax, double accel,double sampleTime, rl::plan::VectorList& path, rl::plan::VectorList& pathVel);

	/**
	 * \brief 进行反向运动学解算
	 * \param target 目标位姿的转换阵，至少提供translation，提供rotation可提高解算速度和准确度以及成功率
	 * \param startPos 求解的初始姿态，越靠近目标姿态越容易求解成功
	 * \param result 求解得到的目标姿态，支持与startPos原地操作
	 * \param solver 指定ik解算器
	 * \return 是否求解成功
	 */
	bool ikSolve(const rl::math::Transform& target, const rl::math::Vector& startPos, rl::math::Vector& result,
	             unsigned solver = Nlopt | Jacobian);

protected:
	static Eigen::Matrix3d t2r(const Eigen::Matrix4d& t);
	static Eigen::Matrix4d rt2tr(const Eigen::Matrix3d& R, const Eigen::Vector3d& t);
	/**
	* \brief Cartesian trajectory (4x4xN) from pose T0 to T1, the elements of S (Nx1) specify the
	* fractional distance  along the path, and these values are in the range [0 1].
	* The i'th point corresponds to a distance S(i) along the path.
	* \tparam T S container for std::vector or Eigen::Vector
	* \param T0 start pose
	* \param T1 end pose
	* \param S distance
	* \return Cartesian trajectory (4x4xN)
	*/
	template<class T>
	std::vector<Eigen::Matrix4d> ctraj(const Eigen::Matrix4d& T0,
		const Eigen::Matrix4d& T1, const T& S);
	/**
	* \brief Create a translational transformation matrix
	* \param T an SE(3) homogeneous transform (4x4)
	* \return the translational part of a homogeneous transform T as three components
	*/
	static Eigen::Vector3d transl(const Eigen::Matrix4d& T);
	/**
	* \brief a unit-quaternion that interpolates a rotation a unit-quaternion that interpolates a rotation
	* \param Q1 Quaternion
	* \param Q2 Quaternion
	* \param r distance ratio
	* \return Quaternion
	*/
	static Eigen::Quaternion<double> interp(const Eigen::Quaternion<double>& Q1, const Eigen::Quaternion<double>& Q2,
		double r);
	/**
	* \brief 线性插值函数
	* \param s 插值起点
	* \param t 插值终点
	* \param i 第i点
	* \param n 总计n点
	* \return 第i点函数值
	*/
	static double linearInsert(const double s, const double t, const int i, const int n);
	static bool vectorEqual(const rl::math::Vector& a, const rl::math::Vector& b, double e = 1e-5);
	static bool checkInterDelta(const std::vector<InterpolatorS>& inter);
};

