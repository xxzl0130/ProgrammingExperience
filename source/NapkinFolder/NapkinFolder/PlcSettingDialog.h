#pragma once

#include <QDialog>
#include "stdafx.h"

#include "ui_PlcSettingDialog.h"

class PlcSettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlcSettingDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~PlcSettingDialog();

signals:
    /**
     * \brief 发送串口配置
     * \param port 串口名
     * \param baudrate 波特率
     */
    void sendPlcSetting(QString port, int baudrate);

public Q_SLOTS:
    /**
     * \brief 在show之前查找一下串口
     */
    void show();
    /**
     * \brief 确定按钮的响应
     */
    void accept() override;

private:
    std::unique_ptr<Ui::PlcSettingDialog> ui;

    /**
     * \brief 利用QSerialInfo枚举可用串口
     * \return 串口名列表
     */
    static QList<QString> searchComPort();
};
