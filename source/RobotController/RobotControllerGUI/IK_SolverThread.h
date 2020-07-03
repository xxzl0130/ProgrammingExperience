#pragma once

#include "commonHeader.h"
#include "rlHeaders.h"

class IK_SolverThread : public QThread
{
	Q_OBJECT

public:
	IK_SolverThread(QObject* parent = nullptr);
	virtual ~IK_SolverThread();

	void run();

	rl::math::Transform target;
	unsigned int ikSolverComboBoxIndex;

protected:

private:

signals:
	// 用来发射的信号，由QT实现
	void ikSolveFinish(const bool& res);
	/**
	* \brief 通用的错误框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
};