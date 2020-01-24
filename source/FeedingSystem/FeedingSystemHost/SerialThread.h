#pragma once
#include "stdafx.h"

class Serial:public QObject
{
	Q_OBJECT
public:
	Serial(QObject *parent = nullptr);
	~Serial();

public slots:
	void setSerialConfig(const QString& port, int baud);
	/**
	 * \brief �����̵߳��ã�����������Ϣ
	 * \param data ����ָ��
	 * \param size ��С�����512byte
	 */
	void sendData(const char* data, const size_t size);

protected slots:
	void readData();

	/*
	��������DataFrame����ʽ���͡�
	���ط��͵����ֽ�����
	*/
	size_t sendDataFrame(char *data, size_t size);
	size_t sendDataFrame(std::string &data);
	/*
	����һ֡DataFrame����֡��ǰ�����ݽ���������
	���ؽ��յ����ֽ�����
	*/
	size_t receiveDataFrame(char *buf);

signals:
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	void receiveData(const int *data, const size_t size);
	void openSucess();

private:
	QSerialPort serial;
	bool running,waitACK;
	const static size_t maxLen = 256;
	char buf[maxLen],buf2[maxLen];
	int dataBuf[maxLen];
	size_t size;

	void resend();
};

