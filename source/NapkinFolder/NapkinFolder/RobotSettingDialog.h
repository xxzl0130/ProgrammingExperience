#pragma once

#include <QDialog>
#include "stdafx.h"

#include "ui_RobotSettingDialog.h"

class RobotSettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RobotSettingDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~RobotSettingDialog();

    int port = 8888;

public slots:
    /**
     * \brief 在show之前刷新一下端口
     */
    void show();
    /**
     * \brief 确定按钮的响应
     */
    void accept() override;

signals:
    void sendTcpConfig(int port);

private:
    std::unique_ptr<Ui::RobotSettingDialog> ui;
};
