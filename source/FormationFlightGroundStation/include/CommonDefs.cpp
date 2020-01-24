#include "CommonDefs.h"

UavInfo UavInfo::fromByteArray(const QByteArray& bytes)
{
    Yunion yunion;
    UavInfo info;
    int offset = 0;
    memcpy_s(&info.index, sizeof(info.index), bytes.data() + offset, sizeof(info.index));
    offset += sizeof(info.index);
    memcpy_s(&info.time, sizeof(info.time), bytes.data() + offset, sizeof(info.time));
    offset += sizeof(info.time);
    memcpy_s(yunion.c, sizeof(yunion.c), bytes.data() + offset, bytes.size() - offset);
    info.Y = yunion.Y;
    return info;
}

QByteArray UavInfo::toByteArray()
{
    QByteArray bytes;
    Yunion yunion;
    yunion.Y = this->Y;
    bytes.append((const char*)(&this->index), sizeof(this->index));
    bytes.append((const char*)(&this->time), sizeof(this->time));
    bytes.append(yunion.c, sizeof(Yunion));
    return bytes;
}


UavCommand UavCommand::fromByteArray(const QByteArray& bytes)
{
    UavCommand command;
    int offset = 0;
    memcpy_s(&command.index, sizeof(command.index), bytes.data() + offset, sizeof(command.index));
    offset += sizeof(command.index);
    memcpy_s(&command.v_c, sizeof(command.v_c), bytes.data() + offset, sizeof(command.v_c));
    offset += sizeof(command.v_c);
    memcpy_s(&command.phi_c, sizeof(command.phi_c), bytes.data() + offset, sizeof(command.phi_c));
    offset += sizeof(command.phi_c);
    memcpy_s(&command.miu_c, sizeof(command.miu_c), bytes.data() + offset, sizeof(command.miu_c));
    offset += sizeof(command.miu_c);
    return command;
}

QByteArray UavCommand::toByteArray() const
{
    QByteArray bytes;
    bytes.append((const char*)(&this->index), sizeof(this->index));
    bytes.append((const char*)(&this->v_c), sizeof(this->v_c));
    bytes.append((const char*)(&this->phi_c), sizeof(this->phi_c));
    bytes.append((const char*)(&this->miu_c), sizeof(this->miu_c));
    return bytes;
}

QByteArray Yvector2ByteArray(double time, const std::vector<ExtY_AutopilotSim_T>& Y)
{
    QByteArray bytes;
    Yunion yunion;
    int size = Y.size();
    bytes.append((const char*)(&size), sizeof(size));
    bytes.append((const char*)(&time), sizeof(time));
    for (auto i = 0; i < size; ++i)
    {
        yunion.Y = Y[i];
        bytes.append(yunion.c, sizeof(yunion.c));
    }

    return bytes;
}

std::vector<ExtY_AutopilotSim_T> byteArray2Yvector(const QByteArray& bytes, double &time)
{
    std::vector<ExtY_AutopilotSim_T> Y;
    Yunion yunion;
    int size, offset = 0;
    if (bytes.size() < sizeof(size))
        return Y;
    memcpy_s(&size, sizeof(size), bytes.data() + offset, sizeof(size));
    offset += sizeof(size);
    if (bytes.size() < size * sizeof(ExtY_AutopilotSim_T) + sizeof(size) + sizeof(time))
        return Y;
    memcpy_s(&time, sizeof(time), bytes.data() + offset, sizeof(time));
    offset += sizeof(time);
    for(auto i = 0;i < size;++i)
    {
        memcpy_s(yunion.c, sizeof(yunion.c), bytes.data() + offset, sizeof(yunion.c));
        offset += sizeof(yunion.c);
        Y.push_back(yunion.Y);
    }
    return Y;
}

Instruction byteArray2Command(QByteArray& data)
{
    Instruction ins = None;
    int size = 0;
    if(data.size() < sizeof(ins) + sizeof(size))
    {//收到的数据长度不足
        return None;
    }
    memcpy_s(&ins, sizeof(ins), data.data(), sizeof(ins));
    memcpy_s(&size, sizeof(size), data.data() + sizeof(ins), sizeof(size));
    if(size + sizeof(size) + sizeof(ins) > data.size())
    {//收到的数据长度不足
        return None;
    }
    data = data.right(data.size() - sizeof(ins) - sizeof(size));
    return ins;
}

QByteArray command2ByteArray(Instruction ins, const QByteArray& data)
{
    QByteArray command;
    int size = data.size();
    command.append((const char*)(&ins), sizeof(ins));
    command.append((const char*)(&size), sizeof(size));
    command.append(data);
    return command;
}

QByteArray uavCommandVector2ByteArray(const std::vector<UavCommand>& c)
{
    QByteArray data;
    for(const auto& it : c)
    {
        data.push_back(it.toByteArray());
    }
    return data;
}

std::vector<UavCommand> byteArray2UavCommand(const QByteArray& data)
{
    std::vector<UavCommand> commands;
    auto size = sizeof(UavCommand::miu_c) + sizeof(UavCommand::index) + sizeof(UavCommand::phi_c) + sizeof(UavCommand::v_c);
    for(auto offset = 0,i = 0;offset < data.size();offset += size,++i)
    {
        commands.push_back(UavCommand::fromByteArray(data.mid(offset, size)));
    }
    return commands;
}

ExtY_AutopilotSim_T operator-(const ExtY_AutopilotSim_T& a, const ExtY_AutopilotSim_T& b)
{
    ExtY_AutopilotSim_T ans;
    ans.dphi = a.dphi - b.dphi;
    ans.dmiu = a.dmiu - b.dmiu;
    ans.phi = a.phi - b.phi;
    ans.miu = a.miu - b.miu;
    ans.v = a.v - b.v;
    ans.vz = a.vz - b.vz;
    ans.x = a.x - b.x;
    ans.y = a.y - b.y;
    ans.z = a.z - b.z;
    return ans;
}

bool operator==(const ExtY_AutopilotSim_T& a, const ExtY_AutopilotSim_T& b)
{
    auto c = a - b;
    const static double eps = 1e-8;
    double err = 0.0;
    err += abs(c.phi);
    err += abs(c.dmiu);
    err += abs(c.dphi);
    err += abs(c.miu);
    err += abs(c.v);
    err += abs(c.x);
    err += abs(c.y);
    err += abs(c.z);
    err += abs(c.vz);
    return err <= eps;
}

bool operator!=(const ExtY_AutopilotSim_T& a, const ExtY_AutopilotSim_T& b)
{
    return !(a == b);
}
