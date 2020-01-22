#pragma once

#include <QSerialPort>
#include "stdafx.h"
#include "Modbus.h"

/**
 * \brief PLC通讯模块，实际上并没有使用多线程，因为QSerialPort是非阻塞模型
 */
class PlcThread : public QObject
{
    Q_OBJECT

public:
    explicit PlcThread(QObject *parent = nullptr);
    virtual ~PlcThread();

    // 从机地址
    uint8_t slaveAddr = 0x01;

public slots:
    /**
     * \brief 请求回应Modbus03读多个寄存器
     * \param data 数据
     * \param size uint16_t数量
     */
    void recvSendModbus03Response(const uint16_t* data, uint8_t size);
    /**
     * \brief 生成查询指令的回复
     * \param data 数据
     */
    void recvSendQueryResponse(uint16_t data);
    void recvSendMsg(uint8_t* data, size_t len);
    /**
     * \brief 请求Modbus06写单个寄存器（06的收发数据是一样的）
     * \param addr 寄存器地址
     * \param data 数据
     */
    void recvSendModbus06(uint16_t addr, uint16_t data);
    /**
     * \brief 请求Modbus10写多个寄存器
     * \param addr 寄存器起始地址
     * \param number 数量
     * \param data 数据
     */
    void recvWriteRegisters(uint16_t addr, uint16_t number, const uint16_t* data);
    /**
     * \brief 请求Modbus10写多个寄存器的回应
     * \param addr 起始地址
     * \param number 数量
     */
    void recvSendModbus10Response(uint16_t addr, uint16_t number);
    /**
     * \brief 收到设置串口参数的请求，会断开当前串口并重新开启
     * \param port 串口号
     * \param baudRate 波特率
     */
    void recvSerialConfig(const QString& port, int baudRate);
    /**
     * \brief 开启线程
     */
    void start();
    /**
     * \brief 结束线程
     */
    void stop();
    /**
     * \brief 接收图像线程的状态码
     * \param state 状态码
     */
    void recvImageState(uint16_t state);
    /**
     * \brief 接收plc线程的状态码
     * \param state 状态码
     */
    void recvRobotState(uint16_t state);
    /**
     * \brief 接收系统状态
     * \param state 状态
     */
    void recvSystemState(uint16_t state);

protected:

    
    void processModbus(uint8_t* data, uint8_t size);
    void printOutBuf(size_t size);
    void clearInBuf();

protected slots:
    /**
     * \brief 串口有新数据，接收数据
     */
    void recvSerialData();
	/**
	 * \brief 开启串口，并对串口状态和PLC状态做检测，无法正常运行时会退出该线程
	 */
	void openSerial();

signals:
    /**
     * \brief 发送串口状态码
     * \param state 来自PLC_STATE的状态码
     */
    void sendPlcState(uint16_t state);

    /**
     * \brief 发送收到的PLC的信息
     * \param msg 信息文本
     */
    void sendPlcMessage(const QByteArray& msg);

    /**
     * \brief 发送读到的寄存器信息
     * \param data 数据
     * \param size 数量
     */
    void sendRegisterData(uint16_t* data, uint8_t size);

    void sendModbus10Info(uint16_t addr, uint16_t number);
    void sendModbus06Info(uint16_t addr, uint16_t number);

    ///以下为PLC请求执行信号

    void sendReset();
    /**
     * \brief 请求拍摄照片
     */
    void sendShoot();
    /**
     * \brief 向机器人传输数据
     */
    void sendTransmit();
    /**
     * \brief 待机
     */
    void sendWait();
    /**
     * \brief 检查连接
     */
    void sendCheckConnect();
    /**
     * \brief 关机
     */
    void sendSystemShutdown();
    /**
     * \brief 检测标准图像，由主窗口置标志位后再请求图像处理
     */
    void sendCheckStandard();

private:
    // 串口号 default:"com1"
    QString port;
    // 波特率 default:9600
    int baudRate;
    // 串口对象
    std::unique_ptr<QSerialPort> serialPort;
    // 等待PLC回应的标志
    bool waitAck;
    static constexpr size_t bufferSize = 256;
    // 输入数据偏移
    size_t inOffset;
    // 读取偏移
    size_t readOffset;
    uint8_t outBuf[bufferSize], inBuf[bufferSize];
    uint16_t uint16Buf[bufferSize];
    // 记录各模块的状态
    uint16_t robotState, imageState;
    uint16_t systemState;
	QTimer* timer;
	bool firstOK = false;
};
