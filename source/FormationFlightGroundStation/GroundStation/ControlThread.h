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

    //无人机参数
    UavParameters uav1Args, uav2Args;
    //仿真时间
    double time;
    //起飞间隔
    double takeoffInterval;
    QTimer *timer;
    std::vector<ExtY_AutopilotSim_T> uavInfo;
    //QMutex *infoMutex;
    std::vector<Coordinate> uavPathMC;
    std::vector<Coordinate>::const_iterator curPoint, nextPoint;
    //路径点允许误差，在范围内则转向下一点
    double pathPointErrThresh;
    double theta, speed, height;

signals:
    void requestChangeUavErrorText(int index, QString txt);
    void requestSendCommand(QByteArray data);

public slots:
    void setUavCount(unsigned int n);
    void setLeader(const UavCommand& command);
    //设置虚拟长机的属性，由ini配置
    void setLeaderArg(double kv, double kphi, double kmiu);
    //设置编队信息，来自编队设置窗口
    void setFormationDelta(const std::vector<ExtY_AutopilotSim_T> data);
    //设置无人机机型，来自仿真平台
    void setUavType(int uav, int type);
    //设置长机高度（基础平面）
    void setHeight(double h);
    //开始仿真，实际上暂时没有任何用处， 仿真由run启动
    void startSim();
    void stopSim();
    //在航路点确定时就计算初始航向，避免仿真收不到信息
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
    // 坐标系旋转theta弧度
    ExtY_AutopilotSim_T coordTrans(const ExtY_AutopilotSim_T& data, double theta);
};

