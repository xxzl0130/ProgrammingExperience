#pragma once

//·¢ËÍ¶Ë¿Ú
#define INFORMATION_PORT    39000
#define SIMULATION_PORT     39001
#define GROUND_PORT         39002

#define GROUND_INI      "GroundStation.ini"
#define UAV_INI         "UavParameters.ini"

#include <QByteArray>
#include "Autopilot.h"
#include <vector>

union Yunion
{
    ExtY_AutopilotSim_T Y;
    char c[sizeof(ExtY_AutopilotSim_T)];
};
union intUnion
{
    int i;
    char c[sizeof(int)];
};
enum Instruction : char
{
    StartSim,
    StopSim,
    AddUav,
    SetUavCount,
    SetUavU,
    SetPhi0,
    SetUavType,
    None = 0xff
};
union Information
{
    int data[2];//0:instruction; 1:uavCount
    char c[sizeof(data)];
};

class UavInfo
{
public:
    ExtY_AutopilotSim_T Y;
    double time;
    int index;
    UavInfo():Y(),time(0),index(0){}
    explicit UavInfo(const ExtY_AutopilotSim_T& _Y,const double& _t = 0,const int& _i = 0):
        Y(_Y),time(_t),index(_i)
    {
    }

    static UavInfo fromByteArray(const QByteArray& bytes);
    QByteArray toByteArray();
};

class UavCommand
{
public:
    int index;
    real_T v_c{}; 
    real_T phi_c{}; 
    real_T miu_c{};
    UavCommand() : index(0) {}
    explicit UavCommand(const int& _i, const ExtU_AutopilotSim_T& _U) :
        index(_i),v_c(_U.v_c),phi_c(_U.phi_c), miu_c(_U.miu_c)
    {
    }
    explicit UavCommand(const int& _i, real_T _v_c,real_T _phi_c,real_T _miu_c) :
        index(_i), v_c(_v_c), phi_c(_phi_c), miu_c(_miu_c)
    {
    }

    static UavCommand fromByteArray(const QByteArray& bytes);

    QByteArray toByteArray() const;
};

QByteArray Yvector2ByteArray(double time, const std::vector<ExtY_AutopilotSim_T>& Y);
std::vector<ExtY_AutopilotSim_T> byteArray2Yvector(const QByteArray& bytes, double &time);
Instruction byteArray2Command(QByteArray& data);
QByteArray command2ByteArray(Instruction ins, const QByteArray& data = QByteArray());
QByteArray uavCommandVector2ByteArray(const std::vector<UavCommand>& c);
std::vector<UavCommand> byteArray2UavCommand(const QByteArray& data);

ExtY_AutopilotSim_T operator -(const ExtY_AutopilotSim_T& a, const ExtY_AutopilotSim_T&b);

bool operator == (const ExtY_AutopilotSim_T& a, const ExtY_AutopilotSim_T& b);
bool operator != (const ExtY_AutopilotSim_T& a, const ExtY_AutopilotSim_T& b);