#pragma once

#include "commonHeader.h"

#include "ui_RemoteSetDialog.h"

#ifdef HAVE_TC3
#include "TcAdsDef.h"
#ifndef BOOL
typedef int     BOOL;
#endif
#include "TcAdsAPI.h"
#pragma comment(lib,"C:/TwinCAT/AdsApi/TcAdsDll/x64/Lib/TcAdsDll.lib")
#endif //HAVE_TC3

namespace Ui {
	class RemoteSetDialog;
}
class RemoteSetDialog:public QDialog
{
	Q_OBJECT

public:
	RemoteSetDialog(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
	virtual ~RemoteSetDialog();

private:
	Ui::RemoteSetDialog *ui;
	bool addrValid;
#ifdef HAVE_TC3
	AmsAddr remoteAddr;
#endif //HAVE_TC3

public slots:
	/**
	 * \brief 将编辑框中的信息保存下来发送出去
	 */
	void accept() override;
	void reject() override;
	/**
	 * \brief 主要是校验地址是否合规，并把信息保存到remoteAddr
	 */
	void setAddr();
#ifdef HAVE_TC3
	/**
	 * \brief 从其他部分接收addr参数，以保障显示与实际使用同步
	 * \param addr 地址参数
	 */
	void receiveRemoteAddr(const AmsAddr& addr);
#endif //HAVE_TC3
	/**
	 * \brief 从其他部分接收刷新间隔参数，以保障显示与实际使用同步
	 * \param time 刷新间隔
	 */
	void receiveFlashTime(const int& time);

signals:
#ifdef HAVE_TC3
	void sendAmsAddr(const AmsAddr&);
#endif //HAVE_TC3
	void sendFlashTime(const int&);
};

