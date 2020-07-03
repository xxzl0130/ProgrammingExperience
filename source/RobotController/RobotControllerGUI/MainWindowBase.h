#pragma once

#include "commonHeader.h"
#include "rlHeaders.h"
#include "CommunicationThread.h"

#ifdef HAVE_TC3
#include "TcAdsDef.h"
#ifndef BOOL
typedef int     BOOL;
#endif
#include "TcAdsAPI.h"
#pragma comment(lib,"C:/TwinCAT/AdsApi/TcAdsDll/x64/Lib/TcAdsDll.lib")
#endif //HAVE_TC3

#include "ui_MainWindow.h"

#include "RemoteSetDialog.h"
#include "PositionTableModel.h"
#include "PositionTableDelegate.h"
#include "OperationalTableModel.h"
#include "ParameterSetDialog.h"
#include "PlannerThread.h"
#include "IK_SolverThread.h"
#include "SoGradientBackground.h"
#include "Viewer.h"
#include "WaitWindow.h"

namespace Ui
{
	class MainWindow;
}

class MainWindowBase : public QMainWindow
{
	Q_OBJECT

public:
	virtual ~MainWindowBase();

	QString engine;

	std::vector<std::shared_ptr<rl::math::Vector3>> explorerGoals{};

	std::vector<std::shared_ptr<rl::plan::WorkspaceSphereExplorer>> explorers{};

	std::vector<std::shared_ptr<rl::math::Vector3>> explorerStarts{};

	Viewer* viewer;

	PlannerThread* plannerThread;
	IK_SolverThread* ik_SolverThread;
	CommunicationThread* communicationThread;

	RemoteSetDialog* remoteSetWindow;
	ParameterSetDialog* parameterSetWindow;
	WaitWindow*	waitWindow;

	// 机器人模型用到的各种对象，其中1用于计算，2用于显示
	std::shared_ptr<rl::kin::Kinematics> kin;
	std::shared_ptr<rl::kin::Kinematics> kin2;
	std::shared_ptr<rl::mdl::Dynamic> mdl;
	std::shared_ptr<rl::mdl::Dynamic> mdl2;
	std::shared_ptr<rl::plan::SimpleModel> model;
	std::shared_ptr<rl::plan::Model> model2;
	std::vector<std::shared_ptr<rl::plan::NearestNeighbors>> nearestNeighbors;
	std::shared_ptr<rl::sg::Scene> scene;
	std::shared_ptr<rl::sg::so::Scene> scene2;
	rl::sg::Model* sceneModel;
	rl::sg::so::Model* sceneModel2;
	std::shared_ptr<rl::plan::Verifier> verifier;//for planner
	std::shared_ptr<rl::plan::Verifier> verifier2;//for optimizer
	std::shared_ptr<rl::plan::Verifier> looseVerifier;//for optimizer
	std::shared_ptr<rl::plan::Optimizer> looseOptimizer;
	std::shared_ptr<rl::plan::Optimizer> optimizer;
	std::shared_ptr<rl::plan::Sampler> sampler;
	std::shared_ptr<rl::plan::Sampler> sampler2;
	std::shared_ptr<rl::plan::Planner> planner;
	std::shared_ptr<rl::plan::Planner> loosePlanner;

	std::shared_ptr<rl::math::Vector> q;
	std::shared_ptr<rl::math::Vector> sigma;
	// 链接至planner->goal
	std::shared_ptr<rl::math::Vector> goal;
	// 链接至planner->start
	std::shared_ptr<rl::math::Vector> start;
	std::shared_ptr<rl::math::Vector> zeroPosition;

	QMutex mutex;

	OperationalTableModel* operationalTableModel;

	// 表示离线在线、读写模式的标志
	bool onlineMode, readMode;

	// 路径规划的中间关键点，
	std::vector<rl::math::Vector> keyPointPath;

	::Eigen::Matrix< ::rl::math::Unit, ::Eigen::Dynamic, 1> units;
	rl::math::Vector maxPosition;
	rl::math::Vector minPosition;

	double position2Save(double value, int index);
	double position2Show(double value, int index);

public slots:

	/**
	* \brief 通用的错误框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void errorBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief 通用的警告框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void warningBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief 通用的信息框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void infoBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	
	void reset();
	/**
	* \brief 接收路径规划成功与否的结果，失败时重置UI
	* \param res 结果
	*/
	void pathSolved(bool res);

	void showMessage(const std::string& msg);
	void showMessage(const QString& msg);

	/**
	* \brief 进入在线联机模式，目前仅为不断读取机器人姿态并显示
	*/
	void setOnline();
	void setOffline();
	void setOnlineOffline();
	void setReadWrite();

	/**
	* \brief 接收机器人姿态被改变的信号，以做碰撞检测等处理
	* \param refresh 是否刷新表格
	*/
	void positionChanged(bool refresh = false);
	/**
	* \brief 接收机器人姿态被改变的信号，以做碰撞检测等处理
	* \param q 要显示的姿态
	* \param refresh 是否刷新表格
	*/
	void positionChanged2(const rl::math::Vector& q, bool refresh = true);
	void positionChanged3(const rl::math::Vector& q);

	//恢复初始姿态
	void reset2ZeroPosition();

	void sendPath2Robot();
	void drawPath();
	/**
	 * \brief 接收路径点并显示到表格中
	 * \param path 路径点
	 */
	void receivePath(const rl::plan::VectorList& path);
	void receivePathVel(const rl::plan::VectorList& pathVel);

