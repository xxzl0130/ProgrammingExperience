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
    ///接收无人机仿真过程中的状态信息
    void receiveUavState();
    ///接收无人机的属性信息
    void receiveUavInfo();
    ///接收控制线程的指令并发送
    void receiveSendCommand(const QByteArray& data);

signals:
    void setUavType(int uav, int type);
    //将无人机信息发送给charts window, main window, control thread
    void sendUavInfo(const std::vector<ExtY_AutopilotSim_T>& info, double time);

private:
    std::vector<ExtY_AutopilotSim_T> uavState;
};

