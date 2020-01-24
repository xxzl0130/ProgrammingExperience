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
	 * \brief 开启摄像头
	 * \return 返回是否成功
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

