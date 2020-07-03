#pragma once

#include "commonHeader.h"
#include "rlHeaders.h"

#define DEFAULT_SPEED "60.00"
#define DEFAULT_ACCEL "80.00"

// TODO:填充此list
extern QStringList toolList;
extern QStringList varList;

struct ArgumentValue
{
	QString argv;
	QStringList argvOptions;
	ArgumentValue() = default;

	explicit ArgumentValue(QString v, QStringList o = QStringList()):
	argv(std::move(v)),argvOptions(std::move(o))
	{
	}
};
typedef std::map<QString, ArgumentValue> ProgramArguments;

class ProgramItemBase:public QTreeWidgetItem
{
public:
	explicit ProgramItemBase(ProgramItemBase *p, int type = Type);
	explicit ProgramItemBase(QTreeWidget *view, int type = Type);

	virtual ~ProgramItemBase();

	enum ProgramType
	{
		Blank = 0,
		MoveJ = 0x01 << 0,
		MoveL = 0x01 << 1,
		MoveP = 0x01 << 2,
		MoveC = 0x01 << 3,
		Move = MoveJ | MoveL | MoveP | MoveC,
		AbsolutePoint = 0x01 << 4,
		RelativePoint = 0x01 << 5,
		VariablePoint = 0x01 << 6,
		Point = AbsolutePoint | RelativePoint | VariablePoint,
		Wait = 0x01 << 7,
		Comment = 0x01 << 8,
		Quit = 0x01 << 9,
		PopWindow = 0x01 << 10,
		Set = 0x01 << 11,
	};
	// 项目图标的设置参数，空时使用默认图标，暂时无用
	QString icon;
	constexpr const static double weightUnit = 1024;
	// 权重值，用于排序
	double weight;
	rl::plan::VectorList path, pathVel;

	ArgumentValue getArgument(const QString& argName) const;
	ProgramArguments getArguments() const;
	int getArgumentSize() const;
	ProgramType getType() const;
	virtual ProgramArguments makeArguments() = 0;
	virtual void setArgument(const QString& argName, const ArgumentValue& argv);
	virtual void setArgumentValue(const QString& argName, const QString& argv);
	virtual void setArgumentOptions(const QString& argName, const QStringList& options);
	virtual QString getArgumentOption(const QString& argName, const unsigned int index);
	virtual QStringList getArgumentOptions(const QString& argName);
	virtual bool acceptChild(ProgramItemBase* child);
	virtual bool acceptChild(ProgramType childType) = 0;
	virtual bool canbeTop() = 0;
	virtual void setComplete(bool c);
	virtual bool isComplete() const;
	virtual bool checkComplete() = 0;
	virtual bool isRenamed() const;

	// 继承自QTreeWidgetItem
	virtual QVariant data(int column, int role) const;
	virtual void setData(int column, int role, const QVariant &value);
	//child管理直接继承QTreeWidgetItem
	virtual void addChild(ProgramItemBase* child);
	// to hide QTreeWidgetItem::type
	int type() const;
	virtual bool operator<(const QTreeWidgetItem &other) const override;

	static bool checkFx(const QString& fx);

protected:
	ProgramArguments arguments;
	ProgramType programType;
	// 当前项目是否已完整
	bool complete;
	bool renamed;
	// 项目名称，将显示在tree上
	QString name;
	void completeChange(bool c);
};

class ProgramItemBlank :public ProgramItemBase
{
public:
	explicit ProgramItemBlank(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemBlank(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemBlank();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemMoveJ:public ProgramItemBase
{
public:
	explicit ProgramItemMoveJ(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemMoveJ(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemMoveJ();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemMoveP :public ProgramItemBase
{
public:
	explicit ProgramItemMoveP(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemMoveP(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemMoveP();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemMoveL :public ProgramItemBase
{
public:
	explicit ProgramItemMoveL(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemMoveL(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemMoveL();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemMoveC :public ProgramItemBase
{
public:
	explicit ProgramItemMoveC(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemMoveC(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemMoveC();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemAbsolutePoint :public ProgramItemBase
{
public:
	explicit ProgramItemAbsolutePoint(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemAbsolutePoint(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemAbsolutePoint();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return false;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemRelativePoint :public ProgramItemBase
{
public:
	explicit ProgramItemRelativePoint(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemRelativePoint(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemRelativePoint();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return false;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemVariablePoint :public ProgramItemBase
{
public:
	explicit ProgramItemVariablePoint(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemVariablePoint(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemVariablePoint();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return false;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};


class ProgramItemQuit :public ProgramItemBase
{
public:
	explicit ProgramItemQuit(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemQuit(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemQuit();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemPopWindow :public ProgramItemBase
{
public:
	explicit ProgramItemPopWindow(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemPopWindow(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemPopWindow();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemSet :public ProgramItemBase
{
public:
	explicit ProgramItemSet(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemSet(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemSet();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemWait :public ProgramItemBase
{
public:
	explicit ProgramItemWait(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemWait(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemWait();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};

class ProgramItemComment :public ProgramItemBase
{
public:
	explicit ProgramItemComment(ProgramItemBase *p = nullptr, int type = Type);
	explicit ProgramItemComment(QTreeWidget *view, int type = Type);
	virtual ~ProgramItemComment();

	bool acceptChild(ProgramType childType) override;
	bool canbeTop() override
	{
		return true;
	}
	ProgramArguments makeArguments() override;
	bool checkComplete() override;
};