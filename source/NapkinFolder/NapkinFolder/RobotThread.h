#pragma once

#include "stdafx.h"

class SocketThread;

class RobotThread : public QTcpServer
{
    Q_OBJECT

public:
    explicit RobotThread(QObject *parent = nullptr);
    ~RobotThread();
    
public slots:
    /**
     * \brief 收到其他线程的向机器人发送指令的信号
     * \param data 指令
     */
    void recvCmd2Robot(const QString& data);
    /**
     * \brief 收到设置tcp参数的请求，会断开当前tcp并重新开启
     * \param port 监听端口号
     */
    void recvTcpConfig(int port);

protected:
    /**
     * \brief 当有新的连接传入时会被调用的函数
     * \param handle 
     */
    void incomingConnection(qintptr handle) override;
    void startTcp();

protected slots:
    /**
     * \brief 收到socket发来的robot数据，再转发出去
     */
    void recvRobotData();
    /**
     * \brief 收到socket发来的robot状态，再转发出去
     * \param state 状态
     */
    void recvRobotState(uint16_t state);
    /**
     * \brief 收到链接中断信号
     */
    void recvDisconnected();

signals:
    /**
     * \brief 发送串口状态码，转发
     * \param state 来自PLC_STATE的状态码
     */
    void sendRobotState(uint16_t state);
    /**
     * \brief 发送收到的PLC的信息，转发
     * \param msg 信息文本
     */
    void sendRobotMessage(const QByteArray& msg);
    /**
     * \brief 发送指令到robot，转发
     * \param data 指令
     */
    void sendCmd2Robot(const QString& data);
    /**
     * \brief 析构信号，让SocketThread接收析构
     */
    void finish();

private:
    // 端口号 default:8888
    int port;
    // 等待机器人回应的标志
    bool waitAck, waitSocket;
    QTcpSocket* socket;
    qintptr socketDescriptor;
};
