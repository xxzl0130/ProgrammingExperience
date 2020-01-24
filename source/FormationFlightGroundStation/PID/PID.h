#pragma once
#include "PidClass.h"

#define PID_STEP_TIME       50  //ms
class PID : protected PidClassModelClass
{
public:
    PID();
    PID(const PID& p);
    PID(double kP,double kI = 0,double kD = 0,double kN = 0,double min = -1e30,double max = 1e30);
    ~PID();

    double update(double x);
    //设置积分项初始输出，即设置积分项为x/kI
    void setIntInitOutput(double x);

private:
    double oMin, oMax;
};

