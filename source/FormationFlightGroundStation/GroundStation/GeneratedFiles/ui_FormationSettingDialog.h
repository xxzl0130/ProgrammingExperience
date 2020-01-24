/********************************************************************************
** Form generated from reading UI file 'FormationSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATIONSETTINGDIALOG_H
#define UI_FORMATIONSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FormationSettingDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QComboBox *uavCountComboBox;
    QComboBox *typeComboBox;
    QLabel *label_3;
    QDoubleSpinBox *angleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *heightSpinBox;
    QLabel *infoLabel;
    QDoubleSpinBox *distanceSpinBox;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QDoubleSpinBox *heightDeltaSpinBox;

    void setupUi(QDialog *FormationSettingDialog)
    {
        if (FormationSettingDialog->objectName().isEmpty())
            FormationSettingDialog->setObjectName(QString::fromUtf8("FormationSettingDialog"));
        FormationSettingDialog->resize(304, 379);
        QFont font;
        font.setPointSize(12);
        FormationSettingDialog->setFont(font);
        gridLayout = new QGridLayout(FormationSettingDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(FormationSettingDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(FormationSettingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        frame = new QFrame(FormationSettingDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        uavCountComboBox = new QComboBox(frame);
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->addItem(QString());
        uavCountComboBox->setObjectName(QString::fromUtf8("uavCountComboBox"));

        gridLayout_2->addWidget(uavCountComboBox, 0, 1, 1, 1);

        typeComboBox = new QComboBox(frame);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));

        gridLayout_2->addWidget(typeComboBox, 1, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        angleSpinBox = new QDoubleSpinBox(frame);
        angleSpinBox->setObjectName(QString::fromUtf8("angleSpinBox"));
        angleSpinBox->setMinimum(-180.000000000000000);
        angleSpinBox->setMaximum(180.000000000000000);
        angleSpinBox->setValue(60.000000000000000);

        gridLayout_2->addWidget(angleSpinBox, 2, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        heightSpinBox = new QDoubleSpinBox(frame);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMinimum(0.000000000000000);
        heightSpinBox->setMaximum(100000.000000000000000);
        heightSpinBox->setSingleStep(100.000000000000000);
        heightSpinBox->setValue(1000.000000000000000);

        gridLayout_2->addWidget(heightSpinBox, 4, 1, 1, 1);

        infoLabel = new QLabel(frame);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        sizePolicy.setHeightForWidth(infoLabel->sizePolicy().hasHeightForWidth());
        infoLabel->setSizePolicy(sizePolicy);
        infoLabel->setWordWrap(true);

        gridLayout_2->addWidget(infoLabel, 6, 0, 1, 2);

        distanceSpinBox = new QDoubleSpinBox(frame);
        distanceSpinBox->setObjectName(QString::fromUtf8("distanceSpinBox"));
        distanceSpinBox->setMinimum(0.000000000000000);
        distanceSpinBox->setMaximum(10000.000000000000000);
        distanceSpinBox->setSingleStep(100.000000000000000);
        distanceSpinBox->setValue(500.000000000000000);

        gridLayout_2->addWidget(distanceSpinBox, 3, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        heightDeltaSpinBox = new QDoubleSpinBox(frame);
        heightDeltaSpinBox->setObjectName(QString::fromUtf8("heightDeltaSpinBox"));
        heightDeltaSpinBox->setMinimum(-1000.000000000000000);
        heightDeltaSpinBox->setMaximum(1000.000000000000000);
        heightDeltaSpinBox->setSingleStep(50.000000000000000);
        heightDeltaSpinBox->setValue(0.000000000000000);

        gridLayout_2->addWidget(heightDeltaSpinBox, 5, 1, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 1, 2);


        retranslateUi(FormationSettingDialog);
        QObject::connect(okButton, SIGNAL(clicked()), FormationSettingDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), FormationSettingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormationSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *FormationSettingDialog)
    {
        FormationSettingDialog->setWindowTitle(QApplication::translate("FormationSettingDialog", "\347\274\226\351\230\237\350\256\276\347\275\256", nullptr));
        okButton->setText(QApplication::translate("FormationSettingDialog", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QApplication::translate("FormationSettingDialog", "\345\217\226\346\266\210", nullptr));
        uavCountComboBox->setItemText(0, QApplication::translate("FormationSettingDialog", "1", nullptr));
        uavCountComboBox->setItemText(1, QApplication::translate("FormationSettingDialog", "2", nullptr));
        uavCountComboBox->setItemText(2, QApplication::translate("FormationSettingDialog", "3", nullptr));
        uavCountComboBox->setItemText(3, QApplication::translate("FormationSettingDialog", "4", nullptr));
        uavCountComboBox->setItemText(4, QApplication::translate("FormationSettingDialog", "5", nullptr));
        uavCountComboBox->setItemText(5, QApplication::translate("FormationSettingDialog", "6", nullptr));
        uavCountComboBox->setItemText(6, QApplication::translate("FormationSettingDialog", "7", nullptr));
        uavCountComboBox->setItemText(7, QApplication::translate("FormationSettingDialog", "8", nullptr));
        uavCountComboBox->setItemText(8, QApplication::translate("FormationSettingDialog", "9", nullptr));

        typeComboBox->setItemText(0, QApplication::translate("FormationSettingDialog", "\344\272\272\345\255\227", nullptr));
        typeComboBox->setItemText(1, QApplication::translate("FormationSettingDialog", "\345\215\225\345\210\227", nullptr));
        typeComboBox->setItemText(2, QApplication::translate("FormationSettingDialog", "\344\270\211\350\247\222", nullptr));
        typeComboBox->setItemText(3, QApplication::translate("FormationSettingDialog", "\344\270\252\345\255\227", nullptr));

        label_3->setText(QApplication::translate("FormationSettingDialog", "\347\274\226\351\230\237\345\275\242\347\212\266\357\274\232", nullptr));
        angleSpinBox->setSuffix(QApplication::translate("FormationSettingDialog", "\302\260", nullptr));
        label_2->setText(QApplication::translate("FormationSettingDialog", "\350\267\235\347\246\273\357\274\232", nullptr));
        heightSpinBox->setSuffix(QApplication::translate("FormationSettingDialog", "m", nullptr));
        infoLabel->setText(QApplication::translate("FormationSettingDialog", "\350\257\264\346\230\216\357\274\232\n"
"\350\247\222\345\272\246\344\270\272\344\272\272\345\255\227\344\270\244\350\276\271\345\234\250\345\211\215\350\277\233\346\226\271\345\220\221\345\217\215\345\220\221\347\232\204\345\244\271\350\247\222\357\274\233\350\267\235\347\246\273\344\270\272\346\257\217\350\276\271\344\270\212\347\233\270\351\202\273\351\243\236\346\234\272\351\227\264\347\232\204\350\267\235\347\246\273\343\200\202", nullptr));
        distanceSpinBox->setSuffix(QApplication::translate("FormationSettingDialog", "m", nullptr));
        label->setText(QApplication::translate("FormationSettingDialog", "\350\247\222\345\272\246\357\274\232", nullptr));
        label_5->setText(QApplication::translate("FormationSettingDialog", "\345\267\241\350\210\252\351\253\230\345\272\246\357\274\232", nullptr));
        label_4->setText(QApplication::translate("FormationSettingDialog", "\346\227\240\344\272\272\346\234\272\346\225\260\357\274\232", nullptr));
        label_6->setText(QApplication::translate("FormationSettingDialog", "\347\274\226\351\230\237\351\253\230\345\272\246\345\267\256\357\274\232", nullptr));
        heightDeltaSpinBox->setSuffix(QApplication::translate("FormationSettingDialog", "m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormationSettingDialog: public Ui_FormationSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATIONSETTINGDIALOG_H
