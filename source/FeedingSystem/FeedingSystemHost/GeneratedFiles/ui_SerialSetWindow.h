/********************************************************************************
** Form generated from reading UI file 'SerialSetWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSETWINDOW_H
#define UI_SERIALSETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialSetWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *portComboBox;
    QComboBox *baudComboBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SerialSetWindow)
    {
        if (SerialSetWindow->objectName().isEmpty())
            SerialSetWindow->setObjectName(QStringLiteral("SerialSetWindow"));
        SerialSetWindow->resize(226, 180);
        verticalLayout = new QVBoxLayout(SerialSetWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SerialSetWindow);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(SerialSetWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        portComboBox = new QComboBox(SerialSetWindow);
        portComboBox->setObjectName(QStringLiteral("portComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portComboBox->sizePolicy().hasHeightForWidth());
        portComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(portComboBox, 0, 1, 1, 1);

        baudComboBox = new QComboBox(SerialSetWindow);
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->setObjectName(QStringLiteral("baudComboBox"));
        sizePolicy1.setHeightForWidth(baudComboBox->sizePolicy().hasHeightForWidth());
        baudComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(baudComboBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(SerialSetWindow);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(SerialSetWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(SerialSetWindow);
        QObject::connect(okButton, SIGNAL(clicked()), SerialSetWindow, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SerialSetWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(SerialSetWindow);
    } // setupUi

    void retranslateUi(QDialog *SerialSetWindow)
    {
        SerialSetWindow->setWindowTitle(QApplication::translate("SerialSetWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("SerialSetWindow", "\344\270\262\345\217\243\357\274\232", nullptr));
        label_2->setText(QApplication::translate("SerialSetWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        baudComboBox->setItemText(0, QApplication::translate("SerialSetWindow", "110", nullptr));
        baudComboBox->setItemText(1, QApplication::translate("SerialSetWindow", "300", nullptr));
        baudComboBox->setItemText(2, QApplication::translate("SerialSetWindow", "600", nullptr));
        baudComboBox->setItemText(3, QApplication::translate("SerialSetWindow", "1200", nullptr));
        baudComboBox->setItemText(4, QApplication::translate("SerialSetWindow", "2400", nullptr));
        baudComboBox->setItemText(5, QApplication::translate("SerialSetWindow", "4800", nullptr));
        baudComboBox->setItemText(6, QApplication::translate("SerialSetWindow", "9600", nullptr));
        baudComboBox->setItemText(7, QApplication::translate("SerialSetWindow", "14400", nullptr));
        baudComboBox->setItemText(8, QApplication::translate("SerialSetWindow", "19200", nullptr));
        baudComboBox->setItemText(9, QApplication::translate("SerialSetWindow", "28800", nullptr));
        baudComboBox->setItemText(10, QApplication::translate("SerialSetWindow", "38400", nullptr));
        baudComboBox->setItemText(11, QApplication::translate("SerialSetWindow", "56000", nullptr));
        baudComboBox->setItemText(12, QApplication::translate("SerialSetWindow", "57600", nullptr));
        baudComboBox->setItemText(13, QApplication::translate("SerialSetWindow", "115200", nullptr));

        okButton->setText(QApplication::translate("SerialSetWindow", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QApplication::translate("SerialSetWindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialSetWindow: public Ui_SerialSetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSETWINDOW_H
