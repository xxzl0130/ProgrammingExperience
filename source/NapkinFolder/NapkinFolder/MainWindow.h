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
     * \brief ����ϵͳ״̬����Ҫ�ǹ�PLC
     * \param state ״̬��RUNNING_STATE
     */
    void sendSystemState(uint16_t state);
    /**
     * \brief ������˷���ָ��
     * \param cmd ָ��
     */
    void sendCmd2Robot(const QString& cmd);

protected:
    /**
     * \brief ���Ӹ����źŲ�
     */
    void connect();
    /**
     * \brief �������ģ���ok�źţ�ȫ��ok�������У�����plc���ź�
     * \return �Ƿ���ɳ�ʼ��
     */
    bool checkInitState();
    /**
     * \brief ��ini��ʼ�����ò���
     */
    void initSettings();
    void updateStandard(const ImageResult& result);

protected slots:
    /**
     * \brief ����ͼ���̵߳�״̬��
     * \param state ״̬��
     */
    void recvImageState(uint32_t state);
    /**
     * \brief ����plc�̵߳�״̬��
     * \param state ״̬��
     */
    void recvPlcState(uint16_t state);
    /**
     * \brief ����Robot�̵߳���Ϣ
     * \param msg ��Ϣ
     */
    void recvPlcMessage(const QByteArray& msg);
    /**
     * \brief ����plc�̵߳�״̬��
     * \param state ״̬��
     */
    void recvRobotState(uint16_t state);
    /**
     * \brief ����Robot�̵߳���Ϣ
     * \param msg ��Ϣ
     */
    void recvRobotMessage(const QByteArray& msg);
    /**
     * \brief ��ʼ����
     */
    void recvStartRunning();
    /**
     * \brief ��������
     */
    void recvStopRunning();
    /**
     * \brief ��PLC���տ�ʼ�ɼ���ʼ�궨���ź�
     */
    void recvWaitStandard();
    /**
     * \brief ���ղ���ʾԭʼͼ��
     * \param image ͼ��
     */
    void recvSourceImage(const QPixmap& image);
    /**
     * \brief ���ղ���ʾ������ͼ��
     * \param image ͼ��
     */
    void recvProcessedImage(const QPixmap& image);
    /**
     * \brief ���ղ���ʾ�Լ���plc�ͻ����˷���ͼ������
     * \param result ͼ������
     */
    void recvImageResult(const ImageResult& result);
    /**
     * \brief �յ���ť������ͼƬ��
     */
    void recvSaveImage();
    /**
     * \brief �յ���ť���������á�
     */
    void recvSaveSetting();
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
     * \brief ���ջ��������ò���
     * \param port �˿�
     */
    void recvTcpConfig(int port);
    /**
     * \brief ���մ�������
     * \param port ������
     * \param baudrate ������
     */
    void recvPlcSetting(QString port, int baudrate);
    /**
     * \brief �ػ�
     */
    void recvSystemShutdown();
    /**
     * \brief ���ڵ������ֵ��¼�
     * \param event �¼�
     */
    void resizeEvent(QResizeEvent* event) override;
    /**
     * \brief ������˷���ͼ�����
     */
    void sendImage2Robot();

    void information(QWidget* parent, const QString& title, const QString& text);
    void warning(QWidget* parent, const QString& title, const QString& text);
    void critical(QWidget* parent, const QString& title, const QString& text);
private:
    std::unique_ptr<Ui::MainWindowClass> ui;

    // ����
    std::unique_ptr<CameraSettingDialog> cameraSettingDialog;
    std::unique_ptr<RobotSettingDialog> robotSettingDialog;
    std::unique_ptr<PlcSettingDialog> plcSettingDialog;
    std::unique_ptr<ImageSettingDialog> imageSettingDialog;

    // �߳�
    std::unique_ptr<PlcThread> plcThread;
    std::unique_ptr<RobotThread> robotThread;
    std::unique_ptr<ImageThread> imageThread;

    // ��ʾͼ���scene
    std::unique_ptr<QGraphicsScene> sourceScene;
    std::unique_ptr<QGraphicsScene> processedScene;

    // �����ͼ��
    QPixmap sourceImage, processedImage;

    // ini����
    std::unique_ptr<QSettings> settings;

    // ��¼��ģ���״̬
    uint32_t plcState, robotState, imageState;
    // ��ǰ�Ƿ�������
    bool running;
    // ͼ������ñ���·��
    QString savePath;
    // ͼ������
    ImageResult imageResult;
    // ��׼x
    double imageStandardX;
    // ��׼y
    double imageStandardY;
    // ��׼����
    double imageStandardHeight;
    // ��׼���
    double imageStandardWidth;
    // ��׼ƫ��
    double imageStandardAngle;
    // ��Сx or y��С�ڸ�ֵ��Ϊ0��mm
    double imageMinErrorDis;
    // ��Сƫ�ǣ�С�ڸ�ֵ��Ϊ0��deg
    double imageMinErrorW;
    // ����Χ�߿�����,mm
    double imageBoundingDelta;
    // ��׼���
    double imageArea;
    // �ż�Ʒ������
    double imageAreaL1;
    // �ż�Ʒ����
    int imageFoldL1;
    // �μ�Ʒ������
    double imageAreaL2;
    // �μ�Ʒ����
    int imageFoldL2;
    // ����ƫ�����
    double errorX1, errorY1;
    // ƫ���������
    double errorX2, errorY2;

    // ����Χ�߿�
    cv::RotatedRect boundingRect;
    std::vector<cv::Point2f> boundingRectPoints;
    // �Ƿ��ڵȴ���ʼ�궨����
    bool waitImageStandard;

    bool enablePLC = true;
    bool enableRobot = true;
    bool enableCamera = true;
    QString imageFilename;
    RUNNING_STATE systemState;
    QString robotCommand;
    // ��־��¼
    bool enablePlcLog, enableRobotLog;
    std::unique_ptr<QFile> plcLogFile, robotLogFile;
	// ������ӵĶ�ʱ��
	QTimer* testLinkTimer;
};
