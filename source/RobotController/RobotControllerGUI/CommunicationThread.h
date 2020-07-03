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
 * \brief 通讯线程，实际主要工作为利用MainWindow中的
 * 定时器实现定时刷新远程数据
 */
class CommunicationThread : public QThread
{
	Q_OBJECT

public:
	CommunicationThread(QObject* parent = nullptr);
	virtual ~CommunicationThread();

	/**
	 * \brief 实际由MainWindow中的定时器调用
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
	 * \brief 将接收由主窗口或者remoteSet窗口发来的信息，可实时修改
	 * \param addr AmsAddr
	 */
	void receiveRemoteAddr(const AmsAddr& addr);
#endif //HAVE_TC3
	
	void flashRemoteData();
	/**
	 * \brief 发送数据到ads远程
	 * \param groupIndex index
	 * \param groupOffset offset
	 * \param pData 数据指针
	 * \param size 字节数
	 */
	void send2Remote(unsigned long groupIndex, unsigned long groupOffset,void* pData, size_t size);
	void startThread();

private:

signals:
	void messageRequested(const std::string& message);
	void setOfflineRequested();
	void configurationRequested(const rl::math::Vector& q);
	/**
	* \brief 通用的错误框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
};