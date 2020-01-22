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
     * \brief ��show֮ǰˢ��һ�¶˿�
     */
    void show();
    /**
     * \brief ȷ����ť����Ӧ
     */
    void accept() override;

signals:
    void sendTcpConfig(int port);

private:
    std::unique_ptr<Ui::RobotSettingDialog> ui;
};
