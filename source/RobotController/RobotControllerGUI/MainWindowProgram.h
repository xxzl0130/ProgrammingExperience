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

	//·�������
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

	//����ͼ������ť
	void itemUp();
	void itemDown();
	void itemDelete();

	//��������ҳ��
	void popWindowTypeMsg();
	void popWindowTypeError();
	void popWindowTypeWarning();
	void setStopWithPopWindow();
	void previewPopWindow();
	void popWindowTextChanged();

	void commentTextChanged();

	//�ȴ�ҳ��
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
	// �нӰ�ť�źţ�ͳһ����addCommand
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
	 * \brief ����һ��type���͵�ProgramItem����Ŀ
	 * \param parent ���ڵ�
	 * \param type ����
	 * \return ָ��
	 */
	ProgramItemBase* generateProgramItem(ProgramItemBase* parent = nullptr,
		unsigned int type = ProgramItemBase::Move);
	/**
	 * \brief ����һ��type���͵�ProgramItem�Ķ�����Ŀ
	 * \param view treeWidgetָ��
	 * \param type ����
	 * \return ָ��
	 */
	ProgramItemBase* generateProgramItem(QTreeWidget* view,
		unsigned int type = ProgramItemBase::Move);
	/**
	 * \brief ����·����Ĺ������
	 * \param src Դ��������Move����Point
	 * \param dst Ŀ�꣬������Move����Point
	 */
	void copyPointSharedSetting(const ProgramItemBase* src, ProgramItemBase* dst);

	void initPointPositionTable();

	void changeCurrentItemType(ProgramItemBase::ProgramType type);

	/**
	 * \brief ����������json����
	 * \param filename �ļ���
	 */
	void saveProgramJson(const QString& filename);
	/**
	 * \brief ��json�м��س�����
	 * \param filename �ļ���
	 */
	void loadProgramJson(const QString& filename);
	/**
	 * \brief ��itemתΪjson�����ݹ鴦��
	 * \param item ��Ŀָ��
	 * \return json
	 */
	QJsonObject item2Json(const ProgramItemBase* item);
	/**
	 * \brief ��jsonת��Ϊ������Ŀ
	 * \tparam Parent ���ڵ����ͣ�QTreeViewWidget����ProgramItemBase
	 * \param json json����
	 * \param parent ���ڵ�ָ��
	 * \return ����item
	 */
	template<typename Parent>
	ProgramItemBase* json2Item(QJsonObject json, Parent* parent);
	/**
	 * \brief ���josn�Ƿ�Ϸ�
	 * \param json json����
	 * \return �Ƿ�Ϸ�
	 */
	bool checkProgramJson(const QJsonObject &json);
	/**
	 * \brief ��json�ж�ȡ����ת��ΪArgumentValue
	 * \param json json����
	 * \return ArgumentValue
	 */
	ArgumentValue json2ArgumentValue(const QJsonObject& json);

	CommandRenameDialog* renameDialog;

	/**
	 * \brief ��ǰѡ�е���Ŀ��ÿ��ѡ�����޸�ʱ�����Ӧ���ģ������ظ�����TreeWidget��api
	 */
	ProgramItemBase* commandTreeSelectedItem;

	bool insertCommandNext;
	/*
	 *setCommandTab�Ⱥ����л��ֶ��޸�Type
	 *�޸�ǰ���˱�־���棬�Ա����ظ��޸ģ�����bug
	 */
	bool blockItemTypeChangedSingal;
	//�����޸Ĺ��ı�ǣ����ڴ������½���ͱ���
	bool programChanged;
	QString programFilename;
	QString programName;
};

