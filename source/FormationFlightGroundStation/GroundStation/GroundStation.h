#pragma once

#include "stdafx.h"
#include "ui_GroundStation.h"
#include "JsBridge.h"
#include "ControlThread.h"
#include "FormationSettingDialog.h"
#include "ChartsWindow.h"
#include "CollisionThread.h"
#include "UdpThread.h"

class GroundStation : public QMainWindow
{
    Q_OBJECT

public:
    GroundStation(QWidget *parent = Q_NULLPTR);
    virtual ~GroundStation();

signals:
    void requestSendCommand(QByteArray data);

public slots:
    //from udp
    ///接收无人机仿真过程中的状态信息
    void receiveUavState(std::vector<ExtY_AutopilotSim_T> info, double time);

    //from collision
    void receiveCollisionWarning(int index, int type);

    //from web
    ///接收地图点经纬度
    void receiveMapPosition(double lng, double lat);
    ///接收网页的字符串信息
    void receiveMapInfo(const QString& str);
    ///网页在初始化完成后通过JsBridge调用
    void enableUi();

    //from ui
    ///判断是否已输入路径点信息，合法则启动仿真程序和控制线程
    void startSim();
    ///暂停仿真
    void pauseSim();
    ///开始从地图上选点，会清空当前路径点
    void startSelectPath();
    ///地图发来的选取路径结束消息，
    void stopSelectPath();
    ///编队设置窗口发来的信息
    void uavCountChanged(int count);

    //from other thread
    void changeFormationInfoTextNoError(int index, const QString& distance, const QString& time);
    void changeFormationError(int index, const QString& error);
protected:
    QChart *xyChart;
    std::vector<QScatterSeries*> xySeries;
    std::vector<std::vector<UavInfo>> uavInfoSave;
    double zChartTimeDuration, zChartMinTime;
    ControlThread* controlThread;
    CollisionThread* collisionThread;
    UdpThread* udpThread;
    int stepCount, uavCount;

    QTimer *systemTimeTimer;
    QTime *runTime;

    QMediaPlayer mediaPlayer;
    QMediaPlaylist *playList;

    //重置右下角点图
    void resetCharts();
    //初始化ui相关信息
    void initUi();
    //初始化百度地图和JsBridge
    void initMap();
    //一大堆信号槽连接
    void connect();
    //显示编队信息框中的控件
    void showFormationInfo(int size);
    //设置地图当前中心点，参数为经纬度
    void setMapCenter(Coordinate point);
    //从ini文件加载配置
    void initSettings();
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::GroundStationClass *ui;
    JsBridge *jsBridge;
    QWebChannel *webChannel;
    FormationSettingDialog *formationSettingDialog;
    ChartsWindow *chartsWindow;
    std::vector<QLabel*> uavNoLabels, uavErrorLabels, uavDistanceLabels, uavTimeLabels, linkStateLabels;
    std::vector<LED*> led;
};
