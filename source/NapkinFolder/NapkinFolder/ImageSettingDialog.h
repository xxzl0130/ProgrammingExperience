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
     * \brief ȷ�ϰ�ť�������﷢��ͼ��������Ϣ
     */
    void accept() override;
    void show();
    // �����ø��µ�����
    void updateSettings();
signals:
    /**
     * \brief �������ͼ������
     * \param autoTime �ع�ʱ���Ƿ��Զ�
     * \param time �ع�ʱ��
     * \param autoGain �����Ƿ��Զ�
     * \param gain ����
     * \param format ͼ���ʽ
     */
    void sendCameraVideoParameters(bool autoTime, double time, bool autoGain, double gain, int format);
    /**
     * \brief ����ͼ�����
     * \param brightness ����
     * \param contrast �Աȶ�
     * \param distance ���
     */
    void sendImageParameters(double brightness, double contrast, double distance);

private:
    std::unique_ptr<Ui::ImageSettingDialog> ui;
};
