/********************************************************************************
** Form generated from reading UI file 'ImageSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGESETTING_H
#define UI_IMAGESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ImageSettingDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_3;
    QSpinBox *exposureGainSpinBox;
    QLabel *label_2;
    QSpinBox *exposureTimeSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *autoTimeCheckBox;
    QCheckBox *autoGainCheckBox;
    QComboBox *imageFormatComboBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *brightnessLabel;
    QLabel *contrastLabel;
    QSlider *contrastSlider;
    QSlider *brightnessSlider;
    QLabel *label_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QSpinBox *distanceSpinBox;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *ImageSettingDialog)
    {
        if (ImageSettingDialog->objectName().isEmpty())
            ImageSettingDialog->setObjectName(QString::fromUtf8("ImageSettingDialog"));
        ImageSettingDialog->resize(400, 300);
        gridLayout = new QGridLayout(ImageSettingDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(ImageSettingDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(ImageSettingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        groupBox = new QGroupBox(ImageSettingDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        exposureGainSpinBox = new QSpinBox(groupBox);
        exposureGainSpinBox->setObjectName(QString::fromUtf8("exposureGainSpinBox"));
        exposureGainSpinBox->setMaximum(100);
        exposureGainSpinBox->setSingleStep(1);
        exposureGainSpinBox->setValue(0);

        gridLayout_2->addWidget(exposureGainSpinBox, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        exposureTimeSpinBox = new QSpinBox(groupBox);
        exposureTimeSpinBox->setObjectName(QString::fromUtf8("exposureTimeSpinBox"));
        exposureTimeSpinBox->setMaximum(1000000);
        exposureTimeSpinBox->setSingleStep(10000);
        exposureTimeSpinBox->setValue(50000);

        gridLayout_2->addWidget(exposureTimeSpinBox, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        autoTimeCheckBox = new QCheckBox(groupBox);
        autoTimeCheckBox->setObjectName(QString::fromUtf8("autoTimeCheckBox"));

        gridLayout_2->addWidget(autoTimeCheckBox, 0, 1, 1, 1);

        autoGainCheckBox = new QCheckBox(groupBox);
        autoGainCheckBox->setObjectName(QString::fromUtf8("autoGainCheckBox"));

        gridLayout_2->addWidget(autoGainCheckBox, 1, 1, 1, 1);

        imageFormatComboBox = new QComboBox(groupBox);
        imageFormatComboBox->addItem(QString());
        imageFormatComboBox->addItem(QString());
        imageFormatComboBox->setObjectName(QString::fromUtf8("imageFormatComboBox"));

        gridLayout_2->addWidget(imageFormatComboBox, 2, 1, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ImageSettingDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        brightnessLabel = new QLabel(groupBox_2);
        brightnessLabel->setObjectName(QString::fromUtf8("brightnessLabel"));

        gridLayout_3->addWidget(brightnessLabel, 0, 2, 1, 1);

        contrastLabel = new QLabel(groupBox_2);
        contrastLabel->setObjectName(QString::fromUtf8("contrastLabel"));

        gridLayout_3->addWidget(contrastLabel, 1, 2, 1, 1);

        contrastSlider = new QSlider(groupBox_2);
        contrastSlider->setObjectName(QString::fromUtf8("contrastSlider"));
        contrastSlider->setMinimum(-100);
        contrastSlider->setMaximum(100);
        contrastSlider->setOrientation(Qt::Horizontal);
        contrastSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_3->addWidget(contrastSlider, 1, 1, 1, 1);

        brightnessSlider = new QSlider(groupBox_2);
        brightnessSlider->setObjectName(QString::fromUtf8("brightnessSlider"));
        brightnessSlider->setMinimum(0);
        brightnessSlider->setMaximum(200);
        brightnessSlider->setSingleStep(1);
        brightnessSlider->setValue(100);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_3->addWidget(brightnessSlider, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        distanceSpinBox = new QSpinBox(groupBox_2);
        distanceSpinBox->setObjectName(QString::fromUtf8("distanceSpinBox"));
        distanceSpinBox->setMaximum(10000);
        distanceSpinBox->setSingleStep(10);

        horizontalLayout->addWidget(distanceSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(ImageSettingDialog);
        QObject::connect(okButton, SIGNAL(clicked()), ImageSettingDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ImageSettingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImageSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *ImageSettingDialog)
    {
        ImageSettingDialog->setWindowTitle(QCoreApplication::translate("ImageSettingDialog", "ImageSetting", nullptr));
        okButton->setText(QCoreApplication::translate("ImageSettingDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("ImageSettingDialog", "Cancel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ImageSettingDialog", "\347\233\270\346\234\272\346\213\215\346\221\204\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("ImageSettingDialog", "\346\233\235\345\205\211\346\227\266\351\227\264\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ImageSettingDialog", "\345\233\276\345\203\217\346\250\241\345\274\217\357\274\232", nullptr));
        exposureGainSpinBox->setSuffix(QCoreApplication::translate("ImageSettingDialog", "dB", nullptr));
        label_2->setText(QCoreApplication::translate("ImageSettingDialog", "\345\242\236\347\233\212\347\263\273\346\225\260\357\274\232", nullptr));
        exposureTimeSpinBox->setSuffix(QCoreApplication::translate("ImageSettingDialog", "us", nullptr));
        autoTimeCheckBox->setText(QCoreApplication::translate("ImageSettingDialog", "\350\207\252\345\212\250", nullptr));
        autoGainCheckBox->setText(QCoreApplication::translate("ImageSettingDialog", "\350\207\252\345\212\250", nullptr));
        imageFormatComboBox->setItemText(0, QCoreApplication::translate("ImageSettingDialog", "8\344\275\215\347\201\260\345\272\246", nullptr));
        imageFormatComboBox->setItemText(1, QCoreApplication::translate("ImageSettingDialog", "24\344\275\215BGR", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("ImageSettingDialog", "\345\233\276\345\203\217\345\244\204\347\220\206\350\256\276\347\275\256", nullptr));
        label_5->setText(QCoreApplication::translate("ImageSettingDialog", "\345\257\271\346\257\224\345\272\246\357\274\232", nullptr));
        brightnessLabel->setText(QCoreApplication::translate("ImageSettingDialog", "0.00", nullptr));
        contrastLabel->setText(QCoreApplication::translate("ImageSettingDialog", "0", nullptr));
        label_4->setText(QCoreApplication::translate("ImageSettingDialog", "\344\272\256\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("ImageSettingDialog", "\350\267\235\347\246\273\357\274\232", nullptr));
        distanceSpinBox->setSuffix(QCoreApplication::translate("ImageSettingDialog", "mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageSettingDialog: public Ui_ImageSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGESETTING_H
