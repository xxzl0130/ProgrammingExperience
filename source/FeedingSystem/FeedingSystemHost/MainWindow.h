#pragma once

#include "ui_MainWindow.h"
#include "CameraThread.h"
#include "SerialSetWindow.h"
#include "SerialThread.h"
#include "ImageProcessThread.h"
#include "ProgramThread.h"

/*
 * 整体流程：
 * SerialSetWindow检测可用串口并将信息发给Serial
 * Serial在主线程进行串口读写。本想做成多线程读写，但不支持，只能在主线程。
 * CameraThread在一个线程中负责读取摄像头数据，并发送出来
 * ImageProcessThread在另一个线程中负责处理图像，接收CameraThread发来的图像，发出处理得到的坐标
 * ProgramThread负责解析程序进行控制，相关指令通过信号发送到主线程处理
 */

struct Position
{
	double x, y, z, c;
	Position():x(0),y(0),z(0),c(0)
	{
	}
	Position(double _x,double _y,double _z,double _c) :x(_x), y(_y), z(_z), c(_c)
	{
	}
};

class MainWindow: public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();

	Serial* serial;

	void closeEvent(QCloseEvent *event) override;

signals:
	void closed();

public slots:
	/**
	 * \brief 通用的报错窗口模板，因为窗口只能在主线程创建
	 * \param text 文本
	 * \param info 信息
	 * \param title 标题
	 */
	void errorBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	 * \brief 由ImageProcessThread发来的处理后的图像
	 * \param img 图像
	 */
	void updateCameraImage(const cv::Mat& img);
	/**
	 * \brief 由ImageProcessThread发来的定位信息
	 * \param x x
	 * \param y y
	 */
	void updateClothPoint(double x, double y);

	void stop();

protected slots:
	void enableFile();
	void enableCommand();
	void enableButton();
	void enableVideo();
	void changeControlMethod(int index);
	/**
	 * \brief SerialSetWindow发来的
	 * \param name 串口名
	 * \param baud 波特率
	 */
	void receiveSerialConfig(const QString& name, int baud);

	void onSwicthDeviceButton();
	void onSetC_ZeroPositionButton();
	void onPumpOffButton();
	void onControlC_NegButton();
	void onControlY_NegButton();
	void onControlZ_NegButton();
	void onPumpOnButton();
	void onControlX_NegButton();
	void onControlStopButton();
	void onControlX_PosButton();
	void onSetZeroPositionButton();
	void onControlC_PosButton();
	void onControlY_PosButton();
	void onControlZ_PosButton();
	void onResetPositionButton();
	void onSewingStartButton();
	void onSewingFootOnButton();
	void loadProgram();

	void onSendCommand();

	void onShowContoursCheckBox(int state);

	/**
	 * \brief 刷新界面上的位置信息
	 */
	void updateDeviceInfo();

	/**
	 * \brief Serial解析过的数据
	 * \param data 数据指针
	 * \param size 大小
	 */
	void receiveDataFromSlave(const int* data, const size_t size);

	/**
	 * \brief 接收串口的成功信号，以启动一些操作
	 */
	void serialOpened();

	void queryPosition();

protected:

	void connect();
	void loadConfig();
	template <class T>
	size_t makeData(std::vector<T> data);

	CameraThread* cameraThread;
	ImageProcessThread* imageProcessThread;
	ProgramThread* programThread;

	SerialSetWindow* serialSetWindow;

private:
	Ui::MainWindowClass ui;

	QLabel *controlMethodLabel;
	QLabel *serialPortLabel;

	bool fileEnabled, buttonEnabled, commandEnabled, videoEnabled;

	cv::Mat image;

	double screwPitch;
	int subdivision;
	double defaultSpeed;
	int defaultSpeedPulse;
	double singleStepDistance;
	int singleStep;
	int currentDevice;
	bool sewingFootState, sewingState;

	const static size_t maxBufLen = 512;
	char buf[maxBufLen];

	Position position[2];

	QTimer *timer;

	bool serialOk;
};
