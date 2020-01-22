/********************************************************************************
** Form generated from reading UI file 'RobotSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTSETTINGDIALOG_H
#define UI_ROBOTSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RobotSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RobotSettingDialog)
    {
        if (RobotSettingDialog->objectName().isEmpty())
            RobotSettingDialog->setObjectName(QString::fromUtf8("RobotSettingDialog"));
        RobotSettingDialog->resize(182, 140);
        verticalLayout = new QVBoxLayout(RobotSettingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RobotSettingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        portLineEdit = new QLineEdit(RobotSettingDialog);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portLineEdit->sizePolicy().hasHeightForWidth());
        portLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(portLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(RobotSettingDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(RobotSettingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(RobotSettingDialog);
        QObject::connect(okButton, SIGNAL(clicked()), RobotSettingDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), RobotSettingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RobotSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *RobotSettingDialog)
    {
        RobotSettingDialog->setWindowTitle(QCoreApplication::translate("RobotSettingDialog", "RobotSettingDialog", nullptr));
        label_2->setText(QCoreApplication::translate("RobotSettingDialog", "\347\253\257\345\217\243\357\274\232", nullptr));
        portLineEdit->setInputMask(QCoreApplication::translate("RobotSettingDialog", "000000", nullptr));
        okButton->setText(QCoreApplication::translate("RobotSettingDialog", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("RobotSettingDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RobotSettingDialog: public Ui_RobotSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTSETTINGDIALOG_H
