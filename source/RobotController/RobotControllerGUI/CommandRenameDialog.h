#pragma once
#include "commonHeader.h"

#include "ui_CommandRenameDialog.h"

/**
 * \brief 用于实现编程项目重命名的窗体，accept信号连接到
 * MainWindow以实现按下确定后传递名称
 */
class CommandRenameDialog : public QDialog
{
	Q_OBJECT

public:
	CommandRenameDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	~CommandRenameDialog();

	QString name;
	/**
	 * \brief 设置文本框中的名称，由其他部分调用
	 * \param s 名称
	 */
	void setName(const QString& s);

public slots:

	/**
	 * \brief 接收文本框的修改信号，保存文本
	 * \param text 文本
	 */
	void nameChanged(QString text);

private:
	Ui::CommandRenameDialog* ui;
};

