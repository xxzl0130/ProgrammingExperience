/********************************************************************************
** Form generated from reading UI file 'WaitWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITWINDOW_H
#define UI_WAITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WaitWindow
{
public:
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QLabel *label;

    void setupUi(QDialog *WaitWindow)
    {
        if (WaitWindow->objectName().isEmpty())
            WaitWindow->setObjectName(QStringLiteral("WaitWindow"));
        WaitWindow->resize(498, 56);
        WaitWindow->setLayoutDirection(Qt::LeftToRight);
        WaitWindow->setModal(false);
        verticalLayout = new QVBoxLayout(WaitWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        progressBar = new QProgressBar(WaitWindow);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(480, 20));
        progressBar->setMaximumSize(QSize(480, 20));
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        label = new QLabel(WaitWindow);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(WaitWindow);

        QMetaObject::connectSlotsByName(WaitWindow);
    } // setupUi

    void retranslateUi(QDialog *WaitWindow)
    {
        WaitWindow->setWindowTitle(QString());
        label->setText(QApplication::translate("WaitWindow", "\347\250\213\345\272\217\350\277\220\350\241\214\344\270\255\357\274\214\350\257\267\347\255\211\345\276\205\343\200\202\343\200\202\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaitWindow: public Ui_WaitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITWINDOW_H
