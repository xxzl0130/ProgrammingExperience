#pragma once

#include "stdafx.h"
#include "ui_SimulationWindow.h"
#include "SimulationThread.h"

class SimulationWindow : public QMainWindow
{
    Q_OBJECT

public:
    SimulationWindow(QWidget *parent = Q_NULLPTR);

protected:
    void connect();

    SimulationThread* simulationThread;
    int nUav;
    time_T lastUpdateInfoTime, lastUpdateSettingTime;
    QUdpSocket *udpSendService, *udpCommandService;

    QDoubleValidator *validator;

public slots:
    void receiveModifyUav();
    void receiveUavY(double time, const std::vector<ExtY_AutopilotSim_T>& Y);
    void receiveUavU(double time, const std::vector<ExtU_AutopilotSim_T>& U,const std::vector<bool>& onlineMode, const std::vector<bool>& autoMode);
    void updateState(const ExtY_AutopilotSim_T& Y,double time);
    void updateSetting(const ExtU_AutopilotSim_T& U, bool online = true, bool autoMode = true);
    void stateIndexChanged(int index);
    void settingIndexChanged(int index);
    void delUav();
    void addUav();
    void startSim();
    void pauseSim();
    void modifyUavType(int index);
    void changeOnlineMode(bool checked);
    void changeAutoMode(bool checked);

    void receiveGroundStation();

signals:
    void sendModifyUav(int index, const ExtU_AutopilotSim_T& U);

protected:
    void initSettings();
    int infoPort, groundPort, uavPort;

private:
    Ui::SimulationWindowClass *ui;
};
