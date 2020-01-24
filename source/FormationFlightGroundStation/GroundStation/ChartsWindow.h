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
    //来自编队设置窗口，处理图表数据
    void changeUavCount(int count);
    //来自主窗口
    void receiveUavInfo(std::vector<ExtY_AutopilotSim_T> info,double time);
    //按钮保存数据为csv
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

