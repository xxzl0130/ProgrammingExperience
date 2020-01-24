#pragma once
#include "stdafx.h"
class QLineChart : public QChart
{
    Q_OBJECT
public:
    explicit QLineChart(QGraphicsItem *parent = nullptr, Qt::WindowFlags wFlags = Qt::WindowFlags());
    virtual ~QLineChart();

    void setSeriesSize(unsigned size);
    //����Series�����֣��Զ�����������
    void setSeriesName(const QString& name);
    void addSeries(QLineSeries *s);
    //����x�᳤�ȣ���λΪ��
    void setXAxisLength(double sec);
    
public slots:
    //ˢ�¼������0��Ϊ׼
    void setInterval(int msec);
    //x�᳤��
    void setXLength(double s);
    void addPoint(int index, double x, double y);
    void flush();//����ˢ��

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

