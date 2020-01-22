/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *bannerLabel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *imgProcSettingPushButton;
    QPushButton *startImagePushButton;
    QPushButton *robotSettingPushButton;
    QPushButton *imgGetSettingPushButton;
    QPushButton *checkStandardPushButton;
    QPushButton *plcSettingPushButton;
    QPushButton *saveImgPushButton;
    QPushButton *saveConfigPushButton;
    QPushButton *startPushButton;
    QPushButton *stopPushButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_22;
    QLabel *foldLabel;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *centerOffsetLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_20;
    QLabel *angleLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_19;
    QLabel *sizeLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_23;
    QLabel *areaLabel;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *angleOffsetLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *centerPositionLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_21;
    QLabel *levelLabel;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_24;
    QLabel *timeCostLabel;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_25;
    QLabel *boundingLabel;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *robotLogTextEdit;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QPlainTextEdit *plcLogTextEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGraphicsView *srcImgView;
    QGraphicsView *dstImgView;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(1086, 1015);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/NapkinFolder/Resources/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bannerLabel = new QLabel(centralWidget);
        bannerLabel->setObjectName(QString::fromUtf8("bannerLabel"));
        bannerLabel->setPixmap(QPixmap(QString::fromUtf8(":/NapkinFolder/Resources/banner400.png")));

        verticalLayout->addWidget(bannerLabel);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        imgProcSettingPushButton = new QPushButton(groupBox_2);
        imgProcSettingPushButton->setObjectName(QString::fromUtf8("imgProcSettingPushButton"));

        gridLayout_3->addWidget(imgProcSettingPushButton, 0, 1, 1, 1);

        startImagePushButton = new QPushButton(groupBox_2);
        startImagePushButton->setObjectName(QString::fromUtf8("startImagePushButton"));

        gridLayout_3->addWidget(startImagePushButton, 4, 0, 1, 1);

        robotSettingPushButton = new QPushButton(groupBox_2);
        robotSettingPushButton->setObjectName(QString::fromUtf8("robotSettingPushButton"));

        gridLayout_3->addWidget(robotSettingPushButton, 1, 0, 1, 1);

        imgGetSettingPushButton = new QPushButton(groupBox_2);
        imgGetSettingPushButton->setObjectName(QString::fromUtf8("imgGetSettingPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imgGetSettingPushButton->sizePolicy().hasHeightForWidth());
        imgGetSettingPushButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(imgGetSettingPushButton, 0, 0, 1, 1);

        checkStandardPushButton = new QPushButton(groupBox_2);
        checkStandardPushButton->setObjectName(QString::fromUtf8("checkStandardPushButton"));

        gridLayout_3->addWidget(checkStandardPushButton, 4, 1, 1, 1);

        plcSettingPushButton = new QPushButton(groupBox_2);
        plcSettingPushButton->setObjectName(QString::fromUtf8("plcSettingPushButton"));

        gridLayout_3->addWidget(plcSettingPushButton, 1, 1, 1, 1);

        saveImgPushButton = new QPushButton(groupBox_2);
        saveImgPushButton->setObjectName(QString::fromUtf8("saveImgPushButton"));

        gridLayout_3->addWidget(saveImgPushButton, 2, 0, 1, 1);

        saveConfigPushButton = new QPushButton(groupBox_2);
        saveConfigPushButton->setObjectName(QString::fromUtf8("saveConfigPushButton"));

        gridLayout_3->addWidget(saveConfigPushButton, 2, 1, 1, 1);

        startPushButton = new QPushButton(groupBox_2);
        startPushButton->setObjectName(QString::fromUtf8("startPushButton"));

        gridLayout_3->addWidget(startPushButton, 3, 0, 1, 1);

        stopPushButton = new QPushButton(groupBox_2);
        stopPushButton->setObjectName(QString::fromUtf8("stopPushButton"));

        gridLayout_3->addWidget(stopPushButton, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_6->addWidget(label_22);

        foldLabel = new QLabel(groupBox_3);
        foldLabel->setObjectName(QString::fromUtf8("foldLabel"));

        horizontalLayout_6->addWidget(foldLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        gridLayout_5->addLayout(horizontalLayout_6, 7, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        centerOffsetLabel = new QLabel(groupBox_3);
        centerOffsetLabel->setObjectName(QString::fromUtf8("centerOffsetLabel"));

        horizontalLayout_2->addWidget(centerOffsetLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_3->addWidget(label_20);

        angleLabel = new QLabel(groupBox_3);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));

        horizontalLayout_3->addWidget(angleLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_5->addWidget(label_19);

        sizeLabel = new QLabel(groupBox_3);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        horizontalLayout_5->addWidget(sizeLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout_5->addLayout(horizontalLayout_5, 5, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_8->addWidget(label_23);

        areaLabel = new QLabel(groupBox_3);
        areaLabel->setObjectName(QString::fromUtf8("areaLabel"));

        horizontalLayout_8->addWidget(areaLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        gridLayout_5->addLayout(horizontalLayout_8, 6, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        angleOffsetLabel = new QLabel(groupBox_3);
        angleOffsetLabel->setObjectName(QString::fromUtf8("angleOffsetLabel"));

        horizontalLayout_4->addWidget(angleOffsetLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout_5->addLayout(horizontalLayout_4, 4, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        centerPositionLabel = new QLabel(groupBox_3);
        centerPositionLabel->setObjectName(QString::fromUtf8("centerPositionLabel"));

        horizontalLayout->addWidget(centerPositionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_5->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_7->addWidget(label_21);

        levelLabel = new QLabel(groupBox_3);
        levelLabel->setObjectName(QString::fromUtf8("levelLabel"));

        horizontalLayout_7->addWidget(levelLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        gridLayout_5->addLayout(horizontalLayout_7, 8, 0, 1, 2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_9->addWidget(label_24);

        timeCostLabel = new QLabel(groupBox_3);
        timeCostLabel->setObjectName(QString::fromUtf8("timeCostLabel"));

        horizontalLayout_9->addWidget(timeCostLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        gridLayout_5->addLayout(horizontalLayout_9, 10, 0, 1, 2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_10->addWidget(label_25);

        boundingLabel = new QLabel(groupBox_3);
        boundingLabel->setObjectName(QString::fromUtf8("boundingLabel"));

        horizontalLayout_10->addWidget(boundingLabel);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        gridLayout_5->addLayout(horizontalLayout_10, 9, 0, 1, 2);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        robotLogTextEdit = new QPlainTextEdit(groupBox_4);
        robotLogTextEdit->setObjectName(QString::fromUtf8("robotLogTextEdit"));
        sizePolicy.setHeightForWidth(robotLogTextEdit->sizePolicy().hasHeightForWidth());
        robotLogTextEdit->setSizePolicy(sizePolicy);
        robotLogTextEdit->setUndoRedoEnabled(false);
        robotLogTextEdit->setReadOnly(true);

        gridLayout_6->addWidget(robotLogTextEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        plcLogTextEdit = new QPlainTextEdit(groupBox_5);
        plcLogTextEdit->setObjectName(QString::fromUtf8("plcLogTextEdit"));
        sizePolicy.setHeightForWidth(plcLogTextEdit->sizePolicy().hasHeightForWidth());
        plcLogTextEdit->setSizePolicy(sizePolicy);
        plcLogTextEdit->setUndoRedoEnabled(false);
        plcLogTextEdit->setReadOnly(true);

        gridLayout_7->addWidget(plcLogTextEdit, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        srcImgView = new QGraphicsView(groupBox);
        srcImgView->setObjectName(QString::fromUtf8("srcImgView"));

        gridLayout_2->addWidget(srcImgView, 0, 1, 1, 1);

        dstImgView = new QGraphicsView(groupBox);
        dstImgView->setObjectName(QString::fromUtf8("dstImgView"));

        gridLayout_2->addWidget(dstImgView, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 6, 1);

        MainWindowClass->setCentralWidget(centralWidget);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "NapkinFolder", nullptr));
        bannerLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindowClass", "\346\243\200\346\265\213\346\216\247\345\210\266", nullptr));
        imgProcSettingPushButton->setText(QCoreApplication::translate("MainWindowClass", "\346\243\200\346\265\213\350\256\276\347\275\256", nullptr));
        startImagePushButton->setText(QCoreApplication::translate("MainWindowClass", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
        robotSettingPushButton->setText(QCoreApplication::translate("MainWindowClass", "\346\234\272\345\231\250\344\272\272\350\256\276\347\275\256", nullptr));
        imgGetSettingPushButton->setText(QCoreApplication::translate("MainWindowClass", "\351\207\207\351\233\206\350\256\276\347\275\256", nullptr));
        checkStandardPushButton->setText(QCoreApplication::translate("MainWindowClass", "\346\243\200\346\265\213\346\240\207\345\207\206\347\212\266\346\200\201", nullptr));
        plcSettingPushButton->setText(QCoreApplication::translate("MainWindowClass", "PLC\350\256\276\347\275\256", nullptr));
        saveImgPushButton->setText(QCoreApplication::translate("MainWindowClass", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        saveConfigPushButton->setText(QCoreApplication::translate("MainWindowClass", "\344\277\235\345\255\230\351\205\215\347\275\256", nullptr));
        startPushButton->setText(QCoreApplication::translate("MainWindowClass", "\345\274\200\345\247\213\350\277\220\350\241\214", nullptr));
        stopPushButton->setText(QCoreApplication::translate("MainWindowClass", "\345\201\234\346\255\242\350\277\220\350\241\214", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindowClass", "\345\217\202\346\225\260\347\252\227\345\217\243", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindowClass", "\346\212\230\345\217\240\347\212\266\346\200\201\357\274\232", nullptr));
        foldLabel->setText(QCoreApplication::translate("MainWindowClass", "No", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowClass", "\345\201\217\347\247\273\344\275\215\347\275\256\357\274\232", nullptr));
        centerOffsetLabel->setText(QCoreApplication::translate("MainWindowClass", "(0,0)mm", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindowClass", "\346\227\213\350\275\254\350\247\222\345\272\246\357\274\232", nullptr));
        angleLabel->setText(QCoreApplication::translate("MainWindowClass", "0\302\260", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindowClass", "\345\270\203\346\226\231\351\225\277\345\256\275\357\274\232", nullptr));
        sizeLabel->setText(QCoreApplication::translate("MainWindowClass", "0\303\2270mm", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindowClass", "\345\270\203\346\226\231\351\235\242\347\247\257\357\274\232", nullptr));
        areaLabel->setText(QCoreApplication::translate("MainWindowClass", "0mm\302\262", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowClass", "\345\201\217\347\247\273\350\247\222\345\272\246\357\274\232", nullptr));
        angleOffsetLabel->setText(QCoreApplication::translate("MainWindowClass", "0\302\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindowClass", "\344\270\255\345\277\203\344\275\215\347\275\256\357\274\232", nullptr));
        centerPositionLabel->setText(QCoreApplication::translate("MainWindowClass", "(0,0)mm", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindowClass", "\345\270\203\346\226\231\347\255\211\347\272\247\357\274\232", nullptr));
        levelLabel->setText(QCoreApplication::translate("MainWindowClass", "\346\234\252\347\237\245", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindowClass", "\346\227\266\351\227\264\346\266\210\350\200\227\357\274\232", nullptr));
        timeCostLabel->setText(QCoreApplication::translate("MainWindowClass", "0ms", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindowClass", "\346\230\257\345\220\246\345\207\272\347\225\214\357\274\232", nullptr));
        boundingLabel->setText(QCoreApplication::translate("MainWindowClass", "\346\234\252\347\237\245", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindowClass", "\346\234\272\345\231\250\344\272\272\351\200\232\350\256\257\346\227\245\345\277\227", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindowClass", "PLC\351\200\232\350\256\257\346\227\245\345\277\227", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindowClass", "\345\233\276\345\203\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
