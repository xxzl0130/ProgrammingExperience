#pragma once
#include "commonHeader.h"

#include "ui_CommandRenameDialog.h"

/**
 * \brief ����ʵ�ֱ����Ŀ�������Ĵ��壬accept�ź����ӵ�
 * MainWindow��ʵ�ְ���ȷ���󴫵�����
 */
class CommandRenameDialog : public QDialog
{
	Q_OBJECT

public:
	CommandRenameDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	~CommandRenameDialog();

	QString name;
	/**
	 * \brief �����ı����е����ƣ����������ֵ���
	 * \param s ����
	 */
	void setName(const QString& s);

public slots:

	/**
	 * \brief �����ı�����޸��źţ������ı�
	 * \param text �ı�
	 */
	void nameChanged(QString text);

private:
	Ui::CommandRenameDialog* ui;
};

