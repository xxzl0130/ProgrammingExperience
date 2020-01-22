#pragma once

#include <QThread>
#include "stdafx.h"

class ImageThread : public QObject
{
    Q_OBJECT

public:
    explicit ImageThread(QObject *parent = nullptr);
    ~ImageThread();

    // 留给回调函数的接口
    void callSendState(uint32_t state);

    /**
     * \brief 将cv::Mat转换为QPixmat
     * \param src cv::Mat
     * \param dst QPixmat
     */
    static void convertCvmat2Pixmat(const cv::Mat& src, QPixmap& dst);
    
    // 图像处理参数
    ImageParameters imageParameters;
    // 曝光时间自动
    bool autoTime;
    // 曝光时间
    double exposureTime;
    // 增益自动
    bool autoGain;
    // 曝光增益
    double exposureGain;
    // 图像格式
    int imageFormat;
    // 心跳超时ms
    int heartbeatTimeout = 60000;

public slots:
    /**
     * \brief 接收相机配置，会尝试打开相机并进行一次采集
     * \param pInfo 相机配置指针
     */
    void recvCameraInfo(MV_CC_DEVICE_INFO* pInfo);
    /**
     * \brief 接收图像文件配置
     * \param filename 文件名
     */
    void recvImageFilename(const QString& filename);
    /**
     * \brief 接收相机图像配置并配置到相机
     * \param autoTime 曝光时间是否自动
     * \param time 曝光时间
     * \param autoGain 增益是否自动
     * \param gain 增益
     * \param format 图像格式
     */
    void recvCameraVideoParameters(bool autoTime, double time, bool autoGain, double gain, int format);
    /**
     * \brief 接收图像参数
     * \param brightness 亮度
     * \param contrast 对比度
     * \param distance 物距
     */
    void recvImageParameters(double brightness, double contrast, double distance);
    /**
     * \brief 获取图像并检测餐巾，异步
     */
    void detectNapkin();
    /**
     * \brief 获取图像并检测夹具，异步
     */
    void detectHolder();
    /**
     * \brief 用于销毁前的结束
     */
    void stop();
    /**
     * \brief 测试相机连接
     */
    void testCamera();

protected slots:
    /**
     * \brief 接收线程启动信号，调用工作函数
     */
    void recvThreadStarted();
    /**
     * \brief 接收线程结束信号，清理线程
     */
    void recvThreadStopped();
    /**
     * \brief 内部的获取图像函数，保存到this->image，将3种图像方式统一输出cv::Mat
     * \return 是否成功
     */
    bool getOneFrameInterior();
    /**
     * \brief 发送心跳包
     */
    void sendHeartbeat();

signals:
    /**
     * \brief 发送图像处理状态信息
     * \param state 代码
     */
    void sendImageState(uint32_t state);

    /**
     * \brief 发送图像处理结果
     * \param result 图像处理结果
     */
    void sendImageResult(const ImageResult& result);
    /**
     * \brief 发送原始图像
     * \param image 图像
     */
    void sendSourceImage(const QPixmap& image);
    /**
     * \brief 发送处理后的图像
     * \param image 图像
     */
    void sendProcessedImage(const QPixmap& image);

protected:
    void run();
    /**
     * \brief 打开摄像机
     * \return 是否成功
     */
    bool openCamera();
    /**
     * \brief 关闭摄像机
     */
    void closeCamera();

private:
    // 当前图像类型
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
    // 图像文件名
    QString filename;
    // 相机info
    std::unique_ptr<MV_CC_DEVICE_INFO> cameraInfo;
    // 多线程
    std::unique_ptr<QThread> thread;
    // 相机指针
    std::unique_ptr<MvCamera> camera;
    // 帧信息
    std::unique_ptr<MV_FRAME_OUT_INFO_EX> frameInfo;
    // 相机打开标志
    bool cameraOpened;
    // 正在采集标志
    bool grabbing;
    // 首帧标志，用于检测相机状态
    bool firstFrame;
    // 图像
    cv::Mat image, imageProcessed;
    // 视频接口
    std::unique_ptr<cv::VideoCapture> videoCapture;
    // 视频打开标志
    bool videoOpened;
    // 图像处理结果
    ImageResult imageResult;
    // 原始图像转换为Pixmap
    QPixmap sourcePixmap;
    // 处理后图像转换为Pixmap
    QPixmap processedPixmap;
    // 相机操作多线程锁
    std::unique_ptr<QMutex> cameraMutex;
    // 心跳定时器
    QTimer heartbeatTimer;
};
