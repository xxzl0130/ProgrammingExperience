#pragma once

#include <QDialog>
#include "stdafx.h"

#include "ui_CameraSettingDialog.h"

class CameraSettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CameraSettingDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~CameraSettingDialog();
    QString filename;
public slots:
    /**
     * \brief 接收“查找设备”按钮
     */
    void recvSearchDevice();
    /**
     * \brief 打开文件
     */
    void recvOpenFile();
    /**
     * \brief 确认按钮，在这里发送相机配置信息
     */
    void accept() override;
    void show();

signals:
    void sendImageFilename(const QString& filename);
    void sendCameraInfo(MV_CC_DEVICE_INFO* pInfo);

protected:
    static void clear(MV_CC_DEVICE_INFO_LIST& list);

private:
    std::unique_ptr<Ui::CameraSettingDialog> ui;
    MV_CC_DEVICE_INFO_LIST deviceInfo;
};
