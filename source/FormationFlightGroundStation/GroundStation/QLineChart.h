#pragma once
#include "stdafx.h"
class QLineChart : public QChart
{
    Q_OBJECT
public:
    explicit QLineChart(QGraphicsItem *parent = nullptr, Qt::WindowFlags wFlags = Qt::WindowFlags());
    virtual ~QLineChart();

    void setSeriesSize(unsigned size);
    //设置Series的名字，自动添加数字序号
    void setSeriesName(const QString& name);
    void addSeries(QLineSeries *s);
    //设置x轴长度，单位为秒
    void setXAxisLength(double sec);
    
public slots:
    //刷新间隔，以0号为准
    void setInterval(int msec);
    //x轴长度
    void setXLength(double s);
    void addPoint(int index, double x, double y);
    void flush();//立即刷新

protected:
    std::vector<QLineSeries*> series;
    QString seriesName;
    int interval;
    double xLength;
    double xMin,xMax, yMin, yMax;
    QTime lastTime;
    std::vector<QList<QPointF>> buffer;
    std::vector<QList<QPointF>> seriesData;
};

