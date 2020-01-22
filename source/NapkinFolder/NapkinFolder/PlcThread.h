#pragma once

#include <QSerialPort>
#include "stdafx.h"
#include "Modbus.h"

/**
 * \brief PLCͨѶģ�飬ʵ���ϲ�û��ʹ�ö��̣߳���ΪQSerialPort�Ƿ�����ģ��
 */
class PlcThread : public QObject
{
    Q_OBJECT

public:
    explicit PlcThread(QObject *parent = nullptr);
    virtual ~PlcThread();

    // �ӻ���ַ
    uint8_t slaveAddr = 0x01;

public slots:
    /**
     * \brief �����ӦModbus03������Ĵ���
     * \param data ����
     * \param size uint16_t����
     */
    void recvSendModbus03Response(const uint16_t* data, uint8_t size);
    /**
     * \brief ���ɲ�ѯָ��Ļظ�
     * \param data ����
     */
    void recvSendQueryResponse(uint16_t data);
    void recvSendMsg(uint8_t* data, size_t len);
    /**
     * \brief ����Modbus06д�����Ĵ�����06���շ�������һ���ģ�
     * \param addr �Ĵ�����ַ
     * \param data ����
     */
    void recvSendModbus06(uint16_t addr, uint16_t data);
    /**
     * \brief ����Modbus10д����Ĵ���
     * \param addr �Ĵ�����ʼ��ַ
     * \param number ����
     * \param data ����
     */
    void recvWriteRegisters(uint16_t addr, uint16_t number, const uint16_t* data);
    /**
     * \brief ����Modbus10д����Ĵ����Ļ�Ӧ
     * \param addr ��ʼ��ַ
     * \param number ����
     */
    void recvSendModbus10Response(uint16_t addr, uint16_t number);
    /**
     * \brief �յ����ô��ڲ��������󣬻�Ͽ���ǰ���ڲ����¿���
     * \param port ���ں�
     * \param baudRate ������
     */
    void recvSerialConfig(const QString& port, int baudRate);
    /**
     * \brief �����߳�
     */
    void start();
    /**
     * \brief �����߳�
     */
    void stop();
    /**
     * \brief ����ͼ���̵߳�״̬��
     * \param state ״̬��
     */
    void recvImageState(uint16_t state);
    /**
     * \brief ����plc�̵߳�״̬��
     * \param state ״̬��
     */
    void recvRobotState(uint16_t state);
    /**
     * \brief ����ϵͳ״̬
     * \param state ״̬
     */
    void recvSystemState(uint16_t state);

protected:

    
    void processModbus(uint8_t* data, uint8_t size);
    void printOutBuf(size_t size);
    void clearInBuf();

protected slots:
    /**
     * \brief �����������ݣ���������
     */
    void recvSerialData();
	/**
	 * \brief �������ڣ����Դ���״̬��PLC״̬����⣬�޷���������ʱ���˳����߳�
	 */
	void openSerial();

signals:
    /**
     * \brief ���ʹ���״̬��
     * \param state ����PLC_STATE��״̬��
     */
    void sendPlcState(uint16_t state);

    /**
     * \brief �����յ���PLC����Ϣ
     * \param msg ��Ϣ�ı�
     */
    void sendPlcMessage(const QByteArray& msg);

    /**
     * \brief ���Ͷ����ļĴ�����Ϣ
     * \param data ����
     * \param size ����
     */
    void sendRegisterData(uint16_t* data, uint8_t size);

    void sendModbus10Info(uint16_t addr, uint16_t number);
    void sendModbus06Info(uint16_t addr, uint16_t number);

    ///����ΪPLC����ִ���ź�

    void sendReset();
    /**
     * \brief ����������Ƭ
     */
    void sendShoot();
    /**
     * \brief ������˴�������
     */
    void sendTransmit();
    /**
     * \brief ����
     */
    void sendWait();
    /**
     * \brief �������
     */
    void sendCheckConnect();
    /**
     * \brief �ػ�
     */
    void sendSystemShutdown();
    /**
     * \brief ����׼ͼ�����������ñ�־λ��������ͼ����
     */
    void sendCheckStandard();

private:
    // ���ں� default:"com1"
    QString port;
    // ������ default:9600
    int baudRate;
    // ���ڶ���
    std::unique_ptr<QSerialPort> serialPort;
    // �ȴ�PLC��Ӧ�ı�־
    bool waitAck;
    static constexpr size_t bufferSize = 256;
    // ��������ƫ��
    size_t inOffset;
    // ��ȡƫ��
    size_t readOffset;
    uint8_t outBuf[bufferSize], inBuf[bufferSize];
    uint16_t uint16Buf[bufferSize];
    // ��¼��ģ���״̬
    uint16_t robotState, imageState;
    uint16_t systemState;
	QTimer* timer;
	bool firstOK = false;
};
