#pragma once
#include "commonHeader.h"
#include "rlHeaders.h"

#ifdef HAVE_TC3
#include "TcAdsDef.h"
#ifndef BOOL
typedef int     BOOL;
#endif
#include "TcAdsAPI.h"
#pragma comment(lib,"C:/TwinCAT/AdsApi/TcAdsDll/x64/Lib/TcAdsDll.lib")
#endif //HAVE_TC3

/**
 * \brief ͨѶ�̣߳�ʵ����Ҫ����Ϊ����MainWindow�е�
 * ��ʱ��ʵ�ֶ�ʱˢ��Զ������
 */
class CommunicationThread : public QThread
{
	Q_OBJECT

public:
	CommunicationThread(QObject* parent = nullptr);
	virtual ~CommunicationThread();

	/**
	 * \brief ʵ����MainWindow�еĶ�ʱ������
	 */
	void run();
	void stop();
	void showMessage(const std::string& message);
#ifdef HAVE_TC3
	AmsAddr remoteAddr;
#endif //HAVE_TC3
	bool running;

public slots:
#ifdef HAVE_TC3
	/**
	 * \brief �������������ڻ���remoteSet���ڷ�������Ϣ����ʵʱ�޸�
	 * \param addr AmsAddr
	 */
	void receiveRemoteAddr(const AmsAddr& addr);
#endif //HAVE_TC3
	
	void flashRemoteData();
	/**
	 * \brief �������ݵ�adsԶ��
	 * \param groupIndex index
	 * \param groupOffset offset
	 * \param pData ����ָ��
	 * \param size �ֽ���
	 */
	void send2Remote(unsigned long groupIndex, unsigned long groupOffset,void* pData, size_t size);
	void startThread();

private:

signals:
	void messageRequested(const std::string& message);
	void setOfflineRequested();
	void configurationRequested(const rl::math::Vector& q);
	/**
	* \brief ͨ�õĴ����ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
};