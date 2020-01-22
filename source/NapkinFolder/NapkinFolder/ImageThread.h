#pragma once

#include <QThread>
#include "stdafx.h"

class ImageThread : public QObject
{
    Q_OBJECT

public:
    explicit ImageThread(QObject *parent = nullptr);
    ~ImageThread();

    // �����ص������Ľӿ�
    void callSendState(uint32_t state);

    /**
     * \brief ��cv::Matת��ΪQPixmat
     * \param src cv::Mat
     * \param dst QPixmat
     */
    static void convertCvmat2Pixmat(const cv::Mat& src, QPixmap& dst);
    
    // ͼ�������
    ImageParameters imageParameters;
    // �ع�ʱ���Զ�
    bool autoTime;
    // �ع�ʱ��
    double exposureTime;
    // �����Զ�
    bool autoGain;
    // �ع�����
    double exposureGain;
    // ͼ���ʽ
    int imageFormat;
    // ������ʱms
    int heartbeatTimeout = 60000;

public slots:
    /**
     * \brief ����������ã��᳢�Դ����������һ�βɼ�
     * \param pInfo �������ָ��
     */
    void recvCameraInfo(MV_CC_DEVICE_INFO* pInfo);
    /**
     * \brief ����ͼ���ļ�����
     * \param filename �ļ���
     */
    void recvImageFilename(const QString& filename);
    /**
     * \brief �������ͼ�����ò����õ����
     * \param autoTime �ع�ʱ���Ƿ��Զ�
     * \param time �ع�ʱ��
     * \param autoGain �����Ƿ��Զ�
     * \param gain ����
     * \param format ͼ���ʽ
     */
    void recvCameraVideoParameters(bool autoTime, double time, bool autoGain, double gain, int format);
    /**
     * \brief ����ͼ�����
     * \param brightness ����
     * \param contrast �Աȶ�
     * \param distance ���
     */
    void recvImageParameters(double brightness, double contrast, double distance);
    /**
     * \brief ��ȡͼ�񲢼��ͽ��첽
     */
    void detectNapkin();
    /**
     * \brief ��ȡͼ�񲢼��оߣ��첽
     */
    void detectHolder();
    /**
     * \brief ��������ǰ�Ľ���
     */
    void stop();
    /**
     * \brief �����������
     */
    void testCamera();

protected slots:
    /**
     * \brief �����߳������źţ����ù�������
     */
    void recvThreadStarted();
    /**
     * \brief �����߳̽����źţ������߳�
     */
    void recvThreadStopped();
    /**
     * \brief �ڲ��Ļ�ȡͼ���������浽this->image����3��ͼ��ʽͳһ���cv::Mat
     * \return �Ƿ�ɹ�
     */
    bool getOneFrameInterior();
    /**
     * \brief ����������
     */
    void sendHeartbeat();

signals:
    /**
     * \brief ����ͼ����״̬��Ϣ
     * \param state ����
     */
    void sendImageState(uint32_t state);

    /**
     * \brief ����ͼ������
     * \param result ͼ������
     */
    void sendImageResult(const ImageResult& result);
    /**
     * \brief ����ԭʼͼ��
     * \param image ͼ��
     */
    void sendSourceImage(const QPixmap& image);
    /**
     * \brief ���ʹ�����ͼ��
     * \param image ͼ��
     */
    void sendProcessedImage(const QPixmap& image);

protected:
    void run();
    /**
     * \brief �������
     * \return �Ƿ�ɹ�
     */
    bool openCamera();
    /**
     * \brief �ر������
     */
    void closeCamera();

private:
    // ��ǰͼ������
    enum
    {
        NOT_INIT,
        FROM_IMAGE_FILE,
        FROM_VIDEO_FILE,
        FROM_CAMERA
    } imageType;
    enum
    {
        DETECT_WAIT = 0,
        DETECT_NAPKIN,
        DETECT_HOLDER,
        TEST_CAMERA
    } workType;
    // ͼ���ļ���
    QString filename;
    // ���info
    std::unique_ptr<MV_CC_DEVICE_INFO> cameraInfo;
    // ���߳�
    std::unique_ptr<QThread> thread;
    // ���ָ��
    std::unique_ptr<MvCamera> camera;
    // ֡��Ϣ
    std::unique_ptr<MV_FRAME_OUT_INFO_EX> frameInfo;
    // ����򿪱�־
    bool cameraOpened;
    // ���ڲɼ���־
    bool grabbing;
    // ��֡��־�����ڼ�����״̬
    bool firstFrame;
    // ͼ��
    cv::Mat image, imageProcessed;
    // ��Ƶ�ӿ�
    std::unique_ptr<cv::VideoCapture> videoCapture;
    // ��Ƶ�򿪱�־
    bool videoOpened;
    // ͼ������
    ImageResult imageResult;
    // ԭʼͼ��ת��ΪPixmap
    QPixmap sourcePixmap;
    // �����ͼ��ת��ΪPixmap
    QPixmap processedPixmap;
    // ����������߳���
    std::unique_ptr<QMutex> cameraMutex;
    // ������ʱ��
    QTimer heartbeatTimer;
};
