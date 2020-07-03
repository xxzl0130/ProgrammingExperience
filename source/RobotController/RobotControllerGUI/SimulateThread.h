#pragma once
#include "commonHeader.h"
#include "ProgramItem.h"

class SimulateThread : public QThread
{
	Q_OBJECT

public:
	SimulateThread(QObject *parent);
	~SimulateThread();

	void run() override;
	void stop();

	QList<ProgramItemBase*> commandList;
	bool pause;

protected:
	void checkPause();
	/**
	 * \brief ��·����Ķ���ģ��
	 * \param q ·����
	 */
	void drawPathMove(const rl::plan::VectorList& q);
	/**
	 * \brief ���ٶȵ�ģ�⣬δʵ��
	 * \param q ·����
	 * \param qd �ٶ�
	 */
	void drawPathVelMove(const rl::plan::VectorList& q, const rl::plan::VectorList& qd);
	/**
	 * \brief �ݹ鴦����item���з���
	 * \param item �����Ŀ
	 */
	void simulateItem(ProgramItemBase* item);
	/**
	 * \brief �ݹ��ռ�path��Ϣ�����ڻ���·��
	 * \param item �����Ŀ
	 * \return ·��
	 */
	rl::plan::VectorList collectPath(ProgramItemBase* item);
	void sendSimulateRatioInfo(double ratio);

signals:
	void finish();
	void showMessage(const QString& msg);
	/**
	* \brief ͨ�õĴ����ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief ͨ�õ���Ϣ��ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void infoBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief ͨ�õľ����ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void warningBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	void configurationRequested(const rl::math::Vector& q);
	void pointRequested(const rl::math::Vector& xyz);
	void configurationPathRequested(const rl::plan::VectorList& path);

private:
	bool running;
};
