#pragma once
#include "stdafx.h"

class CameraThread : public QThread
{
	Q_OBJECT
public:
	CameraThread(QObject *parent = nullptr);
	~CameraThread();

	void run() override;
	void stop();

	/**
	 * \brief ��������ͷ
	 * \return �����Ƿ�ɹ�
	 */
	bool openCamera();

	int width, height;
	unsigned int index;

signals:
	void sendImage(const cv::Mat& img);
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());

private:
	cv::Mat image;
	bool running;
	cv::VideoCapture camera;
};

