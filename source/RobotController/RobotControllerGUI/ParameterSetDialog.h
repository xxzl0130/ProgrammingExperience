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
	 * \brief 加载参数文件到表格里
	 */
	void load();
	/**
	 * \brief 清空表格
	 */
	void reset();

public slots:
	/**
	 * \brief 将参数存下来并传至主窗口用于修改模型
	 */
	void accept() override;
	void reject() override;
	/**
	 * \brief 将参数存下来并调用communicationThread->send2Remote发送至远程
	 * 由于Ads通讯较慢，加了进度条以显示进度
	 */
	void send();
	/**
	 * \brief 接收参数json文件名，然后导入加载
	 * \param filename 文件名
	 */
	void receiveJsonFilename(const QString& filename);
	/**
	 * \brief 将参数保存至parameterJsonFilename下以便下次启动后保持一致的数据
	 */
	void saveParameterFile();
	
signals:
	/**
	 * \brief 将参数map发给主窗口进行apply
	 */
	void sendParameters(const std::map<std::string, std::string>&);
};