	void showWaitWindow();
	void hideWaitWindow();

	void updateToolPosition();

protected slots:
	/**
	* \brief 加载json配置文件，包括模型文件、远程设置等
	*/
	void loadConfig();
	/**
	* \brief 保存配置文件为json。
	*/
	void saveConfig();

	/**
	* \brief 生成随机姿态
	*/
	void getRandomConfiguration();
	/**
	* \brief 生成随机的无碰撞的姿态
	*/
	void getRandomFreeConfiguration();

	/**
	* \brief 向keyPointPath中添加路径点
	*/
	void addPoint();
	/**
	* \brief 清空keyPointPath中的点
	*/
	void clearPoint();
	void deletePoint();

	void startPlan();
	void planMethodChanged(int index);
	void pauseAnimate();

	void showRemoteSetWindow();
	void showParameterSetWindow();
	
	void saveImage();
	void saveVRML();

	void drawConfiguration(const rl::math::Vector& q);
	void drawConfigurationPath(rl::plan::VectorList& path);

	void setRobotParameters(const std::map<std::string, std::string>& parameters);

	void startSolveIK();

	void showAxis();
	/*
	void showPosition();
	void showOp();
	void showIK();
	void showPathPlanner();
	*/
	void ikSolveFinish(const bool& res);

	void receiveFlashTime(const int& time);

	void refreshPlannerTable();

	void saveKeyPoint();
	void loadKeyPoint();
	void savePathPoint();
	void loadPathPoint();

	void setAlwaysFlashTable();

	void joint0SliderChanged(int value);
	void joint1SliderChanged(int value);
	void joint2SliderChanged(int value);
	void joint3SliderChanged(int value);
	void joint4SliderChanged(int value);
	void joint5SliderChanged(int value);
	void joint0ValueTextChanged(const QString& text);
	void joint1ValueTextChanged(const QString& text);
	void joint2ValueTextChanged(const QString& text);
	void joint3ValueTextChanged(const QString& text);
	void joint4ValueTextChanged(const QString& text);
	void joint5ValueTextChanged(const QString& text);

	void applyToolPositionChange();
	void toolPositionTypeChanged(int index);

signals:
	void configurationRequested(const rl::math::Vector&);
	void configurationPathRequested(const rl::plan::VectorList&);
#ifdef HAVE_TC3
	void sendAmsAddr(const AmsAddr&);
#endif //HAVE_TC3
	void sendFlashTime(const int&);
	void sendParameterJsonFilename(const QString&);

protected:
	MainWindowBase(QWidget* parent = nullptr, Qt::WindowFlags f = nullptr);
	
	// 未加载配置时就可进行的初始化操作
	virtual void init();
	// 加载配置后才能进行的初始化操作
	virtual void initAfterLoad();

	/**
	* \brief 将所有加载的模型卸载，但目前没有启用这个功能
	*/
	void clear();
	/**
	* \brief 加载模型xml文件
	* \param filename 模型文件名
	*/
	void load(const QString& filename);
	void loadPlanner(rl::xml::Document &document, rl::xml::NodeSet& planners, std::shared_ptr<rl::plan::Planner>& planner);
	void loadNearestNeighbors(rl::xml::Path& path, std::shared_ptr<rl::plan::Planner>& planner);
	/**
	* \brief 加载配置json文件名
	* \param filename json文件名
	*/
	void loadConfig(const QString& filename);
	/**
	* \brief 主要用于连接planner和viewer
	* \param sender 发送者
	* \param receiver 接受者
	*/
	void connect(const QObject* sender, const QObject* receiver);
	/**
	* \brief 一些杂七杂八的connect
	*/
	void connect();
	void disconnect(const QObject* sender, const QObject* receiver);
	void initPlannerTable();

	/**
	 * \brief 将ui上的tool特征转换为transform阵
	 * \return 姿态转换阵
	 */
	rl::math::Transform toolPositionUiValue2Trsform();
	bool tryChangeToolPosition(const rl::math::Transform& tr);
	
	enum Ui_Group
	{
		BasicUi = 0x01 << 0,
		NetworkUi = 0x01 << 1,
		PlannerUi = 0x01 << 2,
		ProgramUi = 0x01 << 3,

		AllUi = 0xffff,
	};
	virtual void enableUI(Ui_Group group);
	virtual void disableUI(Ui_Group group);

	virtual void setUiRange();

	QString modelFilename;
	QString saveImageFilename;
	QString saveVRMLFilename;
	QString configFilename;
	QString stylesheetFilename;
	QString kinematicsHrefFilename;
	QString keyPointFilename;
	QString pathPointFilename;

	boost::optional<std::size_t> seed;

	rl::plan::VectorList path,pathVel;

	PositionTableModel* positionTableModel;
	PositionTableDelegate* positionTableDelegate;

	QJsonObject configJson;
	int flashTime;
	QTimer *remoteComTimer;
	bool alwaysRefreshTable;

	QRegExp floatReg;
	QRegExpValidator *floatValidator;

	bool blockJointChangeSingals;

protected:
	Ui::MainWindow *ui;
};

/**
* \brief 为OpertionalTable提供数据的函数
* \param index 序号
* \return 末端position的第index个坐标（顺序x y z）
*/
double operationalPositionData(int index);
