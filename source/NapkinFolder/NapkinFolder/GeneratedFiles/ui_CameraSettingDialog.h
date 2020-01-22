/********************************************************************************
** Form generated from reading UI file 'CameraSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASETTINGDIALOG_H
#define UI_CAMERASETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *fromFileRadioButton;
    QRadioButton *fromCameraRadioButton;
    QStackedWidget *stackedWidget;
    QWidget *filePage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *openFilePushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *fileNameLabel;
    QWidget *cameraPage;
    QGridLayout *gridLayout;
    QComboBox *cameraListComboBox;
    QLabel *deviceNumberLabel;
    QPushButton *searchCameraPushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *buttons;
    QSpacerItem *spacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CameraSettingDialog)
    {
        if (CameraSettingDialog->objectName().isEmpty())
            CameraSettingDialog->setObjectName(QString::fromUtf8("CameraSettingDialog"));
        CameraSettingDialog->resize(332, 215);
        verticalLayout = new QVBoxLayout(CameraSettingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fromFileRadioButton = new QRadioButton(CameraSettingDialog);
        fromFileRadioButton->setObjectName(QString::fromUtf8("fromFileRadioButton"));

        horizontalLayout->addWidget(fromFileRadioButton);

        fromCameraRadioButton = new QRadioButton(CameraSettingDialog);
        fromCameraRadioButton->setObjectName(QString::fromUtf8("fromCameraRadioButton"));
        fromCameraRadioButton->setChecked(true);

        horizontalLayout->addWidget(fromCameraRadioButton);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(CameraSettingDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        filePage = new QWidget();
        filePage->setObjectName(QString::fromUtf8("filePage"));
        verticalLayout_2 = new QVBoxLayout(filePage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        openFilePushButton = new QPushButton(filePage);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));

        horizontalLayout_2->addWidget(openFilePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        fileNameLabel = new QLabel(filePage);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(fileNameLabel);

        stackedWidget->addWidget(filePage);
        cameraPage = new QWidget();
        cameraPage->setObjectName(QString::fromUtf8("cameraPage"));
        gridLayout = new QGridLayout(cameraPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cameraListComboBox = new QComboBox(cameraPage);
        cameraListComboBox->setObjectName(QString::fromUtf8("cameraListComboBox"));

        gridLayout->addWidget(cameraListComboBox, 2, 0, 1, 3);

        deviceNumberLabel = new QLabel(cameraPage);
        deviceNumberLabel->setObjectName(QString::fromUtf8("deviceNumberLabel"));

        gridLayout->addWidget(deviceNumberLabel, 0, 0, 1, 1);

        searchCameraPushButton = new QPushButton(cameraPage);
        searchCameraPushButton->setObjectName(QString::fromUtf8("searchCameraPushButton"));

        gridLayout->addWidget(searchCameraPushButton, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        stackedWidget->addWidget(cameraPage);

        verticalLayout->addWidget(stackedWidget);

        buttons = new QHBoxLayout();
        buttons->setSpacing(6);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setContentsMargins(0, 0, 0, 0);
        spacer = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttons->addItem(spacer);

        okButton = new QPushButton(CameraSettingDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        buttons->addWidget(okButton);

        cancelButton = new QPushButton(CameraSettingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        buttons->addWidget(cancelButton);


        verticalLayout->addLayout(buttons);


        retranslateUi(CameraSettingDialog);
        QObject::connect(okButton, SIGNAL(clicked()), CameraSettingDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), CameraSettingDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CameraSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraSettingDialog)
    {
        CameraSettingDialog->setWindowTitle(QCoreApplication::translate("CameraSettingDialog", "CameraSetting", nullptr));
        fromFileRadioButton->setText(QCoreApplication::translate("CameraSettingDialog", "\346\235\245\350\207\252\346\226\207\344\273\266", nullptr));
        fromCameraRadioButton->setText(QCoreApplication::translate("CameraSettingDialog", "\346\235\245\350\207\252\346\221\204\345\203\217\345\244\264", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("CameraSettingDialog", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        fileNameLabel->setText(QCoreApplication::translate("CameraSettingDialog", "\346\224\257\346\214\201jpg\357\274\214bmp\357\274\214mp4\347\255\211\346\240\274\345\274\217\343\200\202", nullptr));
        deviceNumberLabel->setText(QCoreApplication::translate("CameraSettingDialog", "\350\256\276\345\244\207\346\225\260\351\207\217\357\274\2320", nullptr));
        searchCameraPushButton->setText(QCoreApplication::translate("CameraSettingDialog", "\346\237\245\346\211\276\350\256\276\345\244\207", nullptr));
        okButton->setText(QCoreApplication::translate("CameraSettingDialog", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("CameraSettingDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraSettingDialog: public Ui_CameraSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASETTINGDIALOG_H
