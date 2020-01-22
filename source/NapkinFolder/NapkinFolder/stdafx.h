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

//为避免内存泄漏，本项目中所有非平凡对象一律使用stared_ptr（多线程）或unique_ptr（单线程）
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