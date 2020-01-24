#pragma once
#include "stdafx.h"
#include <QThread>
#include "Autopilot.h"
#include "PID.h"

class ControlThread : public QThread
{
    Q_OBJECT

    class Controller
    {
    public:
        PID *vPid, *phiPid, *miuPid;
        Controller():
            vPid(new PID(20, 1.5, 2, 2, 10, 200)),
            phiPid(new PID(10, 1, 10, 10, -M_PI, M_PI)),
            miuPid(new PID(10, 1, 10, 10, -1, 1))
        {
        }
        Controller(const PID& v,const PID& phi,const PID& miu):
            vPid(new PID(v)),
            phiPid(new PID(phi)),
            miuPid(new PID(miu))
        {
        }
    };

    class Mixer
    {
    public:
        Mixer():ex(0.0),ey(0.0),ez(0.0){}
        Mixer(ExtY_AutopilotSim_T delta, double kex = 0.5, double kev = 10.0, double key = 0.2, double kephi = 10.0,
              double kez = 1.0, double kemiu = 5.0, double xErr = 500, double yErr = 500, double zErr = 300);
        double ex, ey, ez;
    };


public:
    ControlThread(QObject *parent = nullptr);
    ~ControlThread();

    void stop();

    struct MixerArg {
        double kex, kev, key, kephi, kez, kemiu, maxXErr, maxYErr, maxZErr;
    }mixerArg;
    struct PidArg
    {
        double kp, ki, kd, kn, min, max;
    }vPidArg,phiPidArg,miuPidArg;

    //���˻�����
    UavParameters uav1Args, uav2Args;
    //����ʱ��
    double time;
    //��ɼ��
    double takeoffInterval;
    QTimer *timer;
    std::vector<ExtY_AutopilotSim_T> uavInfo;
    //QMutex *infoMutex;
    std::vector<Coordinate> uavPathMC;
    std::vector<Coordinate>::const_iterator curPoint, nextPoint;
    //·�����������ڷ�Χ����ת����һ��
    double pathPointErrThresh;
    double theta, speed, height;

signals:
    void requestChangeUavErrorText(int index, QString txt);
    void requestSendCommand(QByteArray data);

public slots:
    void setUavCount(unsigned int n);
    void setLeader(const UavCommand& command);
    //�������ⳤ�������ԣ���ini����
    void setLeaderArg(double kv, double kphi, double kmiu);
    //���ñ����Ϣ�����Ա�����ô���
    void setFormationDelta(const std::vector<ExtY_AutopilotSim_T> data);
    //�������˻����ͣ����Է���ƽ̨
    void setUavType(int uav, int type);
    //���ó����߶ȣ�����ƽ�棩
    void setHeight(double h);
    //��ʼ���棬ʵ������ʱû���κ��ô��� ������run����
    void startSim();
    void stopSim();
    //�ں�·��ȷ��ʱ�ͼ����ʼ���򣬱�������ղ�����Ϣ
    void calcPhi0();
    void receiveUavInfo(std::vector<ExtY_AutopilotSim_T> info, double time);

protected:
    Autopilot* virtualLeader;
    std::vector<ExtY_AutopilotSim_T> formationDelta;
    std::vector<Controller*> controllers;
    std::vector<UavCommand> commands;
    std::vector<int> uavType;
    std::vector<bool> takeoffed;
    volatile bool running;

    void run() override;
    void checkPath();
    // ����ϵ��תtheta����
    ExtY_AutopilotSim_T coordTrans(const ExtY_AutopilotSim_T& data, double theta);
};

