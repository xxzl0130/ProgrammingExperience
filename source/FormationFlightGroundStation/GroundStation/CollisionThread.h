#pragma once
#include "stdafx.h"

enum WarningType
{
    NoWarning = 0x00,
    Warning = 0x01 << 0,
    Critical = 0x01 << 1,
    Fatal = 0x01 << 2,
    DistanceWarning = 0x01 << 3,
    TimeWarning = 0x01 << 4,
    LinkWarning = 0x01 << 5,
};

class CollisionThread : public QThread
{
    Q_OBJECT
public:
    CollisionThread(QObject *parent = nullptr);
    ~CollisionThread();
    void stop();
    double collisionDistanceMod;//��ײ��������
    //��ײԲ��ˮƽ�����
    double distanceRWarning, distanceRCritical, distanceRFatal;
    //��ײԲ����ֱ����
    double distanceHWarning, distanceHCritical, distanceHFatal;
    //��ײԤ��ʱ��
    double timeWarning, timeCritical, timeFatal;
    int lostTime;

    std::vector<ExtY_AutopilotSim_T> uavState;

public slots:
    void receiveUavInfo(std::vector<ExtY_AutopilotSim_T> info, double time);
signals:
    void requestChangeFormationInfoText(int index, QString distance, QString time);
    void requestCollisionWarning(int index, int type);
protected:
    void run() override;

private:
    std::vector<std::vector<ExtY_AutopilotSim_T>> delta;
    volatile bool running;

    double calcTime(int i, int j);

    std::vector<ExtY_AutopilotSim_T> lastState;
    std::vector<int> stateUpdateTime;//״̬���¼�¼
    int stepCount = 0;
    double lastTime;
};

