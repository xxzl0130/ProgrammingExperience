#pragma once
#include "stdafx.h"
#include "ui_ChartsWindow.h"
#include "QLineChart.h"

class ChartsWindow : public QMainWindow
{
    Q_OBJECT

public:
    ChartsWindow(QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = Qt::WindowFlags());
    virtual ~ChartsWindow();

public slots:
    //���Ա�����ô��ڣ�����ͼ������
    void changeUavCount(int count);
    //����������
    void receiveUavInfo(std::vector<ExtY_AutopilotSim_T> info,double time);
    //��ť��������Ϊcsv
    void saveData();
    void onSetTime0();
    void onSetTime05();
    void onSetTime1();
    void onSetTime5();
    void onSetX5();
    void onSetX10();
    void onSetX30();
    void onSetX60();

protected:
    std::shared_ptr<QLineChart> heightChart, speedChart, phiChart, miuChart;

    std::shared_ptr<Ui::ChartsWindow> ui;

    std::vector<std::vector<std::pair<ExtY_AutopilotSim_T,double>>> uavData;

    void initCharts();
    void connect();
};

