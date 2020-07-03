/********************************************************************************
** Form generated from reading UI file 'ParameterSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERSETDIALOG_H
#define UI_PARAMETERSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ParameterSetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *parameterTable;
    QProgressBar *progressBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *sendButton;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ParameterSetDialog)
    {
        if (ParameterSetDialog->objectName().isEmpty())
            ParameterSetDialog->setObjectName(QStringLiteral("ParameterSetDialog"));
        ParameterSetDialog->resize(570, 441);
        verticalLayout = new QVBoxLayout(ParameterSetDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        parameterTable = new QTableWidget(ParameterSetDialog);
        parameterTable->setObjectName(QStringLiteral("parameterTable"));

        verticalLayout->addWidget(parameterTable);

        progressBar = new QProgressBar(ParameterSetDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        sendButton = new QPushButton(ParameterSetDialog);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        hboxLayout->addWidget(sendButton);

        okButton = new QPushButton(ParameterSetDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(ParameterSetDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(ParameterSetDialog);
        QObject::connect(okButton, SIGNAL(clicked()), ParameterSetDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ParameterSetDialog, SLOT(reject()));
        QObject::connect(sendButton, SIGNAL(clicked()), ParameterSetDialog, SLOT(send()));

        QMetaObject::connectSlotsByName(ParameterSetDialog);
    } // setupUi

    void retranslateUi(QDialog *ParameterSetDialog)
    {
        ParameterSetDialog->setWindowTitle(QApplication::translate("ParameterSetDialog", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        sendButton->setText(QApplication::translate("ParameterSetDialog", "Send", nullptr));
        okButton->setText(QApplication::translate("ParameterSetDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("ParameterSetDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParameterSetDialog: public Ui_ParameterSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERSETDIALOG_H
