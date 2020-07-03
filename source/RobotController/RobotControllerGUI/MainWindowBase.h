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

	// ������ģ���õ��ĸ��ֶ�������1���ڼ��㣬2������ʾ
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
	// ������planner->goal
	std::shared_ptr<rl::math::Vector> goal;
	// ������planner->start
	std::shared_ptr<rl::math::Vector> start;
	std::shared_ptr<rl::math::Vector> zeroPosition;

	QMutex mutex;

	OperationalTableModel* operationalTableModel;

	// ��ʾ�������ߡ���дģʽ�ı�־
	bool onlineMode, readMode;

	// ·���滮���м�ؼ��㣬
	std::vector<rl::math::Vector> keyPointPath;

	::Eigen::Matrix< ::rl::math::Unit, ::Eigen::Dynamic, 1> units;
	rl::math::Vector maxPosition;
	rl::math::Vector minPosition;

	double position2Save(double value, int index);
	double position2Show(double value, int index);

public slots:

	/**
	* \brief ͨ�õĴ����ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void errorBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief ͨ�õľ����ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void warningBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	/**
	* \brief ͨ�õ���Ϣ��ģ��
	* \param text ��������
	* \param info ��ʾ��Ϣ
	* \param title ����
	*/
	void infoBox(const QString& text, const QString& info = QString(), const QString& title = QString());
	
	void reset();
	/**
	* \brief ����·���滮�ɹ����Ľ����ʧ��ʱ����UI
	* \param res ���
	*/
	void pathSolved(bool res);

	void showMessage(const std::string& msg);
	void showMessage(const QString& msg);

	/**
	* \brief ������������ģʽ��Ŀǰ��Ϊ���϶�ȡ��������̬����ʾ
	*/
	void setOnline();
	void setOffline();
	void setOnlineOffline();
	void setReadWrite();

	/**
	* \brief ���ջ�������̬���ı���źţ�������ײ���ȴ���
	* \param refresh �Ƿ�ˢ�±��
	*/
	void positionChanged(bool refresh = false);
	/**
	* \brief ���ջ�������̬���ı���źţ�������ײ���ȴ���
	* \param q Ҫ��ʾ����̬
	* \param refresh �Ƿ�ˢ�±��
	*/
	void positionChanged2(const rl::math::Vector& q, bool refresh = true);
	void positionChanged3(const rl::math::Vector& q);

	//�ָ���ʼ��̬
	void reset2ZeroPosition();

	void sendPath2Robot();
	void drawPath();
	/**
	 * \brief ����·���㲢��ʾ�������
	 * \param path ·����
	 */
	void receivePath(const rl::plan::VectorList& path);
	void receivePathVel(const rl::plan::VectorList& pathVel);

	void showWaitWindow();
	void hideWaitWindow();

	void updateToolPosition();

protected slots:
	/**
	* \brief ����json�����ļ�������ģ���ļ���Զ�����õ�
	*/
	void loadConfig();
	/**
	* \brief ���������ļ�Ϊjson��
	*/
	void saveConfig();

	/**
	* \brief ���������̬
	*/
	void getRandomConfiguration();
	/**
	* \brief �������������ײ����̬
	*/
	void getRandomFreeConfiguration();

	/**
	* \brief ��keyPointPath�����·����
	*/
	void addPoint();
	/**
	* \brief ���keyPointPath�еĵ�
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
	
	// δ��������ʱ�Ϳɽ��еĳ�ʼ������
	virtual void init();
	// �������ú���ܽ��еĳ�ʼ������
	virtual void initAfterLoad();

	/**
	* \brief �����м��ص�ģ��ж�أ���Ŀǰû�������������
	*/
	void clear();
	/**
	* \brief ����ģ��xml�ļ�
	* \param filename ģ���ļ���
	*/
	void load(const QString& filename);
	void loadPlanner(rl::xml::Document &document, rl::xml::NodeSet& planners, std::shared_ptr<rl::plan::Planner>& planner);
	void loadNearestNeighbors(rl::xml::Path& path, std::shared_ptr<rl::plan::Planner>& planner);
	/**
	* \brief ��������json�ļ���
	* \param filename json�ļ���
	*/
	void loadConfig(const QString& filename);
	/**
	* \brief ��Ҫ��������planner��viewer
	* \param sender ������
	* \param receiver ������
	*/
	void connect(const QObject* sender, const QObject* receiver);
	/**
	* \brief һЩ�����Ӱ˵�connect
	*/
	void connect();
	void disconnect(const QObject* sender, const QObject* receiver);
	void initPlannerTable();

	/**
	 * \brief ��ui�ϵ�tool����ת��Ϊtransform��
	 * \return ��̬ת����
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
* \brief ΪOpertionalTable�ṩ���ݵĺ���
* \param index ���
* \return ĩ��position�ĵ�index�����꣨˳��x y z��
*/
double operationalPositionData(int index);
