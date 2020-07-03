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
	// �нӽ��水ť�ź�
	void programRun();
	void programPause();
	void programStop();

	void compileFinish(bool ok);

public:
	SimulateThread* simulateThread{};
	CompileThread* compileThread{};
};
