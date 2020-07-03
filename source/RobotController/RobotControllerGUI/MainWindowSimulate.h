#pragma once

#include "MainWindowProgram.h"
#include "SimulateThread.h"
#include "CompileThread.h"

class MainWindowSimulate : public MainWindowProgram
{
	Q_OBJECT

public:
	~MainWindowSimulate();

protected:
	MainWindowSimulate(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	
	virtual void init() override;
	virtual void initAfterLoad() override;

protected slots:
	// 承接界面按钮信号
	void programRun();
	void programPause();
	void programStop();

	void compileFinish(bool ok);

public:
	SimulateThread* simulateThread{};
	CompileThread* compileThread{};
};
