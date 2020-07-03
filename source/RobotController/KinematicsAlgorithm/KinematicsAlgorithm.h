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
	//ik����ʱ������������ʼ��̬��Ĳ�
	double diff;

	enum IkSolver
	{
		Nlopt = 0x01,
		Jacobian = 0x02
	};

	rl::math::Transform fkine(const rl::math::Vector& q);

	/**
	 * \brief �㵽��ֱ��·�����㣬ʹ��IK������
	 * \param start ���
	 * \param goal �յ�
	 * \param path ������
	 * \param nPoints �м�·��������Ϊ0��ʡ��ʱ����delta�������
	 * \return �Ƿ�ɹ�
	 */
	bool linePlan(const rl::math::Vector& start, const rl::math::Vector& goal, rl::plan::VectorList& path,
		unsigned int nPoints = 0);
	
	/**
	 * \brief �㵽��ֱ��·�����㣬ʹ��IK�����������ٶȹ滮
	 * \param start ���
	 * \param goal �յ�
	 * \param vs ���ٶ�
	 * \param vt ĩ�ٶ�
	 * \param accel ���ٶ�
	 * \param vmax ����ٶ�
	 * \param sampleTime ����ʱ��
	 * \param path ���·��
	 * \param pathVel ����ٶ�
	 * \return �Ƿ�ɹ�
	 */
	bool linePlan(const rl::math::Vector& start, const rl::math::Vector& goal, double vs,double vt, double vmax,
	              double accel, double sampleTime,	rl::plan::VectorList& path, rl::plan::VectorList& pathVel);

	/**
	 * \brief �㵽��Ĺؽڿռ��˶��滮
	 * \param start ���
	 * \param goal �յ�
	 * \param path ������
	 * \return �Ƿ�ɹ�
	 */
	bool point2PointPlan(const rl::math::Vector& start, const rl::math::Vector& goal,
		rl::plan::VectorList& path);

	/**
	 * \brief �㵽��Ŀռ�ؽ��˶��滮�����ٶȹ滮����ʹ��planner���滮��ֱ�����㵽��Ĳ岹
	 * \param start ���
	 * \param goal �յ�
	 * \param vs ���ٶ�
	 * \param vt ĩ�ٶ�
	 * \param accel ���ٶ�
	 * \param vmax ����ٶ�
	 * \param sampleTime ����ʱ��
	 * \param path ���·��
	 * \param pathVel ·���ϵ��ٶ�
	 * \return �Ƿ�ɹ�
	 */
	bool point2PointPlan(const rl::math::Vector& start, const rl::math::Vector& goal,
		const rl::math::Vector& vs,double vt,double vmax, double accel,double sampleTime,
		rl::plan::VectorList& path, rl::plan::VectorList& pathVel);

	/**
	 * \brief ������Բ�滮
	 * \param point1 ��1
	 * \param point2 ��2
	 * \param point3 ��3
	 * \param path ���·��
	 * \param nPoints �ܵ�������������delta����岹����
	 * \return �����Ƿ�ɹ�
	 */
	bool circlePlan(const rl::math::Vector& point1, const rl::math::Vector& point2, const rl::math::Vector& point3,
		rl::plan::VectorList& path, unsigned int nPoints = 0);

	/**
	 * \brief ���ٶȵ�������Բ�滮
	 * \param point1 ��1
	 * \param point2 ��2
	 * \param point3 ��3
	 * \param vs ���ٶȣ����ٶȣ�
	 * \param vt ĩ�ٶȣ����ٶȣ�
	 * \param vmax ����ٶȣ����ٶȣ�
	 * \param accel ���ٶȣ����ٶȣ�
	 * \param sampleTime ����ʱ��
	 * \param path ���·��
	 * \param pathVel ����ٶ�
	 * \return �Ƿ�ɹ�
	 */
	bool circlePlan(const rl::math::Vector& point1, const rl::math::Vector& point2, const rl::math::Vector& point3,
		double vs, double vt, double vmax, double accel,double sampleTime, rl::plan::VectorList& path, rl::plan::VectorList& pathVel);

	/**
	 * \brief ���з����˶�ѧ����
	 * \param target Ŀ��λ�˵�ת���������ṩtranslation���ṩrotation����߽����ٶȺ�׼ȷ���Լ��ɹ���
	 * \param startPos ���ĳ�ʼ��̬��Խ����Ŀ����̬Խ�������ɹ�
	 * \param result ���õ���Ŀ����̬��֧����startPosԭ�ز���
	 * \param solver ָ��ik������
	 * \return �Ƿ����ɹ�
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
	* \brief ���Բ�ֵ����
	* \param s ��ֵ���
	* \param t ��ֵ�յ�
	* \param i ��i��
	* \param n �ܼ�n��
	* \return ��i�㺯��ֵ
	*/
	static double linearInsert(const double s, const double t, const int i, const int n);
	static bool vectorEqual(const rl::math::Vector& a, const rl::math::Vector& b, double e = 1e-5);
	static bool checkInterDelta(const std::vector<InterpolatorS>& inter);
};

