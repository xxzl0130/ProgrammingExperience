#pragma once
#include "stdafx.h"
#include "Autopilot.h"

class SimulationThread : public QThread
{
    Q_OBJECT

public:
    SimulationThread(QObject *parent = nullptr);
    ~SimulationThread();

    Autopilot* getUav(int index);
    unsigned int lostThreshold;//失联阈值
    UavParameters uav1Args, uav2Args;

public slots:
    void addUAV();
    void delUAV(int index);
    void modifyUav(int index,const ExtU_AutopilotSim_T& U);
    void modifyUavC(const UavCommand& U);
    void modifyUavType(int index, int type);
    void setPhi0(double phi);
    void stop();
    void init();

protected:
    void step();

signals:
    void sendUavY(double time,std::vector<ExtY_AutopilotSim_T> Y);
    void sendUavU(double time,std::vector<ExtU_AutopilotSim_T> U, std::vector<bool> onlineMode, std::vector<bool> autoMode);

private:
    void run() override;

    QTimer *timer;
    QList<Autopilot*> autopilots;
    std::vector<ExtY_AutopilotSim_T> lastCorrectState;//最后一次在线的正常状态
    unsigned long long stepCount;
    std::vector<unsigned long long> lastCommand;//最后一次收到遥控指令
    bool running;
};
