#pragma once
#include <QtWidgets>
#include <QtWidgets/QMainWindow>
#include <QThread>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QMutex>
#include <QMutexLocker>
#include <QTimer>

#include <opencv2/opencv.hpp>

#include <vector>
#include <algorithm>
#include <exception>
#include <map>

#include "DataFrame.h"
#include "common.h"

QImage cvMat2QImage(const cv::Mat& mat);
cv::Mat QImage2cvMat(QImage image);