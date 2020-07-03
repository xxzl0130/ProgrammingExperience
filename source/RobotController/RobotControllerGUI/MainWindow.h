#pragma once
#include "commonHeader.h"
#include "MainWindowSimulate.h"

#define BASE_CLASS MainWindowSimulate

/*
 * 将之前继承出的若干层实现最后统一命名为MainWindow
 */
class MainWindow : public BASE_CLASS
{
	Q_OBJECT

public:
	MainWindow(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	virtual ~MainWindow();

	static MainWindow* instance();

protected:
	// 单例模式指针，放在最顶层以供调用
	static MainWindow* singleton;
};

