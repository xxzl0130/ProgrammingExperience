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
	 * \brief 由主线程调用，保存数据信息
	 * \param data 数据指针
	 * \param size 大小，最大512byte
	 */
	void sendData(const char* data, const size_t size);

protected slots:
	void readData();

	/*
	将数据以DataFrame的形式发送。
	返回发送的总字节数。
	*/
	size_t sendDataFrame(char *data, size_t size);
	size_t sendDataFrame(std::string &data);
	/*
	接收一帧DataFrame，该帧以前的数据将被抛弃。
	返回接收的总字节数。
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

