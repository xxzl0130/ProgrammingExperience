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
     * \brief 主要接口，调用此方法直接打开一个密码输入框，密码通过password静态成员设置
     * \return 返回密码是否一致
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
