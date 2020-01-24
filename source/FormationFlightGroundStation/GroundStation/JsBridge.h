#pragma once
#include <stdafx.h>
#include "CoordConverter.h"

class JsBridge : public QObject
{
    Q_OBJECT
public:
    JsBridge(QObject* parent = nullptr);
    ~JsBridge();

signals:
    // to js
    void drawPath(int index, double lng, double lat);
    void clearPath(int index);
    
    // to window
    void sendPosition(double lng, double lat);
    void sendInfo(const QString& str);
    void sendSelectPathStoped();
    void sendInitComplete();

public slots:
    // from js
    void receivePosition(double lng, double lat);
    void receiveInfo(const QString& str);
    void receiveSelectPathStoped();
    void receiveInitComplete();

    // from window
    void callDrawPath(int index, double lng, double lat);
    void callDrawPath(int index, const Coordinate &point);
    void callClearPath(int index);
};

