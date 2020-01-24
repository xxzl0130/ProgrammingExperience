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
    ///�������˻���������е�״̬��Ϣ
    void receiveUavState(std::vector<ExtY_AutopilotSim_T> info, double time);

    //from collision
    void receiveCollisionWarning(int index, int type);

    //from web
    ///���յ�ͼ�㾭γ��
    void receiveMapPosition(double lng, double lat);
    ///������ҳ���ַ�����Ϣ
    void receiveMapInfo(const QString& str);
    ///��ҳ�ڳ�ʼ����ɺ�ͨ��JsBridge����
    void enableUi();

    //from ui
    ///�ж��Ƿ�������·������Ϣ���Ϸ��������������Ϳ����߳�
    void startSim();
    ///��ͣ����
    void pauseSim();
    ///��ʼ�ӵ�ͼ��ѡ�㣬����յ�ǰ·����
    void startSelectPath();
    ///��ͼ������ѡȡ·��������Ϣ��
    void stopSelectPath();
    ///������ô��ڷ�������Ϣ
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

    //�������½ǵ�ͼ
    void resetCharts();
    //��ʼ��ui�����Ϣ
    void initUi();
    //��ʼ���ٶȵ�ͼ��JsBridge
    void initMap();
    //һ����źŲ�����
    void connect();
    //��ʾ�����Ϣ���еĿؼ�
    void showFormationInfo(int size);
    //���õ�ͼ��ǰ���ĵ㣬����Ϊ��γ��
    void setMapCenter(Coordinate point);
    //��ini�ļ���������
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
