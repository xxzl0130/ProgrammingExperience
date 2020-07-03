#include "commonHeader.h"
#include "IK_SolverThread.h"
#include "MainWindow.h"


IK_SolverThread::IK_SolverThread(QObject* parent):
	target(),
	ikSolverComboBoxIndex(0)
{
	
}

IK_SolverThread::~IK_SolverThread()
{
	
}

void IK_SolverThread::run()
{
	// 加锁
	QMutexLocker lock(&MainWindow::instance()->mutex);

	bool solveRes = false;
	rl::math::Vector q;
	try
	{
		switch (this->ikSolverComboBoxIndex)
		{
		case 0:
		{
			solveRes = MainWindow::instance()->plannerThread->kinematicsAlgorithm.ikSolve(
				target, *MainWindow::instance()->q, q, KinematicsAlgorithm::Nlopt);
			break;
		}
		case 1:
		{
			solveRes = MainWindow::instance()->plannerThread->kinematicsAlgorithm.ikSolve(
				target, *MainWindow::instance()->q, q, KinematicsAlgorithm::Jacobian);
			break;
		}
		default:
		{
			solveRes = MainWindow::instance()->plannerThread->kinematicsAlgorithm.ikSolve(
				target, *MainWindow::instance()->q, q, KinematicsAlgorithm::Jacobian | KinematicsAlgorithm::Nlopt);
			break;
		}
		}
	}
	catch (const std::exception& e)
	{
		// 解算器可能崩溃
		emit errorBoxRequested(e.what());
		solveRes = false;
	}
	//发送信号，让MainWindow从mdl里获取姿态
	emit ikSolveFinish(solveRes);
}

