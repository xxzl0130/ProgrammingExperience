#pragma once

//#define FACTORY_TEST

#ifdef FACTORY_TEST
#define QT_MESSAGELOGCONTEXT 
#endif

#include <QtWidgets>
#include <QMessageBox>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>
#include <QFileDialog>
#include <QPixmap>
#include <QImage>
#include <QSettings>
#include <QDateTime>
#include <QMutex>
#include <QMutexLocker>
#include <QTimer>

//Ϊ�����ڴ�й©������Ŀ�����з�ƽ������һ��ʹ��stared_ptr�����̣߳���unique_ptr�����̣߳�
#include <memory>
#include <set>

#include <exception>
#include <sstream>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include "ValueDefines.h"
#include "MvCamera.h"

#include "NapkinImageProcess.h"

void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg);

extern bool enableGUI;