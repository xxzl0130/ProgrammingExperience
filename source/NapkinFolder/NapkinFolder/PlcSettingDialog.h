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
     * \brief ���ʹ�������
     * \param port ������
     * \param baudrate ������
     */
    void sendPlcSetting(QString port, int baudrate);

public Q_SLOTS:
    /**
     * \brief ��show֮ǰ����һ�´���
     */
    void show();
    /**
     * \brief ȷ����ť����Ӧ
     */
    void accept() override;

private:
    std::unique_ptr<Ui::PlcSettingDialog> ui;

    /**
     * \brief ����QSerialInfoö�ٿ��ô���
     * \return �������б�
     */
    static QList<QString> searchComPort();
};
