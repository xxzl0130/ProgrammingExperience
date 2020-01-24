#pragma once

#include "ui_MainWindow.h"
#include "CameraThread.h"
#include "SerialSetWindow.h"
#include "SerialThread.h"
#include "ImageProcessThread.h"
#include "ProgramThread.h"

/*
 * �������̣�
 * SerialSetWindow�����ô��ڲ�����Ϣ����Serial
 * Serial�����߳̽��д��ڶ�д���������ɶ��̶߳�д������֧�֣�ֻ�������̡߳�
 * CameraThread��һ���߳��и����ȡ����ͷ���ݣ������ͳ���
 * ImageProcessThread����һ���߳��и�����ͼ�񣬽���CameraThread������ͼ�񣬷�������õ�������
 * ProgramThread�������������п��ƣ����ָ��ͨ���źŷ��͵����̴߳���
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
	 * \brief ͨ�õı�����ģ�壬��Ϊ����ֻ�������̴߳���
	 * \param text �ı�
	 * \param info ��Ϣ
	 * \param title ����
	 */
	void errorBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	 * \brief ��ImageProcessThread�����Ĵ�����ͼ��
	 * \param img ͼ��
	 */
	void updateCameraImage(const cv::Mat& img);
	/**
	 * \brief ��ImageProcessThread�����Ķ�λ��Ϣ
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
	 * \brief SerialSetWindow������
	 * \param name ������
	 * \param baud ������
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
	 * \brief ˢ�½����ϵ�λ����Ϣ
	 */
	void updateDeviceInfo();

	/**
	 * \brief Serial������������
	 * \param data ����ָ��
	 * \param size ��С
	 */
	void receiveDataFromSlave(const int* data, const size_t size);

	/**
	 * \brief ���մ��ڵĳɹ��źţ�������һЩ����
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
