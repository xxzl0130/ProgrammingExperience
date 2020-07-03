/********************************************************************************
** Form generated from reading UI file 'RemoteSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTESETDIALOG_H
#define UI_REMOTESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RemoteSetDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *portText;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label_2;
    QLineEdit *netIDText;
    QLabel *label;
    QLabel *label_3;
    QSpinBox *flashTimeSpinBox;

    void setupUi(QDialog *RemoteSetDialog)
    {
        if (RemoteSetDialog->objectName().isEmpty())
            RemoteSetDialog->setObjectName(QStringLiteral("RemoteSetDialog"));
        RemoteSetDialog->resize(268, 306);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RemoteSetDialog->sizePolicy().hasHeightForWidth());
        RemoteSetDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(12);
        RemoteSetDialog->setFont(font);
        gridLayout = new QGridLayout(RemoteSetDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        portText = new QLineEdit(RemoteSetDialog);
        portText->setObjectName(QStringLiteral("portText"));

        gridLayout->addWidget(portText, 1, 1, 1, 1);

        okButton = new QPushButton(RemoteSetDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 3, 1, 1, 1);

        cancelButton = new QPushButton(RemoteSetDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 4, 1, 1, 1);

        label_2 = new QLabel(RemoteSetDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        netIDText = new QLineEdit(RemoteSetDialog);
        netIDText->setObjectName(QStringLiteral("netIDText"));

        gridLayout->addWidget(netIDText, 0, 1, 1, 1);

        label = new QLabel(RemoteSetDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(RemoteSetDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        flashTimeSpinBox = new QSpinBox(RemoteSetDialog);
        flashTimeSpinBox->setObjectName(QStringLiteral("flashTimeSpinBox"));
        flashTimeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        flashTimeSpinBox->setMaximum(5000);
        flashTimeSpinBox->setValue(100);

        gridLayout->addWidget(flashTimeSpinBox, 2, 1, 1, 1);

        QWidget::setTabOrder(netIDText, portText);
        QWidget::setTabOrder(portText, flashTimeSpinBox);
        QWidget::setTabOrder(flashTimeSpinBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(RemoteSetDialog);
        QObject::connect(okButton, SIGNAL(clicked()), RemoteSetDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), RemoteSetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoteSetDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoteSetDialog)
    {
        RemoteSetDialog->setWindowTitle(QApplication::translate("RemoteSetDialog", "\350\277\234\347\250\213\344\270\273\346\234\272\350\256\276\347\275\256", nullptr));
        portText->setText(QApplication::translate("RemoteSetDialog", "0xffff", nullptr));
        okButton->setText(QApplication::translate("RemoteSetDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("RemoteSetDialog", "Cancel", nullptr));
        label_2->setText(QApplication::translate("RemoteSetDialog", "Port:", nullptr));
        netIDText->setText(QApplication::translate("RemoteSetDialog", "127.0.0.1.1.1", nullptr));
        label->setText(QApplication::translate("RemoteSetDialog", "NetID:    ", nullptr));
        label_3->setText(QApplication::translate("RemoteSetDialog", "\345\210\267\346\226\260\351\227\264\351\232\224\357\274\232", nullptr));
        flashTimeSpinBox->setSuffix(QApplication::translate("RemoteSetDialog", "ms", nullptr));
        flashTimeSpinBox->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class RemoteSetDialog: public Ui_RemoteSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTESETDIALOG_H
