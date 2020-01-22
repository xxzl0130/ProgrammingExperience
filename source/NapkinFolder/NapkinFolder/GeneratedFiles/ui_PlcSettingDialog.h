/********************************************************************************
** Form generated from reading UI file 'PlcSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLCSETTINGDIALOG_H
#define UI_PLCSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlcSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *serialComboBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *searchPushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baudrateComboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PlcSettingDialog)
    {
        if (PlcSettingDialog->objectName().isEmpty())
            PlcSettingDialog->setObjectName(QString::fromUtf8("PlcSettingDialog"));
        PlcSettingDialog->resize(270, 270);
        verticalLayout = new QVBoxLayout(PlcSettingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PlcSettingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        serialComboBox = new QComboBox(PlcSettingDialog);
        serialComboBox->setObjectName(QString::fromUtf8("serialComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialComboBox->sizePolicy().hasHeightForWidth());
        serialComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(serialComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        searchPushButton = new QPushButton(PlcSettingDialog);
        searchPushButton->setObjectName(QString::fromUtf8("searchPushButton"));

        horizontalLayout->addWidget(searchPushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PlcSettingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baudrateComboBox = new QComboBox(PlcSettingDialog);
        baudrateComboBox->addItem(QString());
        baudrateComboBox->addItem(QString());
        baudrateComboBox->addItem(QString());
        baudrateComboBox->addItem(QString());
        baudrateComboBox->addItem(QString());
        baudrateComboBox->addItem(QString());
        baudrateComboBox->addItem(QString());
        baudrateComboBox->addItem(QString());
        baudrateComboBox->setObjectName(QString::fromUtf8("baudrateComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(baudrateComboBox->sizePolicy().hasHeightForWidth());
        baudrateComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(baudrateComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(PlcSettingDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(PlcSettingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(PlcSettingDialog);
        QObject::connect(okButton, SIGNAL(clicked()), PlcSettingDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), PlcSettingDialog, SLOT(reject()));

        baudrateComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(PlcSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *PlcSettingDialog)
    {
        PlcSettingDialog->setWindowTitle(QCoreApplication::translate("PlcSettingDialog", "PlcSettingDialog", nullptr));
        label->setText(QCoreApplication::translate("PlcSettingDialog", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        searchPushButton->setText(QCoreApplication::translate("PlcSettingDialog", "\346\237\245\346\211\276", nullptr));
        label_2->setText(QCoreApplication::translate("PlcSettingDialog", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        baudrateComboBox->setItemText(0, QCoreApplication::translate("PlcSettingDialog", "1200", nullptr));
        baudrateComboBox->setItemText(1, QCoreApplication::translate("PlcSettingDialog", "2400", nullptr));
        baudrateComboBox->setItemText(2, QCoreApplication::translate("PlcSettingDialog", "4800", nullptr));
        baudrateComboBox->setItemText(3, QCoreApplication::translate("PlcSettingDialog", "9600", nullptr));
        baudrateComboBox->setItemText(4, QCoreApplication::translate("PlcSettingDialog", "19200", nullptr));
        baudrateComboBox->setItemText(5, QCoreApplication::translate("PlcSettingDialog", "38400", nullptr));
        baudrateComboBox->setItemText(6, QCoreApplication::translate("PlcSettingDialog", "57600", nullptr));
        baudrateComboBox->setItemText(7, QCoreApplication::translate("PlcSettingDialog", "115200", nullptr));

        okButton->setText(QCoreApplication::translate("PlcSettingDialog", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("PlcSettingDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlcSettingDialog: public Ui_PlcSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLCSETTINGDIALOG_H
