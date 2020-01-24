/********************************************************************************
** Form generated from reading UI file 'SimulationWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONWINDOW_H
#define UI_SIMULATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimulationWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *stateGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_19;
    QLineEdit *dphiStateLineEdit;
    QComboBox *selectUavStateComboBox;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *vStateLineEdit;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *miuStateLineEdit;
    QLineEdit *timeLineEdit;
    QLineEdit *phiStateLineEdit;
    QLabel *label_6;
    QLineEdit *xStateLineEdit;
    QLineEdit *yStateLineEdit;
    QLineEdit *zStateLineEdit;
    QLabel *label_20;
    QLineEdit *dmiuStateLineEdit;
    QGroupBox *settingGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_15;
    QLineEdit *kmiuLineEdit;
    QLabel *label_17;
    QLineEdit *phi0LineEdit;
    QLineEdit *kphiLineEdit;
    QLabel *label_14;
    QLineEdit *x0LineEdit;
    QLabel *label_9;
    QLabel *label_18;
    QLineEdit *v0LineEdit;
    QLabel *label_21;
    QLabel *label_12;
    QComboBox *selectUavSettingComboBox;
    QLabel *label_13;
    QComboBox *uavTypeComboBox;
    QLineEdit *kvLineEdit;
    QLineEdit *z0LineEdit;
    QLabel *label_16;
    QLineEdit *miu0LineEdit;
    QLabel *label_5;
    QLineEdit *y0LineEdit;
    QHBoxLayout *horizontalLayout;
    QCheckBox *onlineCheckBox;
    QCheckBox *autoCheckBox;
    QPushButton *modifyUavPushButton;

    void setupUi(QMainWindow *SimulationWindowClass)
    {
        if (SimulationWindowClass->objectName().isEmpty())
            SimulationWindowClass->setObjectName(QString::fromUtf8("SimulationWindowClass"));
        SimulationWindowClass->resize(882, 466);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/SimulationWindow/Resources/airplane.png"), QSize(), QIcon::Normal, QIcon::Off);
        SimulationWindowClass->setWindowIcon(icon);
        centralWidget = new QWidget(SimulationWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stateGroupBox = new QGroupBox(centralWidget);
        stateGroupBox->setObjectName(QString::fromUtf8("stateGroupBox"));
        gridLayout_2 = new QGridLayout(stateGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(stateGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_4 = new QLabel(stateGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        label_19 = new QLabel(stateGroupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 1, 0, 1, 1);

        dphiStateLineEdit = new QLineEdit(stateGroupBox);
        dphiStateLineEdit->setObjectName(QString::fromUtf8("dphiStateLineEdit"));

        gridLayout_2->addWidget(dphiStateLineEdit, 8, 2, 1, 1);

        selectUavStateComboBox = new QComboBox(stateGroupBox);
        selectUavStateComboBox->setObjectName(QString::fromUtf8("selectUavStateComboBox"));

        gridLayout_2->addWidget(selectUavStateComboBox, 0, 0, 1, 3);

        label_2 = new QLabel(stateGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        label_7 = new QLabel(stateGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_7, 7, 0, 1, 1);

        vStateLineEdit = new QLineEdit(stateGroupBox);
        vStateLineEdit->setObjectName(QString::fromUtf8("vStateLineEdit"));

        gridLayout_2->addWidget(vStateLineEdit, 5, 2, 1, 1);

        label_3 = new QLabel(stateGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label_8 = new QLabel(stateGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_8, 8, 0, 1, 1);

        miuStateLineEdit = new QLineEdit(stateGroupBox);
        miuStateLineEdit->setObjectName(QString::fromUtf8("miuStateLineEdit"));

        gridLayout_2->addWidget(miuStateLineEdit, 7, 2, 1, 1);

        timeLineEdit = new QLineEdit(stateGroupBox);
        timeLineEdit->setObjectName(QString::fromUtf8("timeLineEdit"));

        gridLayout_2->addWidget(timeLineEdit, 1, 2, 1, 1);

        phiStateLineEdit = new QLineEdit(stateGroupBox);
        phiStateLineEdit->setObjectName(QString::fromUtf8("phiStateLineEdit"));

        gridLayout_2->addWidget(phiStateLineEdit, 6, 2, 1, 1);

        label_6 = new QLabel(stateGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        xStateLineEdit = new QLineEdit(stateGroupBox);
        xStateLineEdit->setObjectName(QString::fromUtf8("xStateLineEdit"));

        gridLayout_2->addWidget(xStateLineEdit, 2, 2, 1, 1);

        yStateLineEdit = new QLineEdit(stateGroupBox);
        yStateLineEdit->setObjectName(QString::fromUtf8("yStateLineEdit"));

        gridLayout_2->addWidget(yStateLineEdit, 3, 2, 1, 1);

        zStateLineEdit = new QLineEdit(stateGroupBox);
        zStateLineEdit->setObjectName(QString::fromUtf8("zStateLineEdit"));

        gridLayout_2->addWidget(zStateLineEdit, 4, 2, 1, 1);

        label_20 = new QLabel(stateGroupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_20, 9, 0, 1, 1);

        dmiuStateLineEdit = new QLineEdit(stateGroupBox);
        dmiuStateLineEdit->setObjectName(QString::fromUtf8("dmiuStateLineEdit"));

        gridLayout_2->addWidget(dmiuStateLineEdit, 9, 2, 1, 1);


        gridLayout->addWidget(stateGroupBox, 0, 0, 1, 1);

        settingGroupBox = new QGroupBox(centralWidget);
        settingGroupBox->setObjectName(QString::fromUtf8("settingGroupBox"));
        gridLayout_3 = new QGridLayout(settingGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_15 = new QLabel(settingGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_15, 4, 0, 1, 1);

        kmiuLineEdit = new QLineEdit(settingGroupBox);
        kmiuLineEdit->setObjectName(QString::fromUtf8("kmiuLineEdit"));

        gridLayout_3->addWidget(kmiuLineEdit, 3, 1, 1, 1);

        label_17 = new QLabel(settingGroupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_17, 6, 0, 1, 1);

        phi0LineEdit = new QLineEdit(settingGroupBox);
        phi0LineEdit->setObjectName(QString::fromUtf8("phi0LineEdit"));

        gridLayout_3->addWidget(phi0LineEdit, 7, 1, 1, 1);

        kphiLineEdit = new QLineEdit(settingGroupBox);
        kphiLineEdit->setObjectName(QString::fromUtf8("kphiLineEdit"));

        gridLayout_3->addWidget(kphiLineEdit, 2, 1, 1, 1);

        label_14 = new QLabel(settingGroupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_14, 3, 0, 1, 1);

        x0LineEdit = new QLineEdit(settingGroupBox);
        x0LineEdit->setObjectName(QString::fromUtf8("x0LineEdit"));

        gridLayout_3->addWidget(x0LineEdit, 4, 1, 1, 1);

        label_9 = new QLabel(settingGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_9, 10, 0, 1, 1);

        label_18 = new QLabel(settingGroupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_18, 8, 0, 1, 1);

        v0LineEdit = new QLineEdit(settingGroupBox);
        v0LineEdit->setObjectName(QString::fromUtf8("v0LineEdit"));

        gridLayout_3->addWidget(v0LineEdit, 9, 1, 1, 1);

        label_21 = new QLabel(settingGroupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_21, 7, 0, 1, 1);

        label_12 = new QLabel(settingGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        selectUavSettingComboBox = new QComboBox(settingGroupBox);
        selectUavSettingComboBox->setObjectName(QString::fromUtf8("selectUavSettingComboBox"));

        gridLayout_3->addWidget(selectUavSettingComboBox, 0, 0, 1, 2);

        label_13 = new QLabel(settingGroupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        uavTypeComboBox = new QComboBox(settingGroupBox);
        uavTypeComboBox->addItem(QString());
        uavTypeComboBox->addItem(QString());
        uavTypeComboBox->setObjectName(QString::fromUtf8("uavTypeComboBox"));

        gridLayout_3->addWidget(uavTypeComboBox, 10, 1, 1, 1);

        kvLineEdit = new QLineEdit(settingGroupBox);
        kvLineEdit->setObjectName(QString::fromUtf8("kvLineEdit"));

        gridLayout_3->addWidget(kvLineEdit, 1, 1, 1, 1);

        z0LineEdit = new QLineEdit(settingGroupBox);
        z0LineEdit->setObjectName(QString::fromUtf8("z0LineEdit"));

        gridLayout_3->addWidget(z0LineEdit, 6, 1, 1, 1);

        label_16 = new QLabel(settingGroupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_16, 5, 0, 1, 1);

        miu0LineEdit = new QLineEdit(settingGroupBox);
        miu0LineEdit->setObjectName(QString::fromUtf8("miu0LineEdit"));

        gridLayout_3->addWidget(miu0LineEdit, 8, 1, 1, 1);

        label_5 = new QLabel(settingGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_5, 9, 0, 1, 1);

        y0LineEdit = new QLineEdit(settingGroupBox);
        y0LineEdit->setObjectName(QString::fromUtf8("y0LineEdit"));

        gridLayout_3->addWidget(y0LineEdit, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        onlineCheckBox = new QCheckBox(settingGroupBox);
        onlineCheckBox->setObjectName(QString::fromUtf8("onlineCheckBox"));
        onlineCheckBox->setChecked(true);

        horizontalLayout->addWidget(onlineCheckBox);

        autoCheckBox = new QCheckBox(settingGroupBox);
        autoCheckBox->setObjectName(QString::fromUtf8("autoCheckBox"));
        autoCheckBox->setChecked(true);

        horizontalLayout->addWidget(autoCheckBox);

        modifyUavPushButton = new QPushButton(settingGroupBox);
        modifyUavPushButton->setObjectName(QString::fromUtf8("modifyUavPushButton"));

        horizontalLayout->addWidget(modifyUavPushButton);


        gridLayout_3->addLayout(horizontalLayout, 11, 0, 1, 2);

        gridLayout_3->setRowStretch(0, 1);

        gridLayout->addWidget(settingGroupBox, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        SimulationWindowClass->setCentralWidget(centralWidget);

        retranslateUi(SimulationWindowClass);

        QMetaObject::connectSlotsByName(SimulationWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *SimulationWindowClass)
    {
        SimulationWindowClass->setWindowTitle(QApplication::translate("SimulationWindowClass", "\346\227\240\344\272\272\346\234\272\344\273\277\347\234\237", nullptr));
        stateGroupBox->setTitle(QApplication::translate("SimulationWindowClass", "\346\227\240\344\272\272\346\234\272\347\212\266\346\200\201", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SimulationWindowClass", "x\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SimulationWindowClass", "X\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("SimulationWindowClass", "\351\200\237\345\272\246(m/s)", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SimulationWindowClass", "V\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        label_19->setToolTip(QApplication::translate("SimulationWindowClass", "\344\273\277\347\234\237\346\227\266\351\227\264", nullptr));
#endif // QT_NO_TOOLTIP
        label_19->setText(QApplication::translate("SimulationWindowClass", "T\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        dphiStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\350\210\252\345\220\221\350\247\222\351\200\237\345\272\246(rad/s)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("SimulationWindowClass", "y\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SimulationWindowClass", "Y\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("SimulationWindowClass", "\345\200\276\346\226\234\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("SimulationWindowClass", "\316\274\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        vStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\351\200\237\345\272\246(m/s)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("SimulationWindowClass", "\351\253\230\345\272\246(m)", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("SimulationWindowClass", "Z\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("SimulationWindowClass", "\350\210\252\345\220\221\350\247\222\351\200\237\345\272\246(rad/s)", nullptr));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("SimulationWindowClass", "d\317\206\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        miuStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\200\276\346\226\234\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        timeLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\344\273\277\347\234\237\346\227\266\351\227\264", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        phiStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\350\210\252\345\220\221\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("SimulationWindowClass", "\350\210\252\345\220\221\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("SimulationWindowClass", "\317\206\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        xStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "x\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        yStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "y\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        zStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\351\253\230\345\272\246(m)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_20->setToolTip(QApplication::translate("SimulationWindowClass", "\345\200\276\346\226\234\350\247\222\351\200\237\345\272\246(rad/s)", nullptr));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("SimulationWindowClass", "d\316\274\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        dmiuStateLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\200\276\346\226\234\350\247\222\351\200\237\345\272\246(rad/s)", nullptr));
#endif // QT_NO_TOOLTIP
        settingGroupBox->setTitle(QApplication::translate("SimulationWindowClass", "\346\227\240\344\272\272\346\234\272\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        label_15->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213x\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("SimulationWindowClass", "X0\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        kmiuLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\200\276\346\226\234\350\247\222\346\216\247\345\210\266\347\263\273\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_17->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\351\253\230\345\272\246(m)", nullptr));
#endif // QT_NO_TOOLTIP
        label_17->setText(QApplication::translate("SimulationWindowClass", "Z0\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        phi0LineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\350\210\252\345\220\221\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        kphiLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\350\210\252\345\220\221\350\247\222\346\216\247\345\210\266\347\263\273\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("SimulationWindowClass", "\345\200\276\346\226\234\350\247\222\346\216\247\345\210\266\347\263\273\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("SimulationWindowClass", "K\316\274\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        x0LineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213x\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\351\200\237\345\272\246(m/s)", nullptr));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("SimulationWindowClass", "\346\234\272\345\236\213\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        label_18->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\345\200\276\346\226\234\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
        label_18->setText(QApplication::translate("SimulationWindowClass", "\316\2740\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        v0LineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\351\200\237\345\272\246(m/s)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_21->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\350\210\252\345\220\221\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
        label_21->setText(QApplication::translate("SimulationWindowClass", "\317\2060\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("SimulationWindowClass", "\351\200\237\345\272\246\346\216\247\345\210\266\347\263\273\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("SimulationWindowClass", "Kv\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("SimulationWindowClass", "\350\210\252\345\220\221\350\247\222\346\216\247\345\210\266\347\263\273\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("SimulationWindowClass", "K\317\206\357\274\232", nullptr));
        uavTypeComboBox->setItemText(0, QApplication::translate("SimulationWindowClass", "A", nullptr));
        uavTypeComboBox->setItemText(1, QApplication::translate("SimulationWindowClass", "B", nullptr));

#ifndef QT_NO_TOOLTIP
        kvLineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\351\200\237\345\272\246\346\216\247\345\210\266\347\263\273\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        z0LineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\351\253\230\345\272\246(m)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_16->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213y\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
        label_16->setText(QApplication::translate("SimulationWindowClass", "Y0\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        miu0LineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\345\200\276\346\226\234\350\247\222(rad)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213\351\200\237\345\272\246(m/s)", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("SimulationWindowClass", "V0\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        y0LineEdit->setToolTip(QApplication::translate("SimulationWindowClass", "\345\210\235\345\247\213y\345\235\220\346\240\207(m)", nullptr));
#endif // QT_NO_TOOLTIP
        onlineCheckBox->setText(QApplication::translate("SimulationWindowClass", "\345\234\250\347\272\277\346\250\241\345\274\217", nullptr));
        autoCheckBox->setText(QApplication::translate("SimulationWindowClass", "\350\207\252\344\270\273\346\216\247\345\210\266", nullptr));
        modifyUavPushButton->setText(QApplication::translate("SimulationWindowClass", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimulationWindowClass: public Ui_SimulationWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONWINDOW_H
