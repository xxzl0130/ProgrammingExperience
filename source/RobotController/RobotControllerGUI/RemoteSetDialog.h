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
	 * \brief ���༭���е���Ϣ�����������ͳ�ȥ
	 */
	void accept() override;
	void reject() override;
	/**
	 * \brief ��Ҫ��У���ַ�Ƿ�Ϲ棬������Ϣ���浽remoteAddr
	 */
	void setAddr();
#ifdef HAVE_TC3
	/**
	 * \brief ���������ֽ���addr�������Ա�����ʾ��ʵ��ʹ��ͬ��
	 * \param addr ��ַ����
	 */
	void receiveRemoteAddr(const AmsAddr& addr);
#endif //HAVE_TC3
	/**
	 * \brief ���������ֽ���ˢ�¼���������Ա�����ʾ��ʵ��ʹ��ͬ��
	 * \param time ˢ�¼��
	 */
	void receiveFlashTime(const int& time);

signals:
#ifdef HAVE_TC3
	void sendAmsAddr(const AmsAddr&);
#endif //HAVE_TC3
	void sendFlashTime(const int&);
};

