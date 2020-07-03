/********************************************************************************
** Form generated from reading UI file 'CommandRenameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDRENAMEDIALOG_H
#define UI_COMMANDRENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CommandRenameDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *commandRenameLineEdit;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CommandRenameDialog)
    {
        if (CommandRenameDialog->objectName().isEmpty())
            CommandRenameDialog->setObjectName(QStringLiteral("CommandRenameDialog"));
        CommandRenameDialog->resize(313, 94);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CommandRenameDialog->sizePolicy().hasHeightForWidth());
        CommandRenameDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(CommandRenameDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        commandRenameLineEdit = new QLineEdit(CommandRenameDialog);
        commandRenameLineEdit->setObjectName(QStringLiteral("commandRenameLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(commandRenameLineEdit->sizePolicy().hasHeightForWidth());
        commandRenameLineEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(22);
        commandRenameLineEdit->setFont(font);
        commandRenameLineEdit->setInputMethodHints(Qt::ImhEmailCharactersOnly|Qt::ImhUrlCharactersOnly);

        gridLayout->addWidget(commandRenameLineEdit, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetMinimumSize);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(CommandRenameDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(CommandRenameDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(CommandRenameDialog);
        QObject::connect(okButton, SIGNAL(clicked()), CommandRenameDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), CommandRenameDialog, SLOT(reject()));
        QObject::connect(commandRenameLineEdit, SIGNAL(textChanged(QString)), CommandRenameDialog, SLOT(nameChanged(QString)));

        QMetaObject::connectSlotsByName(CommandRenameDialog);
    } // setupUi

    void retranslateUi(QDialog *CommandRenameDialog)
    {
        CommandRenameDialog->setWindowTitle(QApplication::translate("CommandRenameDialog", "\351\207\215\345\221\275\345\220\215", nullptr));
        commandRenameLineEdit->setText(QApplication::translate("CommandRenameDialog", "\351\207\215\345\221\275\345\220\215", nullptr));
        okButton->setText(QApplication::translate("CommandRenameDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("CommandRenameDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommandRenameDialog: public Ui_CommandRenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDRENAMEDIALOG_H
