#pragma once
#include "commonHeader.h"
#include "MainWindowSimulate.h"

#define BASE_CLASS MainWindowSimulate

/*
 * ��֮ǰ�̳г������ɲ�ʵ�����ͳһ����ΪMainWindow
 */
class MainWindow : public BASE_CLASS
{
	Q_OBJECT

public:
	MainWindow(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	virtual ~MainWindow();

	static MainWindow* instance();

protected:
	// ����ģʽָ�룬��������Թ�����
	static MainWindow* singleton;
};

