#pragma once

#include <QThread>

#include "ProgramItem.h"

/**
 * \brief “编译”编程指令的线程，目前仅对Move做了处理
 */
class CompileThread : public QThread
{
	Q_OBJECT

public:
	CompileThread(QObject *parent);
	~CompileThread();

	void run() override;
	void stop();

	QTreeWidget* tree;

	double sampleTime;
protected:
	/**
	 * \brief 对item进行递归解算，目前只支持MoveLJC和绝对位置、相对位置
	 * 解算流程为，递归处理item，对point利用solvePointTarget求出目标点，
	 * 再使用solveProgramPath求解路径
	 * \param item 要解算的item
	 * \param currentPosition 起始位置，会被修改为经过item运动后的位置
	 * \return 解算是否成功
	 */
	bool solveProgramItem(ProgramItemBase* item, rl::math::Vector &currentPosition);
	/**
	 * \brief 针对type类型进行路径解算，MoveC为多点，不能处理
	 * \param type MovePLJ
	 * \param s 起始点
	 * \param t 终止点
	 * \param path 解算出的路径
	 * \return 解算是否成功
	 */
	bool solveProgramPath(ProgramItemBase::ProgramType type, const rl::math::Vector& s, const rl::math::Vector& t,
		rl::plan::VectorList& path);
	/**
	 * \brief 针对type类型进行路径解算，带速度规划
	 * \param type 类型
	 * \param s 起点
	 * \param t 终点
	 * \param vs 初速度
	 * \param vt 末速度
	 * \param vmax 最大速度
	 * \param a 加速度
	 * \param sampleTime 采样时间
	 * \param path 输出路径
	 * \param pathVel 输出速度
	 * \return 是否成功
	 */
	bool solveProgramPathVel(ProgramItemBase::ProgramType type, const rl::math::Vector& s, const rl::math::Vector& t,
		const rl::math::Vector& vs, double vt, double vmax, double a, double sampleTime, rl::plan::VectorList& path, rl::plan::VectorList& pathVel);
	/**
	 * \brief 解算item参数代表的目标点
	 * \param item 当前项目
	 * \param result 解算结果
	 * \param start 为相对坐标提供的起始点，可省略
	 * \return 解算是否成功
	 */
	bool solvePointTarget(ProgramItemBase* item, rl::math::Vector& result,
		const rl::math::Vector& start = rl::math::Vector());

signals:
	void finish(bool ok);

private:
	bool running;
};
