#pragma once

#include "stdafx.h"
#include "ui_ImageSetting.h"

class ImageSettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ImageSettingDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~ImageSettingDialog();

    bool autoTime = false;
    double time = 50000; 
    bool autoGain = false; 
    double gain = 0; 
    int format = PixelType_Gvsp_Mono8;
    double brightness = 1.0;
    double contrast = 0;
    double distance = 1200;

public slots:
    /**
     * \brief 确认按钮，在这里发送图像配置信息
     */
    void accept() override;
    void show();
    // 将配置更新到界面
    void updateSettings();
signals:
    /**
     * \brief 发送相机图像配置
     * \param autoTime 曝光时间是否自动
     * \param time 曝光时间
     * \param autoGain 增益是否自动
     * \param gain 增益
     * \param format 图像格式
     */
    void sendCameraVideoParameters(bool autoTime, double time, bool autoGain, double gain, int format);
    /**
     * \brief 发送图像参数
     * \param brightness 亮度
     * \param contrast 对比度
     * \param distance 物距
     */
    void sendImageParameters(double brightness, double contrast, double distance);

private:
    std::unique_ptr<Ui::ImageSettingDialog> ui;
};
