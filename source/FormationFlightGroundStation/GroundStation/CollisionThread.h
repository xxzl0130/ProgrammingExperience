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
    double collisionDistanceMod;//·À×²ÐÞÕý¾àÀë
    //·À×²Ô²ÖùË®Æ½Ãæ¾àÀë
    double distanceRWarning, distanceRCritical, distanceRFatal;
    //·À×²Ô²Öù´¹Ö±¾àÀë
    double distanceHWarning, distanceHCritical, distanceHFatal;
    //·À×²Ô¤¾¯Ê±¼ä
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
    std::vector<int> stateUpdateTime;//×´Ì¬¸üÐÂ¼ÇÂ¼
    int stepCount = 0;
    double lastTime;
};

