#pragma once
#include "stdafx.h"
#include <QThread>

class UdpThread : public QThread
{
    Q_OBJECT
public:
    UdpThread(QObject *parent = nullptr);
    virtual ~UdpThread();

    QUdpSocket *udpStateService, *udpSendService, *udpInfoService;

    void run() override;

public slots:
    ///�������˻���������е�״̬��Ϣ
    void receiveUavState();
    ///�������˻���������Ϣ
    void receiveUavInfo();
    ///���տ����̵߳�ָ�����
    void receiveSendCommand(const QByteArray& data);

signals:
    void setUavType(int uav, int type);
    //�����˻���Ϣ���͸�charts window, main window, control thread
    void sendUavInfo(const std::vector<ExtY_AutopilotSim_T>& info, double time);

private:
    std::vector<ExtY_AutopilotSim_T> uavState;
};

