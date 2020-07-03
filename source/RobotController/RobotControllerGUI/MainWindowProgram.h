#pragma once

#include "commonHeader.h"
#include "MainWindowBase.h"
#include "ProgramItem.h"
#include "CommandRenameDialog.h"

class MainWindowProgram : public MainWindowBase
{
	Q_OBJECT

public:
	~MainWindowProgram();
	enum CommandStackPage
	{
		MovePage = 0,
		PointPage,
		WaitPage,
		StopPage,
		SetPage,
		PopPage,
		BlankPage,
		CommentPage,
	};
	enum MoveTypeIndex
	{
		MoveJ = 0,
		MoveL,
		MoveP,
		MoveC,
	};
	enum PointTypeIndex
	{
		AbsolutePoint = 0,
		RelativePoint,
		VariablePoint
	};
	enum CommandTabPage
	{
		Command = 0,
		Struct,
	};
	enum MainTabPage
	{
		Frequent = 0,
		Program,
		Movement
	};
	enum PopWindowTypeIndex
	{
		Msg = 0,
		Warning,
		Error,
	};

	rl::math::Vector absolutePointPosition;
	rl::math::Vector relativePointStartPosition;
	rl::math::Vector relativePointGoalPosition;
	//x, y, z, dis, pitch, yaw
	rl::math::Vector deltaInfo;

public slots:
	void commandRenamed();

	void addCommand(ProgramItemBase::ProgramType type);

	void refreshAbsolutePointPositionTable();
	void refreshDeltaInfo();

protected slots:
	void onInsertCommandNextRadioButton();
	void onInsertCommandPrevRadioButton();

	void saveProgram();
	void loadProgram();

	//路径点相关
	void setAbsolutePoint();
	void showAbsolutePoint();
	void setRelativePointStart();
	void showRelativePointStart();
	void setRelativePointGoal();
	void showRelativePointGoal();
	void pointTypeChanged(int index);
	void moveTypeChanged(int index);
	void jointSharedSpeedChanged(const QString& text);
	void jointSharedAccelChanged(const QString& text);
	void sharedToolChanged(int index);
	void setUseSharedTool();
	void setNoFillet();
	void setFillet();
	void setFilletRadius(double radius);
	void setUseSharedSetting();
	void jointSpeedChanged(const QString& text);
	void jointAccelChanged(const QString& text);
	void pointVarChanged(int index);

	//树形图操作按钮
	void itemUp();
	void itemDown();
	void itemDelete();

	//弹出窗口页面
	void popWindowTypeMsg();
	void popWindowTypeError();
	void popWindowTypeWarning();
	void setStopWithPopWindow();
	void previewPopWindow();
	void popWindowTextChanged();

	void commentTextChanged();

	//等待页面
	void setNoWait();
	void setWaitTime();
	void waitTimeChanged(int time);
	void setWaitDigital();
	void waitDigitalInChanged(int index);
	void waitDigitalInLevelChanged(int index);
	void setWaitAnalog();
	void waitAnalogInChanged(int index);
	void waitAnalogCompareChanged(int index);
	void waitAnalogInLevelChanged(double value);
	void setWaitFx();
	void waitFxChanged(const QString& text);

	void addBlankCommand();
	// 承接按钮信号，统一调用addCommand
	void addMoveCommand();
	void addPointCommand();
	void addWaitCommand();
	void addSetCommand();
	void addPopCommand();
	void addStopCommand();
	void addCommentCommand();
	void addPointPrev();
	void addPointNext();

	void programTreeSelectChanged(QTreeWidgetItem* widget);
	void jump2StructPage();

	void setNoSet();
	void setDigitalOutput();
	void setDigitalOutputFx();
	void setAnalogOutput();
	void setAnalogOutputFx();
	void setVar();
	void setLoad();
	void setTool();
	void setDigitalOutChanged(int index);
	void setDigitalOutLevelChanged(int index);
	void setDigitalOutFxCombChanged(int index);
	void setDigitalOutFxChanged(const QString& text);
	void setAnalogOutChanged(int index);
	void setAnalogOutLevelChanged(double value);
	void setAnalogOutFxCombChanged(int index);
	void setAnalogOutFxChanged(const QString& text);
	void setVarChanged(int index);
	void setVarFxChanged(const QString& text);
	void setLoadChanged(double value);
	void setToolChanged(int index);

	void programNameChanged(const QString& name);

protected:
	MainWindowProgram(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());

	virtual void init() override;
	virtual void initAfterLoad() override;

	virtual void enableUI(Ui_Group group)override;
	virtual void disableUI(Ui_Group group)override;

	void setCommandTab(ProgramItemBase* config);
	void setPointShareSetting(ProgramItemBase* config);
	void setMoveSetting(ProgramItemBase* config);
	/**
	 * \brief 生成一个type类型的ProgramItem子项目
	 * \param parent 父节点
	 * \param type 类型
	 * \return 指针
	 */
	ProgramItemBase* generateProgramItem(ProgramItemBase* parent = nullptr,
		unsigned int type = ProgramItemBase::Move);
	/**
	 * \brief 生成一个type类型的ProgramItem的顶层项目
	 * \param view treeWidget指针
	 * \param type 类型
	 * \return 指针
	 */
	ProgramItemBase* generateProgramItem(QTreeWidget* view,
		unsigned int type = ProgramItemBase::Move);
	/**
	 * \brief 拷贝路径点的共享参数
	 * \param src 源，可以是Move或者Point
	 * \param dst 目标，可以是Move或者Point
	 */
	void copyPointSharedSetting(const ProgramItemBase* src, ProgramItemBase* dst);

	void initPointPositionTable();

	void changeCurrentItemType(ProgramItemBase::ProgramType type);

	/**
	 * \brief 将程序树以json保存
	 * \param filename 文件名
	 */
	void saveProgramJson(const QString& filename);
	/**
	 * \brief 从json中加载程序树
	 * \param filename 文件名
	 */
	void loadProgramJson(const QString& filename);
	/**
	 * \brief 将item转为json，将递归处理
	 * \param item 项目指针
	 * \return json
	 */
	QJsonObject item2Json(const ProgramItemBase* item);
	/**
	 * \brief 将json转换为程序项目
	 * \tparam Parent 父节点类型，QTreeViewWidget或者ProgramItemBase
	 * \param json json对象
	 * \param parent 父节点指针
	 * \return 程序item
	 */
	template<typename Parent>
	ProgramItemBase* json2Item(QJsonObject json, Parent* parent);
	/**
	 * \brief 检查josn是否合法
	 * \param json json对象
	 * \return 是否合法
	 */
	bool checkProgramJson(const QJsonObject &json);
	/**
	 * \brief 从json中读取配置转换为ArgumentValue
	 * \param json json对象
	 * \return ArgumentValue
	 */
	ArgumentValue json2ArgumentValue(const QJsonObject& json);

	CommandRenameDialog* renameDialog;

	/**
	 * \brief 当前选中的项目，每次选中项修改时都会对应更改，避免重复调用TreeWidget的api
	 */
	ProgramItemBase* commandTreeSelectedItem;

	bool insertCommandNext;
	/*
	 *setCommandTab等函数中会手动修改Type
	 *修改前将此标志置真，以避免重复修改，避免bug
	 */
	bool blockItemTypeChangedSingal;
	//程序被修改过的标记，用于处理重新解算和保存
	bool programChanged;
	QString programFilename;
	QString programName;
};

