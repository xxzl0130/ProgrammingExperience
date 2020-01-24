#pragma once

#include <QtWidgets>
#include <QtWidgets/QApplication>
#include <QtWidgets>
#include <QtWidgets/QMainWindow>
#include <QThread>
#include <QTimer>
#include <QUdpSocket>
#include <QByteArray>
#include <QtCharts/QtCharts>
#include <QtCharts/QChartView>
#include <QPixmap>
#include <QPalette>
#include <QWebChannel>
#include <QFile>
#include <QUrl>
#include <QDir>
#include <QMutex>
#include <QMutexLocker>
#include <QSettings>
#include <QCloseEvent>
#include <QList>
#include <QVector>
#include <QFileDialog>
#include <QAxObject>
#include <QAxWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>

#include <vector>
#include <memory>
#include <algorithm>
#include <ctime>

#include "CommonDefs.h"
#include "CoordConverter.h"
#include "Autopilot.h"
#include "PID.h"

extern double LeaderDistance;

//端口参数定义在全局，方便各子类调用
extern int infoPort, groundPort, uavPort;