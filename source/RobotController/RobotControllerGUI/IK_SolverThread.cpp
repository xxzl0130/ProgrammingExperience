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
	// ����
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
		// ���������ܱ���
		emit errorBoxRequested(e.what());
		solveRes = false;
	}
	//�����źţ���MainWindow��mdl���ȡ��̬
	emit ikSolveFinish(solveRes);
}

