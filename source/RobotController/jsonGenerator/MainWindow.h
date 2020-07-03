#pragma once

#include <QtWidgets/QMainWindow>
#include <QJsonObject>
#include "ui_MainWindow.h"
#include <QJsonArray>
#include <QCloseEvent>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

public slots:

	/**
	* \brief 通用的错误框模板
	* \param text 错误内容
	* \param info 提示信息
	* \param title 标题
	*/
	void errorBox(const QString& text, const QString& info = QString(), const QString& title = QString());

	void openJson();
	void openStylesheet();
	void save();
	void saveAs();
	void addItem();
	void deleteItem();
	void clearItem();
	void contentChanged(int row, int col);

private:
	Ui::MainWindowClass* ui;

	QString jsonFilename;
	QString stylesheetFilename;

protected:
	void closeEvent(QCloseEvent *event);
	void addItem(int row, const QJsonObject& js);
	void addItem(int row, const QString& name, int group, int offset,
		const QString& type, const QString& value);
	void initTable(int row);
	bool checkTable();
	void saveJson(const QString& filename);
	void loadJson(const QString& filename);
	void loadStylesheet(const QString& filename);

	static QString typeof(const QString& v);
	static int str2int(const QString& s);

	bool saved;
};
