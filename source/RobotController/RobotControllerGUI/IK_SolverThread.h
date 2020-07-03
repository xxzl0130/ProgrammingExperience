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
	// ����������źţ���QTʵ��
	void ikSolveFinish(const bool& res);
	/**
	* \brief ͨ�õĴ����ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
};