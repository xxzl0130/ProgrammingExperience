#pragma once
#include "stdafx.h"
#include "ui_SerialSetWindow.h"

class SerialSetWindow :
	public QDialog
{
	Q_OBJECT
public:
	SerialSetWindow(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	~SerialSetWindow();

public slots:
	void show();
	void accept() override;

signals:
	void sendSerialConfig(const QString& name, int baud);
	

private:
	Ui::SerialSetWindow* ui;
};

