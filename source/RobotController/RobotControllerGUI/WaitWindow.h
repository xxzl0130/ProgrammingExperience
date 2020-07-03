#pragma once

#include <QDialog>
#include "ui_WaitWindow.h"

class WaitWindow : public QDialog
{
	Q_OBJECT

public:
	WaitWindow(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	~WaitWindow();
private:
	Ui::WaitWindow* ui;
};
