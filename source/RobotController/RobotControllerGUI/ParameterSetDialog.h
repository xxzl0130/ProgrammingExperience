#pragma once

#include "commonHeader.h"

#include "ui_ParameterSetDialog.h"

namespace Ui {
	class ParameterSetDialog;
}

class ParameterSetDialog :public QDialog
{
	Q_OBJECT

public:
	ParameterSetDialog(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
	virtual ~ParameterSetDialog();
	QString parameterJsonFilename;

private:
	Ui::ParameterSetDialog *ui;

	QJsonObject parametersJson;
	QJsonArray parametersArray;

	/**
	 * \brief ���ز����ļ��������
	 */
	void load();
	/**
	 * \brief ��ձ��
	 */
	void reset();

public slots:
	/**
	 * \brief �����������������������������޸�ģ��
	 */
	void accept() override;
	void reject() override;
	/**
	 * \brief ������������������communicationThread->send2Remote������Զ��
	 * ����AdsͨѶ���������˽���������ʾ����
	 */
	void send();
	/**
	 * \brief ���ղ���json�ļ�����Ȼ�������
	 * \param filename �ļ���
	 */
	void receiveJsonFilename(const QString& filename);
	/**
	 * \brief ������������parameterJsonFilename���Ա��´������󱣳�һ�µ�����
	 */
	void saveParameterFile();
	
signals:
	/**
	 * \brief ������map���������ڽ���apply
	 */
	void sendParameters(const std::map<std::string, std::string>&);
};
