/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *videoLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QPushButton *controlX_NegButton;
    QPushButton *controlY_PosButton;
    QPushButton *controlZ_NegButton;
    QPushButton *controlY_NegButton;
    QPushButton *controlC_NegButton;
    QPushButton *controlC_PosButton;
    QPushButton *controlStopButton;
    QPushButton *pumpOnButton;
    QPushButton *sewingFootOnButton;
    QPushButton *pumpOffButton;
    QPushButton *sewingStartButton;
    QPushButton *swicthDeviceButton;
    QPushButton *controlZ_PosButton;
    QPushButton *controlX_PosButton;
    QPushButton *setZeroPositionButton;
    QPushButton *resetPositionButton;
    QPushButton *setC_ZeroPositionButton;
    QLabel *currentDeviceLabel;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLabel *c1Label;
    QLabel *label_5;
    QLabel *z1Label;
    QLabel *y1Label;
    QLabel *x1Label;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_12;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QLabel *x2Label;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *z2Label;
    QLabel *y2Label;
    QLabel *c2Label;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *clothXLabel;
    QLabel *clothYLabel;
    QCheckBox *showContoursCheckBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QPushButton *loadProgramButton;
    QPushButton *stopButton;
    QLabel *label_19;
    QComboBox *controlMethodCombBox;
    QPushButton *videoOpenButton;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *commandLineEdit;
    QPushButton *sendCommandButton;
    QPushButton *setSerialButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1106, 664);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainWindow/Resources/image/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        videoLabel = new QLabel(centralWidget);
        videoLabel->setObjectName(QStringLiteral("videoLabel"));
        videoLabel->setAlignment(Qt::AlignCenter);
        videoLabel->setWordWrap(false);

        horizontalLayout->addWidget(videoLabel);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        controlX_NegButton = new QPushButton(groupBox);
        controlX_NegButton->setObjectName(QStringLiteral("controlX_NegButton"));
        controlX_NegButton->setFocusPolicy(Qt::ClickFocus);
        controlX_NegButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlX_NegButton, 3, 0, 1, 1);

        controlY_PosButton = new QPushButton(groupBox);
        controlY_PosButton->setObjectName(QStringLiteral("controlY_PosButton"));
        controlY_PosButton->setFocusPolicy(Qt::ClickFocus);
        controlY_PosButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlY_PosButton, 0, 1, 1, 1);

        controlZ_NegButton = new QPushButton(groupBox);
        controlZ_NegButton->setObjectName(QStringLiteral("controlZ_NegButton"));
        controlZ_NegButton->setFocusPolicy(Qt::ClickFocus);
        controlZ_NegButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlZ_NegButton, 4, 2, 1, 1);

        controlY_NegButton = new QPushButton(groupBox);
        controlY_NegButton->setObjectName(QStringLiteral("controlY_NegButton"));
        controlY_NegButton->setFocusPolicy(Qt::ClickFocus);
        controlY_NegButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlY_NegButton, 4, 1, 1, 1);

        controlC_NegButton = new QPushButton(groupBox);
        controlC_NegButton->setObjectName(QStringLiteral("controlC_NegButton"));
        controlC_NegButton->setFocusPolicy(Qt::ClickFocus);
        controlC_NegButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlC_NegButton, 4, 0, 1, 1);

        controlC_PosButton = new QPushButton(groupBox);
        controlC_PosButton->setObjectName(QStringLiteral("controlC_PosButton"));
        controlC_PosButton->setFocusPolicy(Qt::ClickFocus);
        controlC_PosButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlC_PosButton, 0, 0, 1, 1);

        controlStopButton = new QPushButton(groupBox);
        controlStopButton->setObjectName(QStringLiteral("controlStopButton"));
        controlStopButton->setFocusPolicy(Qt::ClickFocus);
        controlStopButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlStopButton, 3, 1, 1, 1);

        pumpOnButton = new QPushButton(groupBox);
        pumpOnButton->setObjectName(QStringLiteral("pumpOnButton"));
        pumpOnButton->setFocusPolicy(Qt::ClickFocus);
        pumpOnButton->setAutoRepeat(false);

        gridLayout_5->addWidget(pumpOnButton, 4, 3, 1, 1);

        sewingFootOnButton = new QPushButton(groupBox);
        sewingFootOnButton->setObjectName(QStringLiteral("sewingFootOnButton"));
        sewingFootOnButton->setFocusPolicy(Qt::ClickFocus);

        gridLayout_5->addWidget(sewingFootOnButton, 0, 3, 1, 1);

        pumpOffButton = new QPushButton(groupBox);
        pumpOffButton->setObjectName(QStringLiteral("pumpOffButton"));
        pumpOffButton->setFocusPolicy(Qt::ClickFocus);
        pumpOffButton->setAutoRepeat(false);

        gridLayout_5->addWidget(pumpOffButton, 5, 3, 1, 1);

        sewingStartButton = new QPushButton(groupBox);
        sewingStartButton->setObjectName(QStringLiteral("sewingStartButton"));
        sewingStartButton->setFocusPolicy(Qt::ClickFocus);
        sewingStartButton->setAutoRepeat(false);

        gridLayout_5->addWidget(sewingStartButton, 3, 3, 1, 1);

        swicthDeviceButton = new QPushButton(groupBox);
        swicthDeviceButton->setObjectName(QStringLiteral("swicthDeviceButton"));
        swicthDeviceButton->setFocusPolicy(Qt::ClickFocus);
        swicthDeviceButton->setAutoRepeat(false);

        gridLayout_5->addWidget(swicthDeviceButton, 5, 0, 1, 2);

        controlZ_PosButton = new QPushButton(groupBox);
        controlZ_PosButton->setObjectName(QStringLiteral("controlZ_PosButton"));
        controlZ_PosButton->setFocusPolicy(Qt::ClickFocus);
        controlZ_PosButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlZ_PosButton, 0, 2, 1, 1);

        controlX_PosButton = new QPushButton(groupBox);
        controlX_PosButton->setObjectName(QStringLiteral("controlX_PosButton"));
        controlX_PosButton->setFocusPolicy(Qt::ClickFocus);
        controlX_PosButton->setAutoRepeat(true);

        gridLayout_5->addWidget(controlX_PosButton, 3, 2, 1, 1);

        setZeroPositionButton = new QPushButton(groupBox);
        setZeroPositionButton->setObjectName(QStringLiteral("setZeroPositionButton"));

        gridLayout_5->addWidget(setZeroPositionButton, 6, 0, 1, 2);

        resetPositionButton = new QPushButton(groupBox);
        resetPositionButton->setObjectName(QStringLiteral("resetPositionButton"));

        gridLayout_5->addWidget(resetPositionButton, 6, 3, 1, 1);

        setC_ZeroPositionButton = new QPushButton(groupBox);
        setC_ZeroPositionButton->setObjectName(QStringLiteral("setC_ZeroPositionButton"));

        gridLayout_5->addWidget(setC_ZeroPositionButton, 6, 2, 1, 1);

        currentDeviceLabel = new QLabel(groupBox);
        currentDeviceLabel->setObjectName(QStringLiteral("currentDeviceLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentDeviceLabel->sizePolicy().hasHeightForWidth());
        currentDeviceLabel->setSizePolicy(sizePolicy);
        currentDeviceLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(currentDeviceLabel, 5, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_7, 3, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        c1Label = new QLabel(groupBox_2);
        c1Label->setObjectName(QStringLiteral("c1Label"));

        gridLayout_3->addWidget(c1Label, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        z1Label = new QLabel(groupBox_2);
        z1Label->setObjectName(QStringLiteral("z1Label"));

        gridLayout_3->addWidget(z1Label, 2, 1, 1, 1);

        y1Label = new QLabel(groupBox_2);
        y1Label->setObjectName(QStringLiteral("y1Label"));

        gridLayout_3->addWidget(y1Label, 1, 1, 1, 1);

        x1Label = new QLabel(groupBox_2);
        x1Label->setObjectName(QStringLiteral("x1Label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(x1Label->sizePolicy().hasHeightForWidth());
        x1Label->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(x1Label, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label_4, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 2, 2, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 1, 2, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 3, 2, 1, 1);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        x2Label = new QLabel(groupBox_3);
        x2Label->setObjectName(QStringLiteral("x2Label"));
        sizePolicy2.setHeightForWidth(x2Label->sizePolicy().hasHeightForWidth());
        x2Label->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(x2Label, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 2, 0, 1, 1);

        z2Label = new QLabel(groupBox_3);
        z2Label->setObjectName(QStringLiteral("z2Label"));

        gridLayout_4->addWidget(z2Label, 2, 1, 1, 1);

        y2Label = new QLabel(groupBox_3);
        y2Label->setObjectName(QStringLiteral("y2Label"));

        gridLayout_4->addWidget(y2Label, 1, 1, 1, 1);

        c2Label = new QLabel(groupBox_3);
        c2Label->setObjectName(QStringLiteral("c2Label"));

        gridLayout_4->addWidget(c2Label, 3, 1, 1, 1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 3, 0, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label_14, 0, 2, 1, 1);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 1, 2, 1, 1);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_4->addWidget(label_17, 2, 2, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 3, 2, 1, 1);


        horizontalLayout_2->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        clothXLabel = new QLabel(groupBox_5);
        clothXLabel->setObjectName(QStringLiteral("clothXLabel"));
        sizePolicy3.setHeightForWidth(clothXLabel->sizePolicy().hasHeightForWidth());
        clothXLabel->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(clothXLabel, 0, 2, 1, 1);

        clothYLabel = new QLabel(groupBox_5);
        clothYLabel->setObjectName(QStringLiteral("clothYLabel"));

        gridLayout_6->addWidget(clothYLabel, 1, 2, 1, 1);

        showContoursCheckBox = new QCheckBox(groupBox_5);
        showContoursCheckBox->setObjectName(QStringLiteral("showContoursCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(showContoursCheckBox->sizePolicy().hasHeightForWidth());
        showContoursCheckBox->setSizePolicy(sizePolicy4);
        showContoursCheckBox->setChecked(true);

        gridLayout_6->addWidget(showContoursCheckBox, 2, 0, 1, 3);


        horizontalLayout_2->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        loadProgramButton = new QPushButton(groupBox_4);
        loadProgramButton->setObjectName(QStringLiteral("loadProgramButton"));
        sizePolicy3.setHeightForWidth(loadProgramButton->sizePolicy().hasHeightForWidth());
        loadProgramButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(loadProgramButton, 0, 1, 1, 1);

        stopButton = new QPushButton(groupBox_4);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(stopButton, 0, 2, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 1, 1, 1, 1);

        controlMethodCombBox = new QComboBox(groupBox_4);
        controlMethodCombBox->addItem(QString());
        controlMethodCombBox->addItem(QString());
        controlMethodCombBox->addItem(QString());
        controlMethodCombBox->setObjectName(QStringLiteral("controlMethodCombBox"));
        sizePolicy.setHeightForWidth(controlMethodCombBox->sizePolicy().hasHeightForWidth());
        controlMethodCombBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(controlMethodCombBox, 1, 2, 1, 1);

        videoOpenButton = new QPushButton(groupBox_4);
        videoOpenButton->setObjectName(QStringLiteral("videoOpenButton"));

        gridLayout_2->addWidget(videoOpenButton, 2, 1, 1, 2);


        horizontalLayout_2->addWidget(groupBox_4);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        commandLineEdit = new QLineEdit(centralWidget);
        commandLineEdit->setObjectName(QStringLiteral("commandLineEdit"));
        sizePolicy5.setHeightForWidth(commandLineEdit->sizePolicy().hasHeightForWidth());
        commandLineEdit->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(commandLineEdit);

        sendCommandButton = new QPushButton(centralWidget);
        sendCommandButton->setObjectName(QStringLiteral("sendCommandButton"));

        horizontalLayout_3->addWidget(sendCommandButton);

        setSerialButton = new QPushButton(centralWidget);
        setSerialButton->setObjectName(QStringLiteral("setSerialButton"));

        horizontalLayout_3->addWidget(setSerialButton);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1106, 23));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);
        QWidget::setTabOrder(loadProgramButton, stopButton);
        QWidget::setTabOrder(stopButton, commandLineEdit);
        QWidget::setTabOrder(commandLineEdit, sendCommandButton);
        QWidget::setTabOrder(sendCommandButton, setSerialButton);

        retranslateUi(MainWindowClass);
        QObject::connect(videoOpenButton, SIGNAL(clicked()), MainWindowClass, SLOT(enableVideo()));
        QObject::connect(controlC_PosButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlC_PosButton()));
        QObject::connect(controlY_PosButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlY_PosButton()));
        QObject::connect(controlZ_PosButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlZ_PosButton()));
        QObject::connect(controlX_NegButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlX_NegButton()));
        QObject::connect(controlStopButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlStopButton()));
        QObject::connect(controlX_PosButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlX_PosButton()));
        QObject::connect(controlC_NegButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlC_NegButton()));
        QObject::connect(controlY_NegButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlY_NegButton()));
        QObject::connect(controlZ_NegButton, SIGNAL(clicked()), MainWindowClass, SLOT(onControlZ_NegButton()));
        QObject::connect(pumpOnButton, SIGNAL(clicked()), MainWindowClass, SLOT(onPumpOnButton()));
        QObject::connect(swicthDeviceButton, SIGNAL(clicked()), MainWindowClass, SLOT(onSwicthDeviceButton()));
        QObject::connect(pumpOffButton, SIGNAL(clicked()), MainWindowClass, SLOT(onPumpOffButton()));
        QObject::connect(showContoursCheckBox, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(onShowContoursCheckBox(int)));
        QObject::connect(setZeroPositionButton, SIGNAL(clicked()), MainWindowClass, SLOT(onSetZeroPositionButton()));
        QObject::connect(setC_ZeroPositionButton, SIGNAL(clicked()), MainWindowClass, SLOT(onSetC_ZeroPositionButton()));
        QObject::connect(resetPositionButton, SIGNAL(clicked()), MainWindowClass, SLOT(onResetPositionButton()));
        QObject::connect(sewingFootOnButton, SIGNAL(clicked()), MainWindowClass, SLOT(onSewingFootOnButton()));
        QObject::connect(sewingStartButton, SIGNAL(clicked()), MainWindowClass, SLOT(onSewingStartButton()));
        QObject::connect(stopButton, SIGNAL(clicked()), MainWindowClass, SLOT(stop()));
        QObject::connect(loadProgramButton, SIGNAL(clicked()), MainWindowClass, SLOT(loadProgram()));
        QObject::connect(sendCommandButton, SIGNAL(clicked()), MainWindowClass, SLOT(onSendCommand()));
        QObject::connect(controlMethodCombBox, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(changeControlMethod(int)));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "\345\217\214\346\273\221\345\217\260\344\270\212\346\226\231\347\263\273\347\273\237\346\216\247\345\210\266\350\275\257\344\273\266", nullptr));
        videoLabel->setText(QApplication::translate("MainWindowClass", "VIDEO", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindowClass", "\346\216\247\345\210\266", nullptr));
        controlX_NegButton->setText(QApplication::translate("MainWindowClass", "X-\n"
"(4)", nullptr));
#ifndef QT_NO_SHORTCUT
        controlX_NegButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        controlY_PosButton->setText(QApplication::translate("MainWindowClass", "Y+\n"
"(8)", nullptr));
        controlZ_NegButton->setText(QApplication::translate("MainWindowClass", "Z-\n"
"(3)", nullptr));
        controlY_NegButton->setText(QApplication::translate("MainWindowClass", "Y-\n"
"(2)", nullptr));
        controlC_NegButton->setText(QApplication::translate("MainWindowClass", "C-\n"
"(1)", nullptr));
        controlC_PosButton->setText(QApplication::translate("MainWindowClass", "C+\n"
"(7)", nullptr));
#ifndef QT_NO_SHORTCUT
        controlC_PosButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        controlStopButton->setText(QApplication::translate("MainWindowClass", "STOP\n"
"(5)", nullptr));
#ifndef QT_NO_SHORTCUT
        controlStopButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        pumpOnButton->setText(QApplication::translate("MainWindowClass", "\351\253\230\345\216\213\345\274\200\n"
"(+)", nullptr));
        sewingFootOnButton->setText(QApplication::translate("MainWindowClass", "\345\216\213\350\204\232\345\274\200\n"
"(*)", nullptr));
#ifndef QT_NO_SHORTCUT
        sewingFootOnButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        pumpOffButton->setText(QApplication::translate("MainWindowClass", "\351\253\230\345\216\213\345\205\263\n"
"(Enter)", nullptr));
        sewingStartButton->setText(QApplication::translate("MainWindowClass", "\347\274\235\347\272\253\345\274\200\n"
"(-)", nullptr));
#ifndef QT_NO_SHORTCUT
        sewingStartButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        swicthDeviceButton->setText(QApplication::translate("MainWindowClass", "\345\210\207\346\215\242\n"
"(0)", nullptr));
        controlZ_PosButton->setText(QApplication::translate("MainWindowClass", "Z+\n"
"(9)", nullptr));
        controlX_PosButton->setText(QApplication::translate("MainWindowClass", "X+\n"
"(6)", nullptr));
#ifndef QT_NO_SHORTCUT
        controlX_PosButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        setZeroPositionButton->setText(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256\351\233\266\347\202\271", nullptr));
        resetPositionButton->setText(QApplication::translate("MainWindowClass", "\345\275\222\351\233\266", nullptr));
        setC_ZeroPositionButton->setText(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256C\351\233\266\347\202\271", nullptr));
        currentDeviceLabel->setText(QApplication::translate("MainWindowClass", "\346\273\221\345\217\2601", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindowClass", "\346\273\221\345\217\2601", nullptr));
        label_7->setText(QApplication::translate("MainWindowClass", "C\357\274\232", nullptr));
        label->setText(QApplication::translate("MainWindowClass", "X\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindowClass", "Y\357\274\232", nullptr));
        c1Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        label_5->setText(QApplication::translate("MainWindowClass", "Z\357\274\232", nullptr));
        z1Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        y1Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        x1Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        label_4->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        label_10->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        label_8->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        label_12->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindowClass", "\346\273\221\345\217\2602", nullptr));
        label_9->setText(QApplication::translate("MainWindowClass", "X\357\274\232", nullptr));
        x2Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        label_11->setText(QApplication::translate("MainWindowClass", "Y\357\274\232", nullptr));
        label_13->setText(QApplication::translate("MainWindowClass", "Z\357\274\232", nullptr));
        z2Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        y2Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        c2Label->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        label_15->setText(QApplication::translate("MainWindowClass", "C\357\274\232", nullptr));
        label_14->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        label_16->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        label_17->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        label_18->setText(QApplication::translate("MainWindowClass", "mm", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindowClass", "\345\270\203\346\226\231\344\277\241\346\201\257", nullptr));
        label_6->setText(QApplication::translate("MainWindowClass", "Y\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindowClass", "X\357\274\232", nullptr));
        clothXLabel->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        clothYLabel->setText(QApplication::translate("MainWindowClass", "0.0", nullptr));
        showContoursCheckBox->setText(QApplication::translate("MainWindowClass", "\346\230\276\347\244\272\350\275\256\345\273\223", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindowClass", "\345\221\275\344\273\244", nullptr));
        loadProgramButton->setText(QApplication::translate("MainWindowClass", "\350\275\275\345\205\245\347\250\213\345\272\217", nullptr));
        stopButton->setText(QApplication::translate("MainWindowClass", "\345\201\234\346\255\242", nullptr));
        label_19->setText(QApplication::translate("MainWindowClass", "\346\216\247\345\210\266\346\226\271\345\274\217\357\274\232", nullptr));
        controlMethodCombBox->setItemText(0, QApplication::translate("MainWindowClass", "\346\214\211\351\222\256", nullptr));
        controlMethodCombBox->setItemText(1, QApplication::translate("MainWindowClass", "\346\226\207\344\273\266", nullptr));
        controlMethodCombBox->setItemText(2, QApplication::translate("MainWindowClass", "\345\221\275\344\273\244", nullptr));

        videoOpenButton->setText(QApplication::translate("MainWindowClass", "\350\247\206\351\242\221\345\274\200", nullptr));
        sendCommandButton->setText(QApplication::translate("MainWindowClass", "\345\217\221\351\200\201\345\221\275\344\273\244", nullptr));
        setSerialButton->setText(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256\344\270\262\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
