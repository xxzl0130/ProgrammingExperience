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
     * \brief �յ������̵߳�������˷���ָ����ź�
     * \param data ָ��
     */
    void recvCmd2Robot(const QString& data);
    /**
     * \brief �յ�����tcp���������󣬻�Ͽ���ǰtcp�����¿���
     * \param port �����˿ں�
     */
    void recvTcpConfig(int port);

protected:
    /**
     * \brief �����µ����Ӵ���ʱ�ᱻ���õĺ���
     * \param handle 
     */
    void incomingConnection(qintptr handle) override;
    void startTcp();

protected slots:
    /**
     * \brief �յ�socket������robot���ݣ���ת����ȥ
     */
    void recvRobotData();
    /**
     * \brief �յ�socket������robot״̬����ת����ȥ
     * \param state ״̬
     */
    void recvRobotState(uint16_t state);
    /**
     * \brief �յ������ж��ź�
     */
    void recvDisconnected();

signals:
    /**
     * \brief ���ʹ���״̬�룬ת��
     * \param state ����PLC_STATE��״̬��
     */
    void sendRobotState(uint16_t state);
    /**
     * \brief �����յ���PLC����Ϣ��ת��
     * \param msg ��Ϣ�ı�
     */
    void sendRobotMessage(const QByteArray& msg);
    /**
     * \brief ����ָ�robot��ת��
     * \param data ָ��
     */
    void sendCmd2Robot(const QString& data);
    /**
     * \brief �����źţ���SocketThread��������
     */
    void finish();

private:
    // �˿ں� default:8888
    int port;
    // �ȴ������˻�Ӧ�ı�־
    bool waitAck, waitSocket;
    QTcpSocket* socket;
    qintptr socketDescriptor;
};
