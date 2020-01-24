#pragma once

#include "stdafx.h"

class ImageProcessThread:public QThread
{
	Q_OBJECT
public:
	ImageProcessThread(QObject *parent = nullptr);
	~ImageProcessThread();

	void run() override;
	void stop();

	bool showContours;

public slots:
	void setImage(const cv::Mat& img);

signals:
	void sendImage(const cv::Mat& img);
	void sendPoint(double x, double y);
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());

private:
	cv::Mat image;
	bool running;
	bool updated;
	QMutex mutex;
};

