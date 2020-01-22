#pragma once

#include <QtWidgets/QMainWindow>
#include "stdafx.h"
#include "CameraSettingDialog.h"
#include "RobotSettingDialog.h"
#include "PlcSettingDialog.h"
#include "PasswordDialog.h"
#include "ImageSettingDialog.h"

#include "PlcThread.h"
#include "RobotThread.h"
#include "ImageThread.h"

#include "ui_MainWindow.h"

#define INI_FILENAME    "NapkinFolder.ini"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();

signals:
    /**
     * \brief 发送系统状态，主要是供PLC
     * \param state 状态，RUNNING_STATE
     */
    void sendSystemState(uint16_t state);
    /**
     * \brief 向机器人发送指令
     * \param cmd 指令
     */
    void sendCmd2Robot(const QString& cmd);

protected:
    /**
     * \brief 链接各种信号槽
     */
    void connect();
    /**
     * \brief 检查三个模块的ok信号，全部ok允许运行，并向plc发信号
     * \return 是否完成初始化
     */
    bool checkInitState();
    /**
     * \brief 从ini初始化配置参数
     */
    void initSettings();
    void updateStandard(const ImageResult& result);

protected slots:
    /**
     * \brief 接收图像线程的状态码
     * \param state 状态码
     */
    void recvImageState(uint32_t state);
    /**
     * \brief 接收plc线程的状态码
     * \param state 状态码
     */
    void recvPlcState(uint16_t state);
    /**
     * \brief 接受Robot线程的信息
     * \param msg 信息
     */
    void recvPlcMessage(const QByteArray& msg);
    /**
     * \brief 接收plc线程的状态码
     * \param state 状态码
     */
    void recvRobotState(uint16_t state);
    /**
     * \brief 接受Robot线程的信息
     * \param msg 信息
     */
    void recvRobotMessage(const QByteArray& msg);
    /**
     * \brief 开始运行
     */
    void recvStartRunning();
    /**
     * \brief 结束运行
     */
    void recvStopRunning();
    /**
     * \brief 从PLC接收开始采集初始标定的信号
     */
    void recvWaitStandard();
    /**
     * \brief 接收并显示原始图像
     * \param image 图像
     */
    void recvSourceImage(const QPixmap& image);
    /**
     * \brief 接收并显示处理后的图像
     * \param image 图像
     */
    void recvProcessedImage(const QPixmap& image);
    /**
     * \brief 接收并显示以及向plc和机器人发送图像处理结果
     * \param result 图像处理结果
     */
    void recvImageResult(const ImageResult& result);
    /**
     * \brief 收到按钮“保存图片”
     */
    void recvSaveImage();
    /**
     * \brief 收到按钮“保存配置”
     */
    void recvSaveSetting();
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
     * \brief 接收机器人配置参数
     * \param port 端口
     */
    void recvTcpConfig(int port);
    /**
     * \brief 接收串口配置
     * \param port 串口名
     * \param baudrate 波特率
     */
    void recvPlcSetting(QString port, int baudrate);
    /**
     * \brief 关机
     */
    void recvSystemShutdown();
    /**
     * \brief 用于调整布局的事件
     * \param event 事件
     */
    void resizeEvent(QResizeEvent* event) override;
    /**
     * \brief 向机器人发送图像参数
     */
    void sendImage2Robot();

    void information(QWidget* parent, const QString& title, const QString& text);
    void warning(QWidget* parent, const QString& title, const QString& text);
    void critical(QWidget* parent, const QString& title, const QString& text);
private:
    std::unique_ptr<Ui::MainWindowClass> ui;

    // 窗口
    std::unique_ptr<CameraSettingDialog> cameraSettingDialog;
    std::unique_ptr<RobotSettingDialog> robotSettingDialog;
    std::unique_ptr<PlcSettingDialog> plcSettingDialog;
    std::unique_ptr<ImageSettingDialog> imageSettingDialog;

    // 线程
    std::unique_ptr<PlcThread> plcThread;
    std::unique_ptr<RobotThread> robotThread;
    std::unique_ptr<ImageThread> imageThread;

    // 显示图像的scene
    std::unique_ptr<QGraphicsScene> sourceScene;
    std::unique_ptr<QGraphicsScene> processedScene;

    // 保存的图像
    QPixmap sourceImage, processedImage;

    // ini配置
    std::unique_ptr<QSettings> settings;

    // 记录各模块的状态
    uint32_t plcState, robotState, imageState;
    // 当前是否在运行
    bool running;
    // 图像和配置保存路径
    QString savePath;
    // 图像检测结果
    ImageResult imageResult;
    // 标准x
    double imageStandardX;
    // 标准y
    double imageStandardY;
    // 标准长度
    double imageStandardHeight;
    // 标准宽度
    double imageStandardWidth;
    // 标准偏角
    double imageStandardAngle;
    // 最小x or y，小于该值记为0，mm
    double imageMinErrorDis;
    // 最小偏角，小于该值记为0，deg
    double imageMinErrorW;
    // 允许范围边框增量,mm
    double imageBoundingDelta;
    // 标准面积
    double imageArea;
    // 优级品面积误差
    double imageAreaL1;
    // 优级品边数
    int imageFoldL1;
    // 次级品面积误差
    double imageAreaL2;
    // 次级品边数
    int imageFoldL2;
    // 允许偏移误差
    double errorX1, errorY1;
    // 偏移误差上限
    double errorX2, errorY2;

    // 允许范围边框
    cv::RotatedRect boundingRect;
    std::vector<cv::Point2f> boundingRectPoints;
    // 是否在等待初始标定数据
    bool waitImageStandard;

    bool enablePLC = true;
    bool enableRobot = true;
    bool enableCamera = true;
    QString imageFilename;
    RUNNING_STATE systemState;
    QString robotCommand;
    // 日志记录
    bool enablePlcLog, enableRobotLog;
    std::unique_ptr<QFile> plcLogFile, robotLogFile;
	// 检查连接的定时器
	QTimer* testLinkTimer;
};
