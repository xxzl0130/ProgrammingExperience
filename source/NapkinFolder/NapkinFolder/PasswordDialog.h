#pragma once

#include <QDialog>
#include "stdafx.h"

#include "ui_PasswordDialog.h"

class PasswordDialog : protected QDialog
{
    Q_OBJECT

public:
    explicit PasswordDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~PasswordDialog();

    /**
     * \brief ��Ҫ�ӿڣ����ô˷���ֱ�Ӵ�һ���������������ͨ��password��̬��Ա����
     * \return ���������Ƿ�һ��
     */
    static bool run();

    static QString password;

public slots:
    void accept() override;

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    std::unique_ptr<Ui::PasswordDialog> ui;
};
