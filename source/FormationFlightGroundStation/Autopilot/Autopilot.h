#pragma once

#include "AutopilotSim.h"
#include "PID.h"

#define UAV_SIM_STEP_TIME   50  //ms

class Autopilot : public AutopilotSimModelClass
{
public:
    Autopilot():
        AutopilotSimModelClass(),
        onlineState(true),
        autoState(true),
        altitudeHoldMode(false),
        altitude(0.0),
        hPid(nullptr)
    {
        this->AutopilotSim_U = { 0,0,0,0,0,0,0,0,0,0,0 ,0};
        this->AutopilotSim_Y = { 0,0,0,0,0,0,0 ,0};
    }
    ~Autopilot() = default;

    double time = 0.0;
    bool onlineState;   //飞机是否在线（向地面站发送消息）的标志
    bool autoState;     //飞机是否自动（受地面站控制）的标志，true为受地面控制
    bool altitudeHoldMode; //定高模式，true时接通定高PID
    double altitude;    //定高模式固定高度

    ExtU_AutopilotSim_T& U()
    {
        return this->AutopilotSim_U;
    }

    const ExtU_AutopilotSim_T& U() const
    {
        return this->AutopilotSim_U;
    }

    const ExtY_AutopilotSim_T Y() const
    {
        return this->AutopilotSim_Y;
    }

    void step()
    {
        if(altitudeHoldMode)
        {
            if(hPid == nullptr)
            {
                hPid = new PID(10, 1, 10, 10, -1, 1);
            }
            auto t = hPid->update(altitude - this->Y().z);
            this->U().miu_c = t;
        }
        __super::step();
        time = *this->getRTM()->Timing.t;
    }

private:
    PID *hPid;
};

#define defaultU ExtU_AutopilotSim_T({ 0,0,0,0.20,3.0,3.0,0,0,0,0,0,0})

struct UavParameters
{
    double kv, kphi, kmiu;
    double takeoffSpeed, maxSpeed, maxHeight;
};