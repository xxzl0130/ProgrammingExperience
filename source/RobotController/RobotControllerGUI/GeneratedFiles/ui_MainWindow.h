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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenModel;
    QAction *actionSaveImage;
    QAction *actionSaveVRML;
    QAction *actionOffline;
    QAction *actionOnline;
    QAction *actionRemoteSet;
    QAction *actionLoadConfig;
    QAction *actionSaveConfig;
    QAction *actionSetParameter;
    QAction *showAxis;
    QAction *showPosition;
    QAction *showOp;
    QAction *showIk;
    QAction *showPathPlanner;
    QAction *actionLoadKeyPoint;
    QAction *actionSaveKeyPoint;
    QAction *actionLoadPathPoint;
    QAction *actionSavePathPoint;
    QAction *actionSaveProgram;
    QAction *actionLoadProgram;
    QAction *actionTest;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *centralLayout;
    QVBoxLayout *viewerVerticalLayout;
    QDockWidget *positionDock;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_3;
    QTableView *positionTable;
    QTabWidget *mainTab;
    QWidget *frequentTab;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout;
    QGroupBox *onlineGroup;
    QGridLayout *gridLayout_10;
    QPushButton *readwriteButton;
    QPushButton *setOnlineButton;
    QPushButton *setRemoteButton;
    QGroupBox *IK_Group;
    QGridLayout *gridLayout_12;
    QLabel *label_8;
    QComboBox *ikSolverComboBox;
    QDoubleSpinBox *YdoubleSpinBox;
    QPushButton *startSolveButton;
    QLabel *solveResultLabel;
    QLabel *label_3;
    QDoubleSpinBox *XdoubleSpinBox;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *randomInitPositionButton;
    QDoubleSpinBox *ZdoubleSpinBox;
    QLabel *label_4;
    QGroupBox *operationalGroup;
    QVBoxLayout *verticalLayout_4;
    QTableView *operationalTable;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *realtimeRefreshCheckBox;
    QTabWidget *planTab;
    QWidget *plannerTab;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_13;
    QPushButton *animateButton;
    QPushButton *resetButton;
    QPushButton *startPlanButton;
    QComboBox *planMethodComboBox;
    QLabel *label_11;
    QDoubleSpinBox *plannerDeltaDoubleSpinBox;
    QLabel *label_9;
    QCheckBox *showCoordCheckBox;
    QTableWidget *keyPointTable;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addKeyPointButton;
    QPushButton *deleteKeyPointButton;
    QPushButton *clearKeyPointButton;
    QWidget *pathPointTab;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *pathTable;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *sendPathButton;
    QPushButton *drawPathButton;
    QProgressBar *sendPathProgressBar;
    QWidget *programTab;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *programNameLineEdit;
    QPushButton *saveProgramPushButton;
    QTreeWidget *commandTreeWidget;
    QHBoxLayout *horizontalLayout_18;
    QToolButton *itemUpButton;
    QToolButton *itemDownButton;
    QToolButton *itemDeleteButton;
    QToolButton *programRunButton;
    QToolButton *programPauseButton;
    QToolButton *programStopButton;
    QTabWidget *commandTabWidget;
    QWidget *commandTab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_29;
    QLabel *nameLabel;
    QPushButton *renameButton;
    QSpacerItem *horizontalSpacer_16;
    QStackedWidget *commandStack;
    QWidget *movePage;
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer_4;
    QLabel *moveHintLabel;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_10;
    QComboBox *moveTypeComboBox;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout;
    QLabel *label_21;
    QLabel *jointShareAccelUnitLabel;
    QLabel *label_22;
    QLineEdit *jointShareAccelLineEdit;
    QLabel *jointShareSpeedUnitLabel;
    QLineEdit *jointShareSpeedLineEdit;
    QCheckBox *setShareToolCheckBox;
    QComboBox *setShareToolComboBox;
    QWidget *pointPage;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_28;
    QComboBox *pointTypeComboBox;
    QSpacerItem *horizontalSpacer_15;
    QStackedWidget *pointTypeStackedWidget;
    QWidget *absolutePointPage;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_22;
    QTableWidget *pointPositionTable;
    QVBoxLayout *verticalLayout_10;
    QPushButton *move2PointButton;
    QPushButton *modifyPointButton;
    QWidget *relativePointPage;
    QGridLayout *gridLayout_15;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_25;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_16;
    QLabel *label_30;
    QLabel *label_28;
    QLabel *label_26;
    QLabel *pointDeltaY_Label;
    QLabel *pointPthchAngleLabel;
    QLabel *pointDeltaZ_Label;
    QLabel *label_27;
    QLabel *pointDeltaX_Label;
    QLabel *label_29;
    QLabel *pointDistanceLabel;
    QLabel *label_14;
    QLabel *pointYawAngleLabel;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_11;
    QPushButton *setStartPointButton;
    QPushButton *move2StartPointButton;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_12;
    QPushButton *setGoalPointButton;
    QPushButton *move2GoalPointButton;
    QWidget *variablePointPage;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_31;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_32;
    QComboBox *pointVarComboBox;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_23;
    QGridLayout *gridLayout_8;
    QRadioButton *noFilletButton;
    QRadioButton *filletButton;
    QDoubleSpinBox *filletRadiusDoubleSpinBox;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_14;
    QLabel *jointSpeedUnitLabel;
    QLabel *label_23;
    QLineEdit *jointSpeedLineEdit;
    QCheckBox *useShareSettingCheckBox;
    QLabel *label_12;
    QLineEdit *jointAccelLineEdit;
    QLabel *jointAccelUnitLabel;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *addPointPrevButton;
    QPushButton *addPointNextButton;
    QPushButton *deletePointButton;
    QWidget *waitPage;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *noWaitButton;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *waitTimeButton;
    QSpinBox *pauseTimeSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *waitDigitalButton;
    QComboBox *digitalInputComboBox;
    QComboBox *digitalInLevelComboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *waitAnalogButton;
    QComboBox *analogInputComboBox;
    QComboBox *analogCompareComboBox;
    QDoubleSpinBox *analogInLevelSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *waitFxButton;
    QLineEdit *waitFxLineEdit;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_8;
    QWidget *stopPage;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_37;
    QSpacerItem *verticalSpacer_13;
    QWidget *setPage;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *setDigitalOutputRadioButton;
    QComboBox *digitalOutputComboBox;
    QComboBox *digitalOutLevelComboBox;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *noSetRadioButton;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *setDigitalOutputFxRadioButton;
    QComboBox *digitalOutputFxComboBox;
    QLineEdit *digitalOutFxLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *setAnalogOutputRadioButton;
    QComboBox *analogOutputComboBox;
    QDoubleSpinBox *analogOutLevelSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *setAnalogOutputFxRadioButton;
    QComboBox *analogOutputFxComboBox;
    QLineEdit *setAnalogOutputFxLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *setVarRadioButton;
    QComboBox *varComboBox;
    QLineEdit *varFxlineEdit;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *setToolCheckBox;
    QComboBox *setToolComboBox;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *setLoadCheckBox;
    QDoubleSpinBox *loadDoubleSpinBox;
    QSpacerItem *horizontalSpacer_7;
    QWidget *popPage;
    QGridLayout *gridLayout_4;
    QRadioButton *popMsgButton;
    QSpacerItem *verticalSpacer_10;
    QCheckBox *stopWithPopCheckBox;
    QRadioButton *popErrorButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QRadioButton *popWarningButton;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *previewButton;
    QPlainTextEdit *popText;
    QWidget *blankPage;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_39;
    QHBoxLayout *horizontalLayout_27;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *jump2StructButton;
    QSpacerItem *verticalSpacer_15;
    QWidget *page;
    QVBoxLayout *verticalLayout_17;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_13;
    QPlainTextEdit *commentTextEdit;
    QSpacerItem *verticalSpacer_14;
    QWidget *structTab;
    QGridLayout *gridLayout_17;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_34;
    QSpacerItem *verticalSpacer_12;
    QTabWidget *insertCommandTabWidget;
    QWidget *baseCommandTab;
    QGridLayout *gridLayout_18;
    QPushButton *addPopCommandButton;
    QPushButton *addWaitCommandButton;
    QPushButton *addSetCommandButton;
    QPushButton *addMoveCommandButton;
    QPushButton *addPointCommandButton;
    QPushButton *addStopCommandButton;
    QPushButton *addCommentButton;
    QWidget *advancedCommandTab;
    QLabel *label_33;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_26;
    QRadioButton *insertCommandNextRadioButton;
    QRadioButton *insertCommandPrevRadioButton;
    QLabel *label_35;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_19;
    QPushButton *downCommandButton;
    QPushButton *copyCommandButton;
    QPushButton *upCommandButton;
    QPushButton *pasteCommandButton;
    QPushButton *cutCommandButton;
    QPushButton *deleteCommandButton;
    QWidget *moveTab;
    QGridLayout *gridLayout_22;
    QGroupBox *toolPositionBox;
    QGridLayout *gridLayout_21;
    QLineEdit *toolZ_PositionText;
    QLabel *label_18;
    QLabel *toolAngelLabel1;
    QLineEdit *toolX_PositionText;
    QLabel *toolAngelLabel2;
    QLineEdit *toolRX_PositionText;
    QLineEdit *toolRZ_PositionText;
    QLabel *toolRZ_UnitLabel;
    QLabel *toolRX_UnitLabel;
    QLabel *toolX_UnitLabel;
    QSpacerItem *horizontalSpacer_8;
    QLabel *toolY_UnitLabel;
    QLabel *label_24;
    QLabel *toolRY_UnitLabel;
    QLineEdit *toolY_PositionText;
    QLabel *label_36;
    QLabel *toolZ_UnitLabel;
    QLineEdit *toolRY_PositionText;
    QLabel *toolAngelLabel0;
    QLabel *toolAngelLabel3;
    QLineEdit *toolRW_PositionText;
    QLabel *toolRW_UnitLabel;
    QPushButton *changeToolPositionButton;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *toolPositionTypeComboBox;
    QGroupBox *jointMoveBox;
    QGridLayout *gridLayout_20;
    QSlider *joint4Slider;
    QLabel *joint4Label;
    QLabel *joint3Label;
    QLabel *joint5Label;
    QLineEdit *joint1ValueText;
    QSlider *joint0Slider;
    QLineEdit *joint2ValueText;
    QLineEdit *joint4ValueText;
    QLineEdit *joint3ValueText;
    QLineEdit *joint5ValueText;
    QLineEdit *joint0ValueText;
    QLabel *joint0Label;
    QSlider *joint5Slider;
    QSlider *joint2Slider;
    QSlider *joint3Slider;
    QSlider *joint1Slider;
    QLabel *joint2Label;
    QLabel *joint1Label;
    QLabel *joint0UnitLabel;
    QLabel *joint1UnitLabel;
    QLabel *joint2UnitLabel;
    QLabel *joint3UnitLabel;
    QLabel *joint4UnitLabel;
    QLabel *joint5UnitLabel;
    QPushButton *resetPositionButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSetting;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1081, 770);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        actionOpenModel = new QAction(MainWindow);
        actionOpenModel->setObjectName(QStringLiteral("actionOpenModel"));
        actionSaveImage = new QAction(MainWindow);
        actionSaveImage->setObjectName(QStringLiteral("actionSaveImage"));
        actionSaveImage->setEnabled(false);
        actionSaveVRML = new QAction(MainWindow);
        actionSaveVRML->setObjectName(QStringLiteral("actionSaveVRML"));
        actionSaveVRML->setEnabled(false);
        actionOffline = new QAction(MainWindow);
        actionOffline->setObjectName(QStringLiteral("actionOffline"));
        actionOffline->setCheckable(true);
        actionOffline->setEnabled(false);
        actionOnline = new QAction(MainWindow);
        actionOnline->setObjectName(QStringLiteral("actionOnline"));
        actionOnline->setCheckable(true);
        actionOnline->setEnabled(false);
        actionRemoteSet = new QAction(MainWindow);
        actionRemoteSet->setObjectName(QStringLiteral("actionRemoteSet"));
        actionRemoteSet->setEnabled(false);
        actionLoadConfig = new QAction(MainWindow);
        actionLoadConfig->setObjectName(QStringLiteral("actionLoadConfig"));
        actionSaveConfig = new QAction(MainWindow);
        actionSaveConfig->setObjectName(QStringLiteral("actionSaveConfig"));
        actionSaveConfig->setEnabled(false);
        actionSetParameter = new QAction(MainWindow);
        actionSetParameter->setObjectName(QStringLiteral("actionSetParameter"));
        actionSetParameter->setEnabled(false);
        showAxis = new QAction(MainWindow);
        showAxis->setObjectName(QStringLiteral("showAxis"));
        showAxis->setCheckable(true);
        showAxis->setEnabled(true);
        showPosition = new QAction(MainWindow);
        showPosition->setObjectName(QStringLiteral("showPosition"));
        showPosition->setCheckable(true);
        showOp = new QAction(MainWindow);
        showOp->setObjectName(QStringLiteral("showOp"));
        showOp->setCheckable(true);
        showOp->setEnabled(true);
        showIk = new QAction(MainWindow);
        showIk->setObjectName(QStringLiteral("showIk"));
        showIk->setCheckable(true);
        showPathPlanner = new QAction(MainWindow);
        showPathPlanner->setObjectName(QStringLiteral("showPathPlanner"));
        showPathPlanner->setCheckable(true);
        actionLoadKeyPoint = new QAction(MainWindow);
        actionLoadKeyPoint->setObjectName(QStringLiteral("actionLoadKeyPoint"));
        actionLoadKeyPoint->setEnabled(false);
        actionSaveKeyPoint = new QAction(MainWindow);
        actionSaveKeyPoint->setObjectName(QStringLiteral("actionSaveKeyPoint"));
        actionSaveKeyPoint->setEnabled(false);
        actionLoadPathPoint = new QAction(MainWindow);
        actionLoadPathPoint->setObjectName(QStringLiteral("actionLoadPathPoint"));
        actionLoadPathPoint->setEnabled(false);
        actionSavePathPoint = new QAction(MainWindow);
        actionSavePathPoint->setObjectName(QStringLiteral("actionSavePathPoint"));
        actionSavePathPoint->setEnabled(false);
        actionSaveProgram = new QAction(MainWindow);
        actionSaveProgram->setObjectName(QStringLiteral("actionSaveProgram"));
        actionSaveProgram->setEnabled(false);
        actionLoadProgram = new QAction(MainWindow);
        actionLoadProgram->setObjectName(QStringLiteral("actionLoadProgram"));
        actionLoadProgram->setEnabled(false);
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QStringLiteral("actionTest"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_17 = new QHBoxLayout(centralWidget);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        centralLayout = new QHBoxLayout();
        centralLayout->setSpacing(6);
        centralLayout->setObjectName(QStringLiteral("centralLayout"));
        viewerVerticalLayout = new QVBoxLayout();
        viewerVerticalLayout->setSpacing(6);
        viewerVerticalLayout->setObjectName(QStringLiteral("viewerVerticalLayout"));
        positionDock = new QDockWidget(centralWidget);
        positionDock->setObjectName(QStringLiteral("positionDock"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(positionDock->sizePolicy().hasHeightForWidth());
        positionDock->setSizePolicy(sizePolicy1);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_3 = new QGridLayout(dockWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        positionTable = new QTableView(dockWidgetContents);
        positionTable->setObjectName(QStringLiteral("positionTable"));
        positionTable->setEnabled(false);
        positionTable->setMinimumSize(QSize(0, 130));

        gridLayout_3->addWidget(positionTable, 0, 0, 1, 1);

        positionDock->setWidget(dockWidgetContents);

        viewerVerticalLayout->addWidget(positionDock);


        centralLayout->addLayout(viewerVerticalLayout);

        mainTab = new QTabWidget(centralWidget);
        mainTab->setObjectName(QStringLiteral("mainTab"));
        mainTab->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainTab->sizePolicy().hasHeightForWidth());
        mainTab->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(12);
        mainTab->setFont(font1);
        mainTab->setTabShape(QTabWidget::Rounded);
        mainTab->setTabsClosable(false);
        mainTab->setTabBarAutoHide(false);
        frequentTab = new QWidget();
        frequentTab->setObjectName(QStringLiteral("frequentTab"));
        gridLayout_9 = new QGridLayout(frequentTab);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        onlineGroup = new QGroupBox(frequentTab);
        onlineGroup->setObjectName(QStringLiteral("onlineGroup"));
        onlineGroup->setFont(font1);
        gridLayout_10 = new QGridLayout(onlineGroup);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        readwriteButton = new QPushButton(onlineGroup);
        readwriteButton->setObjectName(QStringLiteral("readwriteButton"));
        readwriteButton->setEnabled(false);

        gridLayout_10->addWidget(readwriteButton, 0, 2, 1, 1);

        setOnlineButton = new QPushButton(onlineGroup);
        setOnlineButton->setObjectName(QStringLiteral("setOnlineButton"));
        setOnlineButton->setEnabled(false);

        gridLayout_10->addWidget(setOnlineButton, 0, 1, 1, 1);

        setRemoteButton = new QPushButton(onlineGroup);
        setRemoteButton->setObjectName(QStringLiteral("setRemoteButton"));
        setRemoteButton->setEnabled(false);

        gridLayout_10->addWidget(setRemoteButton, 0, 0, 1, 1);


        verticalLayout->addWidget(onlineGroup);

        IK_Group = new QGroupBox(frequentTab);
        IK_Group->setObjectName(QStringLiteral("IK_Group"));
        IK_Group->setFont(font1);
        gridLayout_12 = new QGridLayout(IK_Group);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_8 = new QLabel(IK_Group);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_12->addWidget(label_8, 5, 0, 1, 1);

        ikSolverComboBox = new QComboBox(IK_Group);
        ikSolverComboBox->addItem(QString());
        ikSolverComboBox->addItem(QString());
        ikSolverComboBox->setObjectName(QStringLiteral("ikSolverComboBox"));

        gridLayout_12->addWidget(ikSolverComboBox, 0, 1, 1, 1);

        YdoubleSpinBox = new QDoubleSpinBox(IK_Group);
        YdoubleSpinBox->setObjectName(QStringLiteral("YdoubleSpinBox"));
        YdoubleSpinBox->setDecimals(6);
        YdoubleSpinBox->setMinimum(-100);
        YdoubleSpinBox->setMaximum(100);
        YdoubleSpinBox->setSingleStep(0.0001);

        gridLayout_12->addWidget(YdoubleSpinBox, 2, 1, 1, 1);

        startSolveButton = new QPushButton(IK_Group);
        startSolveButton->setObjectName(QStringLiteral("startSolveButton"));
        startSolveButton->setEnabled(false);

        gridLayout_12->addWidget(startSolveButton, 4, 1, 1, 1);

        solveResultLabel = new QLabel(IK_Group);
        solveResultLabel->setObjectName(QStringLiteral("solveResultLabel"));

        gridLayout_12->addWidget(solveResultLabel, 5, 1, 1, 1);

        label_3 = new QLabel(IK_Group);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_12->addWidget(label_3, 0, 0, 1, 1);

        XdoubleSpinBox = new QDoubleSpinBox(IK_Group);
        XdoubleSpinBox->setObjectName(QStringLiteral("XdoubleSpinBox"));
        XdoubleSpinBox->setDecimals(6);
        XdoubleSpinBox->setMinimum(-100);
        XdoubleSpinBox->setMaximum(100);
        XdoubleSpinBox->setSingleStep(0.0001);

        gridLayout_12->addWidget(XdoubleSpinBox, 1, 1, 1, 1);

        label_5 = new QLabel(IK_Group);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_12->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(IK_Group);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_12->addWidget(label_6, 3, 0, 1, 1);

        randomInitPositionButton = new QPushButton(IK_Group);
        randomInitPositionButton->setObjectName(QStringLiteral("randomInitPositionButton"));
        randomInitPositionButton->setEnabled(false);

        gridLayout_12->addWidget(randomInitPositionButton, 4, 0, 1, 1);

        ZdoubleSpinBox = new QDoubleSpinBox(IK_Group);
        ZdoubleSpinBox->setObjectName(QStringLiteral("ZdoubleSpinBox"));
        ZdoubleSpinBox->setDecimals(6);
        ZdoubleSpinBox->setMinimum(-100);
        ZdoubleSpinBox->setMaximum(100);
        ZdoubleSpinBox->setSingleStep(0.0001);

        gridLayout_12->addWidget(ZdoubleSpinBox, 3, 1, 1, 1);

        label_4 = new QLabel(IK_Group);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_12->addWidget(label_4, 1, 0, 1, 1);


        verticalLayout->addWidget(IK_Group);

        operationalGroup = new QGroupBox(frequentTab);
        operationalGroup->setObjectName(QStringLiteral("operationalGroup"));
        operationalGroup->setFont(font1);
        verticalLayout_4 = new QVBoxLayout(operationalGroup);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        operationalTable = new QTableView(operationalGroup);
        operationalTable->setObjectName(QStringLiteral("operationalTable"));
        operationalTable->setEnabled(false);

        verticalLayout_4->addWidget(operationalTable);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(operationalGroup);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        label_2 = new QLabel(operationalGroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        realtimeRefreshCheckBox = new QCheckBox(operationalGroup);
        realtimeRefreshCheckBox->setObjectName(QStringLiteral("realtimeRefreshCheckBox"));
        realtimeRefreshCheckBox->setChecked(false);

        verticalLayout_4->addWidget(realtimeRefreshCheckBox);


        verticalLayout->addWidget(operationalGroup);


        gridLayout_9->addLayout(verticalLayout, 1, 0, 1, 1);

        planTab = new QTabWidget(frequentTab);
        planTab->setObjectName(QStringLiteral("planTab"));
        planTab->setFont(font1);
        plannerTab = new QWidget();
        plannerTab->setObjectName(QStringLiteral("plannerTab"));
        verticalLayout_5 = new QVBoxLayout(plannerTab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        animateButton = new QPushButton(plannerTab);
        animateButton->setObjectName(QStringLiteral("animateButton"));
        animateButton->setEnabled(false);

        gridLayout_13->addWidget(animateButton, 0, 0, 1, 1);

        resetButton = new QPushButton(plannerTab);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setEnabled(false);
        resetButton->setFont(font1);

        gridLayout_13->addWidget(resetButton, 0, 1, 1, 1);

        startPlanButton = new QPushButton(plannerTab);
        startPlanButton->setObjectName(QStringLiteral("startPlanButton"));
        startPlanButton->setEnabled(false);

        gridLayout_13->addWidget(startPlanButton, 1, 0, 1, 1);

        planMethodComboBox = new QComboBox(plannerTab);
        planMethodComboBox->addItem(QString());
        planMethodComboBox->addItem(QString());
        planMethodComboBox->addItem(QString());
        planMethodComboBox->addItem(QString());
        planMethodComboBox->setObjectName(QStringLiteral("planMethodComboBox"));
        planMethodComboBox->setEnabled(false);

        gridLayout_13->addWidget(planMethodComboBox, 1, 1, 1, 1);

        label_11 = new QLabel(plannerTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_13->addWidget(label_11, 2, 0, 1, 1);

        plannerDeltaDoubleSpinBox = new QDoubleSpinBox(plannerTab);
        plannerDeltaDoubleSpinBox->setObjectName(QStringLiteral("plannerDeltaDoubleSpinBox"));
        plannerDeltaDoubleSpinBox->setMaximum(100);
        plannerDeltaDoubleSpinBox->setSingleStep(1);
        plannerDeltaDoubleSpinBox->setValue(1);

        gridLayout_13->addWidget(plannerDeltaDoubleSpinBox, 2, 1, 1, 1);

        label_9 = new QLabel(plannerTab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_13->addWidget(label_9, 3, 0, 1, 1);

        showCoordCheckBox = new QCheckBox(plannerTab);
        showCoordCheckBox->setObjectName(QStringLiteral("showCoordCheckBox"));
        showCoordCheckBox->setEnabled(false);

        gridLayout_13->addWidget(showCoordCheckBox, 3, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_13);

        keyPointTable = new QTableWidget(plannerTab);
        keyPointTable->setObjectName(QStringLiteral("keyPointTable"));
        keyPointTable->setEnabled(false);

        verticalLayout_5->addWidget(keyPointTable);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        addKeyPointButton = new QPushButton(plannerTab);
        addKeyPointButton->setObjectName(QStringLiteral("addKeyPointButton"));
        addKeyPointButton->setEnabled(false);
        addKeyPointButton->setFont(font1);

        horizontalLayout_7->addWidget(addKeyPointButton);

        deleteKeyPointButton = new QPushButton(plannerTab);
        deleteKeyPointButton->setObjectName(QStringLiteral("deleteKeyPointButton"));
        deleteKeyPointButton->setEnabled(false);

        horizontalLayout_7->addWidget(deleteKeyPointButton);

        clearKeyPointButton = new QPushButton(plannerTab);
        clearKeyPointButton->setObjectName(QStringLiteral("clearKeyPointButton"));
        clearKeyPointButton->setEnabled(false);
        clearKeyPointButton->setFont(font1);

        horizontalLayout_7->addWidget(clearKeyPointButton);


        verticalLayout_5->addLayout(horizontalLayout_7);

        planTab->addTab(plannerTab, QString());
        pathPointTab = new QWidget();
        pathPointTab->setObjectName(QStringLiteral("pathPointTab"));
        verticalLayout_6 = new QVBoxLayout(pathPointTab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pathTable = new QTableWidget(pathPointTab);
        pathTable->setObjectName(QStringLiteral("pathTable"));
        pathTable->setEnabled(false);

        verticalLayout_6->addWidget(pathTable);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        sendPathButton = new QPushButton(pathPointTab);
        sendPathButton->setObjectName(QStringLiteral("sendPathButton"));
        sendPathButton->setEnabled(false);

        horizontalLayout_8->addWidget(sendPathButton);

        drawPathButton = new QPushButton(pathPointTab);
        drawPathButton->setObjectName(QStringLiteral("drawPathButton"));
        drawPathButton->setEnabled(false);

        horizontalLayout_8->addWidget(drawPathButton);


        verticalLayout_6->addLayout(horizontalLayout_8);

        sendPathProgressBar = new QProgressBar(pathPointTab);
        sendPathProgressBar->setObjectName(QStringLiteral("sendPathProgressBar"));
        sendPathProgressBar->setValue(0);

        verticalLayout_6->addWidget(sendPathProgressBar);

        planTab->addTab(pathPointTab, QString());

        gridLayout_9->addWidget(planTab, 1, 1, 1, 1);

        mainTab->addTab(frequentTab, QString());
        programTab = new QWidget();
        programTab->setObjectName(QStringLiteral("programTab"));
        horizontalLayout_15 = new QHBoxLayout(programTab);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setSizeConstraint(QLayout::SetMinimumSize);
        programNameLineEdit = new QLineEdit(programTab);
        programNameLineEdit->setObjectName(QStringLiteral("programNameLineEdit"));

        horizontalLayout_16->addWidget(programNameLineEdit);

        saveProgramPushButton = new QPushButton(programTab);
        saveProgramPushButton->setObjectName(QStringLiteral("saveProgramPushButton"));
        saveProgramPushButton->setEnabled(false);

        horizontalLayout_16->addWidget(saveProgramPushButton);


        verticalLayout_3->addLayout(horizontalLayout_16);

        commandTreeWidget = new QTreeWidget(programTab);
        commandTreeWidget->setObjectName(QStringLiteral("commandTreeWidget"));
        sizePolicy2.setHeightForWidth(commandTreeWidget->sizePolicy().hasHeightForWidth());
        commandTreeWidget->setSizePolicy(sizePolicy2);
        commandTreeWidget->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(commandTreeWidget);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        itemUpButton = new QToolButton(programTab);
        itemUpButton->setObjectName(QStringLiteral("itemUpButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/commandIcon/resource/arrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        itemUpButton->setIcon(icon);

        horizontalLayout_18->addWidget(itemUpButton);

        itemDownButton = new QToolButton(programTab);
        itemDownButton->setObjectName(QStringLiteral("itemDownButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/commandIcon/resource/arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        itemDownButton->setIcon(icon1);

        horizontalLayout_18->addWidget(itemDownButton);

        itemDeleteButton = new QToolButton(programTab);
        itemDeleteButton->setObjectName(QStringLiteral("itemDeleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/commandIcon/resource/bin.png"), QSize(), QIcon::Normal, QIcon::Off);
        itemDeleteButton->setIcon(icon2);

        horizontalLayout_18->addWidget(itemDeleteButton);

        programRunButton = new QToolButton(programTab);
        programRunButton->setObjectName(QStringLiteral("programRunButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/commandIcon/resource/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        programRunButton->setIcon(icon3);

        horizontalLayout_18->addWidget(programRunButton);

        programPauseButton = new QToolButton(programTab);
        programPauseButton->setObjectName(QStringLiteral("programPauseButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/commandIcon/resource/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        programPauseButton->setIcon(icon4);

        horizontalLayout_18->addWidget(programPauseButton);

        programStopButton = new QToolButton(programTab);
        programStopButton->setObjectName(QStringLiteral("programStopButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/commandIcon/resource/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        programStopButton->setIcon(icon5);

        horizontalLayout_18->addWidget(programStopButton);


        verticalLayout_3->addLayout(horizontalLayout_18);


        horizontalLayout_15->addLayout(verticalLayout_3);

        commandTabWidget = new QTabWidget(programTab);
        commandTabWidget->setObjectName(QStringLiteral("commandTabWidget"));
        commandTabWidget->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(4);
        sizePolicy3.setVerticalStretch(10);
        sizePolicy3.setHeightForWidth(commandTabWidget->sizePolicy().hasHeightForWidth());
        commandTabWidget->setSizePolicy(sizePolicy3);
        commandTab = new QWidget();
        commandTab->setObjectName(QStringLiteral("commandTab"));
        gridLayout_2 = new QGridLayout(commandTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        nameLabel = new QLabel(commandTab);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(22);
        nameLabel->setFont(font2);

        horizontalLayout_29->addWidget(nameLabel);

        renameButton = new QPushButton(commandTab);
        renameButton->setObjectName(QStringLiteral("renameButton"));

        horizontalLayout_29->addWidget(renameButton);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_16);


        gridLayout_2->addLayout(horizontalLayout_29, 0, 0, 1, 1);

        commandStack = new QStackedWidget(commandTab);
        commandStack->setObjectName(QStringLiteral("commandStack"));
        movePage = new QWidget();
        movePage->setObjectName(QStringLiteral("movePage"));
        gridLayout_11 = new QGridLayout(movePage);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_4, 6, 0, 1, 1);

        moveHintLabel = new QLabel(movePage);
        moveHintLabel->setObjectName(QStringLiteral("moveHintLabel"));
        moveHintLabel->setWordWrap(true);

        gridLayout_11->addWidget(moveHintLabel, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_11->addItem(verticalSpacer_5, 2, 0, 1, 1);

        label_20 = new QLabel(movePage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setTextFormat(Qt::AutoText);
        label_20->setWordWrap(true);

        gridLayout_11->addWidget(label_20, 1, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_10 = new QLabel(movePage);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_19->addWidget(label_10);

        moveTypeComboBox = new QComboBox(movePage);
        moveTypeComboBox->addItem(QString());
        moveTypeComboBox->addItem(QString());
        moveTypeComboBox->addItem(QString());
        moveTypeComboBox->addItem(QString());
        moveTypeComboBox->setObjectName(QStringLiteral("moveTypeComboBox"));

        horizontalLayout_19->addWidget(moveTypeComboBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_9);


        gridLayout_11->addLayout(horizontalLayout_19, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(movePage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout->addWidget(label_21, 1, 0, 1, 1);

        jointShareAccelUnitLabel = new QLabel(groupBox_2);
        jointShareAccelUnitLabel->setObjectName(QStringLiteral("jointShareAccelUnitLabel"));

        gridLayout->addWidget(jointShareAccelUnitLabel, 2, 2, 1, 1);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout->addWidget(label_22, 2, 0, 1, 1);

        jointShareAccelLineEdit = new QLineEdit(groupBox_2);
        jointShareAccelLineEdit->setObjectName(QStringLiteral("jointShareAccelLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(jointShareAccelLineEdit->sizePolicy().hasHeightForWidth());
        jointShareAccelLineEdit->setSizePolicy(sizePolicy4);
        jointShareAccelLineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        jointShareAccelLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(jointShareAccelLineEdit, 2, 1, 1, 1);

        jointShareSpeedUnitLabel = new QLabel(groupBox_2);
        jointShareSpeedUnitLabel->setObjectName(QStringLiteral("jointShareSpeedUnitLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(jointShareSpeedUnitLabel->sizePolicy().hasHeightForWidth());
        jointShareSpeedUnitLabel->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(jointShareSpeedUnitLabel, 1, 2, 1, 1);

        jointShareSpeedLineEdit = new QLineEdit(groupBox_2);
        jointShareSpeedLineEdit->setObjectName(QStringLiteral("jointShareSpeedLineEdit"));
        sizePolicy4.setHeightForWidth(jointShareSpeedLineEdit->sizePolicy().hasHeightForWidth());
        jointShareSpeedLineEdit->setSizePolicy(sizePolicy4);
        jointShareSpeedLineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        jointShareSpeedLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(jointShareSpeedLineEdit, 1, 1, 1, 1);

        setShareToolCheckBox = new QCheckBox(groupBox_2);
        setShareToolCheckBox->setObjectName(QStringLiteral("setShareToolCheckBox"));
        setShareToolCheckBox->setEnabled(false);

        gridLayout->addWidget(setShareToolCheckBox, 0, 0, 1, 1);

        setShareToolComboBox = new QComboBox(groupBox_2);
        setShareToolComboBox->setObjectName(QStringLiteral("setShareToolComboBox"));
        setShareToolComboBox->setEnabled(false);
        sizePolicy4.setHeightForWidth(setShareToolComboBox->sizePolicy().hasHeightForWidth());
        setShareToolComboBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(setShareToolComboBox, 0, 1, 1, 2);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout_7->addLayout(gridLayout);


        gridLayout_11->addWidget(groupBox_2, 5, 0, 1, 1);

        commandStack->addWidget(movePage);
        pointPage = new QWidget();
        pointPage->setObjectName(QStringLiteral("pointPage"));
        verticalLayout_8 = new QVBoxLayout(pointPage);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        pointTypeComboBox = new QComboBox(pointPage);
        pointTypeComboBox->addItem(QString());
        pointTypeComboBox->addItem(QString());
        pointTypeComboBox->addItem(QString());
        pointTypeComboBox->setObjectName(QStringLiteral("pointTypeComboBox"));
        sizePolicy4.setHeightForWidth(pointTypeComboBox->sizePolicy().hasHeightForWidth());
        pointTypeComboBox->setSizePolicy(sizePolicy4);
        pointTypeComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_28->addWidget(pointTypeComboBox);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_15);


        verticalLayout_8->addLayout(horizontalLayout_28);

        pointTypeStackedWidget = new QStackedWidget(pointPage);
        pointTypeStackedWidget->setObjectName(QStringLiteral("pointTypeStackedWidget"));
        absolutePointPage = new QWidget();
        absolutePointPage->setObjectName(QStringLiteral("absolutePointPage"));
        verticalLayout_9 = new QVBoxLayout(absolutePointPage);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox_3 = new QGroupBox(absolutePointPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_22 = new QHBoxLayout(groupBox_3);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        pointPositionTable = new QTableWidget(groupBox_3);
        pointPositionTable->setObjectName(QStringLiteral("pointPositionTable"));

        horizontalLayout_22->addWidget(pointPositionTable);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        move2PointButton = new QPushButton(groupBox_3);
        move2PointButton->setObjectName(QStringLiteral("move2PointButton"));
        move2PointButton->setEnabled(false);

        verticalLayout_10->addWidget(move2PointButton);

        modifyPointButton = new QPushButton(groupBox_3);
        modifyPointButton->setObjectName(QStringLiteral("modifyPointButton"));
        modifyPointButton->setEnabled(false);

        verticalLayout_10->addWidget(modifyPointButton);


        horizontalLayout_22->addLayout(verticalLayout_10);


        verticalLayout_9->addWidget(groupBox_3);

        pointTypeStackedWidget->addWidget(absolutePointPage);
        relativePointPage = new QWidget();
        relativePointPage->setObjectName(QStringLiteral("relativePointPage"));
        gridLayout_15 = new QGridLayout(relativePointPage);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_15->addItem(verticalSpacer_6, 1, 0, 1, 1);

        label_25 = new QLabel(relativePointPage);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_15->addWidget(label_25, 0, 0, 1, 2);

        groupBox_8 = new QGroupBox(relativePointPage);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy6);
        gridLayout_16 = new QGridLayout(groupBox_8);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_30 = new QLabel(groupBox_8);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_16->addWidget(label_30, 4, 0, 1, 1);

        label_28 = new QLabel(groupBox_8);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_16->addWidget(label_28, 2, 0, 1, 1);

        label_26 = new QLabel(groupBox_8);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_16->addWidget(label_26, 0, 0, 1, 1);

        pointDeltaY_Label = new QLabel(groupBox_8);
        pointDeltaY_Label->setObjectName(QStringLiteral("pointDeltaY_Label"));

        gridLayout_16->addWidget(pointDeltaY_Label, 1, 1, 1, 1);

        pointPthchAngleLabel = new QLabel(groupBox_8);
        pointPthchAngleLabel->setObjectName(QStringLiteral("pointPthchAngleLabel"));

        gridLayout_16->addWidget(pointPthchAngleLabel, 4, 1, 1, 1);

        pointDeltaZ_Label = new QLabel(groupBox_8);
        pointDeltaZ_Label->setObjectName(QStringLiteral("pointDeltaZ_Label"));

        gridLayout_16->addWidget(pointDeltaZ_Label, 2, 1, 1, 1);

        label_27 = new QLabel(groupBox_8);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_16->addWidget(label_27, 1, 0, 1, 1);

        pointDeltaX_Label = new QLabel(groupBox_8);
        pointDeltaX_Label->setObjectName(QStringLiteral("pointDeltaX_Label"));

        gridLayout_16->addWidget(pointDeltaX_Label, 0, 1, 1, 1);

        label_29 = new QLabel(groupBox_8);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_16->addWidget(label_29, 3, 0, 1, 1);

        pointDistanceLabel = new QLabel(groupBox_8);
        pointDistanceLabel->setObjectName(QStringLiteral("pointDistanceLabel"));

        gridLayout_16->addWidget(pointDistanceLabel, 3, 1, 1, 1);

        label_14 = new QLabel(groupBox_8);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_16->addWidget(label_14, 5, 0, 1, 1);

        pointYawAngleLabel = new QLabel(groupBox_8);
        pointYawAngleLabel->setObjectName(QStringLiteral("pointYawAngleLabel"));

        gridLayout_16->addWidget(pointYawAngleLabel, 5, 1, 1, 1);


        gridLayout_15->addWidget(groupBox_8, 4, 0, 1, 2);

        groupBox_6 = new QGroupBox(relativePointPage);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy6.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy6);
        verticalLayout_11 = new QVBoxLayout(groupBox_6);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        setStartPointButton = new QPushButton(groupBox_6);
        setStartPointButton->setObjectName(QStringLiteral("setStartPointButton"));
        setStartPointButton->setEnabled(false);

        verticalLayout_11->addWidget(setStartPointButton);

        move2StartPointButton = new QPushButton(groupBox_6);
        move2StartPointButton->setObjectName(QStringLiteral("move2StartPointButton"));
        move2StartPointButton->setEnabled(false);

        verticalLayout_11->addWidget(move2StartPointButton);


        gridLayout_15->addWidget(groupBox_6, 3, 0, 1, 1);

        groupBox_7 = new QGroupBox(relativePointPage);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy6.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy6);
        verticalLayout_12 = new QVBoxLayout(groupBox_7);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        setGoalPointButton = new QPushButton(groupBox_7);
        setGoalPointButton->setObjectName(QStringLiteral("setGoalPointButton"));
        setGoalPointButton->setEnabled(false);

        verticalLayout_12->addWidget(setGoalPointButton);

        move2GoalPointButton = new QPushButton(groupBox_7);
        move2GoalPointButton->setObjectName(QStringLiteral("move2GoalPointButton"));
        move2GoalPointButton->setEnabled(false);

        verticalLayout_12->addWidget(move2GoalPointButton);


        gridLayout_15->addWidget(groupBox_7, 3, 1, 1, 1);

        pointTypeStackedWidget->addWidget(relativePointPage);
        variablePointPage = new QWidget();
        variablePointPage->setObjectName(QStringLiteral("variablePointPage"));
        verticalLayout_13 = new QVBoxLayout(variablePointPage);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_31 = new QLabel(variablePointPage);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_13->addWidget(label_31);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_32 = new QLabel(variablePointPage);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_25->addWidget(label_32);

        pointVarComboBox = new QComboBox(variablePointPage);
        pointVarComboBox->addItem(QString());
        pointVarComboBox->setObjectName(QStringLiteral("pointVarComboBox"));
        pointVarComboBox->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pointVarComboBox->sizePolicy().hasHeightForWidth());
        pointVarComboBox->setSizePolicy(sizePolicy7);

        horizontalLayout_25->addWidget(pointVarComboBox);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_12);


        verticalLayout_13->addLayout(horizontalLayout_25);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_7);

        pointTypeStackedWidget->addWidget(variablePointPage);

        verticalLayout_8->addWidget(pointTypeStackedWidget);

        groupBox_4 = new QGroupBox(pointPage);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_23 = new QHBoxLayout(groupBox_4);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        noFilletButton = new QRadioButton(groupBox_4);
        noFilletButton->setObjectName(QStringLiteral("noFilletButton"));
        noFilletButton->setChecked(true);

        gridLayout_8->addWidget(noFilletButton, 0, 0, 1, 1);

        filletButton = new QRadioButton(groupBox_4);
        filletButton->setObjectName(QStringLiteral("filletButton"));
        filletButton->setEnabled(false);

        gridLayout_8->addWidget(filletButton, 1, 0, 1, 1);

        filletRadiusDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        filletRadiusDoubleSpinBox->setObjectName(QStringLiteral("filletRadiusDoubleSpinBox"));
        filletRadiusDoubleSpinBox->setEnabled(false);
        filletRadiusDoubleSpinBox->setMaximum(100);
        filletRadiusDoubleSpinBox->setValue(5);

        gridLayout_8->addWidget(filletRadiusDoubleSpinBox, 1, 1, 1, 1);


        horizontalLayout_23->addLayout(gridLayout_8);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_14 = new QGridLayout(groupBox_5);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        jointSpeedUnitLabel = new QLabel(groupBox_5);
        jointSpeedUnitLabel->setObjectName(QStringLiteral("jointSpeedUnitLabel"));

        gridLayout_14->addWidget(jointSpeedUnitLabel, 1, 2, 1, 1);

        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_14->addWidget(label_23, 2, 0, 1, 1);

        jointSpeedLineEdit = new QLineEdit(groupBox_5);
        jointSpeedLineEdit->setObjectName(QStringLiteral("jointSpeedLineEdit"));
        jointSpeedLineEdit->setEnabled(false);
        jointSpeedLineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        jointSpeedLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_14->addWidget(jointSpeedLineEdit, 1, 1, 1, 1);

        useShareSettingCheckBox = new QCheckBox(groupBox_5);
        useShareSettingCheckBox->setObjectName(QStringLiteral("useShareSettingCheckBox"));
        useShareSettingCheckBox->setChecked(true);

        gridLayout_14->addWidget(useShareSettingCheckBox, 0, 0, 1, 2);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_14->addWidget(label_12, 1, 0, 1, 1);

        jointAccelLineEdit = new QLineEdit(groupBox_5);
        jointAccelLineEdit->setObjectName(QStringLiteral("jointAccelLineEdit"));
        jointAccelLineEdit->setEnabled(false);
        jointAccelLineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        jointAccelLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_14->addWidget(jointAccelLineEdit, 2, 1, 1, 1);

        jointAccelUnitLabel = new QLabel(groupBox_5);
        jointAccelUnitLabel->setObjectName(QStringLiteral("jointAccelUnitLabel"));

        gridLayout_14->addWidget(jointAccelUnitLabel, 2, 2, 1, 1);


        horizontalLayout_23->addWidget(groupBox_5);


        verticalLayout_8->addWidget(groupBox_4);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        addPointPrevButton = new QPushButton(pointPage);
        addPointPrevButton->setObjectName(QStringLiteral("addPointPrevButton"));
        addPointPrevButton->setEnabled(false);

        horizontalLayout_24->addWidget(addPointPrevButton);

        addPointNextButton = new QPushButton(pointPage);
        addPointNextButton->setObjectName(QStringLiteral("addPointNextButton"));
        addPointNextButton->setEnabled(false);

        horizontalLayout_24->addWidget(addPointNextButton);

        deletePointButton = new QPushButton(pointPage);
        deletePointButton->setObjectName(QStringLiteral("deletePointButton"));
        deletePointButton->setEnabled(false);

        horizontalLayout_24->addWidget(deletePointButton);


        verticalLayout_8->addLayout(horizontalLayout_24);

        commandStack->addWidget(pointPage);
        waitPage = new QWidget();
        waitPage->setObjectName(QStringLiteral("waitPage"));
        gridLayout_5 = new QGridLayout(waitPage);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        noWaitButton = new QRadioButton(waitPage);
        noWaitButton->setObjectName(QStringLiteral("noWaitButton"));
        noWaitButton->setChecked(true);

        verticalLayout_2->addWidget(noWaitButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        waitTimeButton = new QRadioButton(waitPage);
        waitTimeButton->setObjectName(QStringLiteral("waitTimeButton"));

        horizontalLayout_2->addWidget(waitTimeButton);

        pauseTimeSpinBox = new QSpinBox(waitPage);
        pauseTimeSpinBox->setObjectName(QStringLiteral("pauseTimeSpinBox"));
        pauseTimeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pauseTimeSpinBox->setMaximum(2147483647);
        pauseTimeSpinBox->setSingleStep(100);
        pauseTimeSpinBox->setValue(100);

        horizontalLayout_2->addWidget(pauseTimeSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        waitDigitalButton = new QRadioButton(waitPage);
        waitDigitalButton->setObjectName(QStringLiteral("waitDigitalButton"));
        waitDigitalButton->setEnabled(false);

        horizontalLayout_3->addWidget(waitDigitalButton);

        digitalInputComboBox = new QComboBox(waitPage);
        digitalInputComboBox->addItem(QString());
        digitalInputComboBox->setObjectName(QStringLiteral("digitalInputComboBox"));
        digitalInputComboBox->setEnabled(false);

        horizontalLayout_3->addWidget(digitalInputComboBox);

        digitalInLevelComboBox = new QComboBox(waitPage);
        digitalInLevelComboBox->addItem(QString());
        digitalInLevelComboBox->addItem(QString());
        digitalInLevelComboBox->setObjectName(QStringLiteral("digitalInLevelComboBox"));
        digitalInLevelComboBox->setEnabled(false);

        horizontalLayout_3->addWidget(digitalInLevelComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        waitAnalogButton = new QRadioButton(waitPage);
        waitAnalogButton->setObjectName(QStringLiteral("waitAnalogButton"));
        waitAnalogButton->setEnabled(false);

        horizontalLayout_4->addWidget(waitAnalogButton);

        analogInputComboBox = new QComboBox(waitPage);
        analogInputComboBox->addItem(QString());
        analogInputComboBox->setObjectName(QStringLiteral("analogInputComboBox"));
        analogInputComboBox->setEnabled(false);

        horizontalLayout_4->addWidget(analogInputComboBox);

        analogCompareComboBox = new QComboBox(waitPage);
        analogCompareComboBox->addItem(QString());
        analogCompareComboBox->addItem(QString());
        analogCompareComboBox->addItem(QString());
        analogCompareComboBox->addItem(QString());
        analogCompareComboBox->addItem(QString());
        analogCompareComboBox->setObjectName(QStringLiteral("analogCompareComboBox"));
        analogCompareComboBox->setEnabled(false);

        horizontalLayout_4->addWidget(analogCompareComboBox);

        analogInLevelSpinBox = new QDoubleSpinBox(waitPage);
        analogInLevelSpinBox->setObjectName(QStringLiteral("analogInLevelSpinBox"));
        analogInLevelSpinBox->setEnabled(false);
        analogInLevelSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        analogInLevelSpinBox->setMaximum(1000);
        analogInLevelSpinBox->setSingleStep(0.1);

        horizontalLayout_4->addWidget(analogInLevelSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        waitFxButton = new QRadioButton(waitPage);
        waitFxButton->setObjectName(QStringLiteral("waitFxButton"));
        waitFxButton->setEnabled(false);

        horizontalLayout_5->addWidget(waitFxButton);

        waitFxLineEdit = new QLineEdit(waitPage);
        waitFxLineEdit->setObjectName(QStringLiteral("waitFxLineEdit"));
        waitFxLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(waitFxLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_5->addLayout(verticalLayout_2, 2, 0, 1, 1);

        label_17 = new QLabel(waitPage);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 4, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_8, 1, 0, 1, 1);

        commandStack->addWidget(waitPage);
        stopPage = new QWidget();
        stopPage->setObjectName(QStringLiteral("stopPage"));
        verticalLayout_15 = new QVBoxLayout(stopPage);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_37 = new QLabel(stopPage);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_15->addWidget(label_37);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_13);

        commandStack->addWidget(stopPage);
        setPage = new QWidget();
        setPage->setObjectName(QStringLiteral("setPage"));
        gridLayout_6 = new QGridLayout(setPage);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox = new QGroupBox(setPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        setDigitalOutputRadioButton = new QRadioButton(groupBox);
        setDigitalOutputRadioButton->setObjectName(QStringLiteral("setDigitalOutputRadioButton"));
        setDigitalOutputRadioButton->setEnabled(false);

        horizontalLayout_9->addWidget(setDigitalOutputRadioButton);

        digitalOutputComboBox = new QComboBox(groupBox);
        digitalOutputComboBox->addItem(QString());
        digitalOutputComboBox->setObjectName(QStringLiteral("digitalOutputComboBox"));
        digitalOutputComboBox->setEnabled(false);
        sizePolicy4.setHeightForWidth(digitalOutputComboBox->sizePolicy().hasHeightForWidth());
        digitalOutputComboBox->setSizePolicy(sizePolicy4);
        digitalOutputComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_9->addWidget(digitalOutputComboBox);

        digitalOutLevelComboBox = new QComboBox(groupBox);
        digitalOutLevelComboBox->addItem(QString());
        digitalOutLevelComboBox->addItem(QString());
        digitalOutLevelComboBox->addItem(QString());
        digitalOutLevelComboBox->setObjectName(QStringLiteral("digitalOutLevelComboBox"));
        digitalOutLevelComboBox->setEnabled(false);

        horizontalLayout_9->addWidget(digitalOutLevelComboBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        gridLayout_7->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        noSetRadioButton = new QRadioButton(groupBox);
        noSetRadioButton->setObjectName(QStringLiteral("noSetRadioButton"));
        noSetRadioButton->setChecked(true);

        gridLayout_7->addWidget(noSetRadioButton, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        setDigitalOutputFxRadioButton = new QRadioButton(groupBox);
        setDigitalOutputFxRadioButton->setObjectName(QStringLiteral("setDigitalOutputFxRadioButton"));
        setDigitalOutputFxRadioButton->setEnabled(false);

        horizontalLayout_11->addWidget(setDigitalOutputFxRadioButton);

        digitalOutputFxComboBox = new QComboBox(groupBox);
        digitalOutputFxComboBox->addItem(QString());
        digitalOutputFxComboBox->setObjectName(QStringLiteral("digitalOutputFxComboBox"));
        digitalOutputFxComboBox->setEnabled(false);
        sizePolicy4.setHeightForWidth(digitalOutputFxComboBox->sizePolicy().hasHeightForWidth());
        digitalOutputFxComboBox->setSizePolicy(sizePolicy4);
        digitalOutputFxComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_11->addWidget(digitalOutputFxComboBox);

        digitalOutFxLineEdit = new QLineEdit(groupBox);
        digitalOutFxLineEdit->setObjectName(QStringLiteral("digitalOutFxLineEdit"));
        digitalOutFxLineEdit->setEnabled(false);
        digitalOutFxLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(digitalOutFxLineEdit);


        gridLayout_7->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        setAnalogOutputRadioButton = new QRadioButton(groupBox);
        setAnalogOutputRadioButton->setObjectName(QStringLiteral("setAnalogOutputRadioButton"));
        setAnalogOutputRadioButton->setEnabled(false);

        horizontalLayout_10->addWidget(setAnalogOutputRadioButton);

        analogOutputComboBox = new QComboBox(groupBox);
        analogOutputComboBox->addItem(QString());
        analogOutputComboBox->setObjectName(QStringLiteral("analogOutputComboBox"));
        analogOutputComboBox->setEnabled(false);
        analogOutputComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_10->addWidget(analogOutputComboBox);

        analogOutLevelSpinBox = new QDoubleSpinBox(groupBox);
        analogOutLevelSpinBox->setObjectName(QStringLiteral("analogOutLevelSpinBox"));
        analogOutLevelSpinBox->setEnabled(false);
        analogOutLevelSpinBox->setMaximum(1000);
        analogOutLevelSpinBox->setSingleStep(0.1);

        horizontalLayout_10->addWidget(analogOutLevelSpinBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);


        gridLayout_7->addLayout(horizontalLayout_10, 4, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        setAnalogOutputFxRadioButton = new QRadioButton(groupBox);
        setAnalogOutputFxRadioButton->setObjectName(QStringLiteral("setAnalogOutputFxRadioButton"));
        setAnalogOutputFxRadioButton->setEnabled(false);

        horizontalLayout_12->addWidget(setAnalogOutputFxRadioButton);

        analogOutputFxComboBox = new QComboBox(groupBox);
        analogOutputFxComboBox->addItem(QString());
        analogOutputFxComboBox->setObjectName(QStringLiteral("analogOutputFxComboBox"));
        analogOutputFxComboBox->setEnabled(false);
        analogOutputFxComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_12->addWidget(analogOutputFxComboBox);

        setAnalogOutputFxLineEdit = new QLineEdit(groupBox);
        setAnalogOutputFxLineEdit->setObjectName(QStringLiteral("setAnalogOutputFxLineEdit"));
        setAnalogOutputFxLineEdit->setEnabled(false);
        setAnalogOutputFxLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(setAnalogOutputFxLineEdit);


        gridLayout_7->addLayout(horizontalLayout_12, 5, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        setVarRadioButton = new QRadioButton(groupBox);
        setVarRadioButton->setObjectName(QStringLiteral("setVarRadioButton"));
        setVarRadioButton->setEnabled(false);

        horizontalLayout_13->addWidget(setVarRadioButton);

        varComboBox = new QComboBox(groupBox);
        varComboBox->addItem(QString());
        varComboBox->setObjectName(QStringLiteral("varComboBox"));
        varComboBox->setEnabled(false);
        varComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_13->addWidget(varComboBox);

        varFxlineEdit = new QLineEdit(groupBox);
        varFxlineEdit->setObjectName(QStringLiteral("varFxlineEdit"));
        varFxlineEdit->setEnabled(false);
        varFxlineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(varFxlineEdit);


        gridLayout_7->addLayout(horizontalLayout_13, 6, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 5, 0, 1, 1);

        label_19 = new QLabel(setPage);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_6->addWidget(label_19, 0, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        setToolCheckBox = new QCheckBox(setPage);
        setToolCheckBox->setObjectName(QStringLiteral("setToolCheckBox"));
        setToolCheckBox->setEnabled(false);

        horizontalLayout_20->addWidget(setToolCheckBox);

        setToolComboBox = new QComboBox(setPage);
        setToolComboBox->setObjectName(QStringLiteral("setToolComboBox"));
        setToolComboBox->setEnabled(false);
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(setToolComboBox->sizePolicy().hasHeightForWidth());
        setToolComboBox->setSizePolicy(sizePolicy8);

        horizontalLayout_20->addWidget(setToolComboBox);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_10);


        gridLayout_6->addLayout(horizontalLayout_20, 4, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_6->addItem(verticalSpacer_9, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        setLoadCheckBox = new QCheckBox(setPage);
        setLoadCheckBox->setObjectName(QStringLiteral("setLoadCheckBox"));
        setLoadCheckBox->setEnabled(false);

        horizontalLayout_14->addWidget(setLoadCheckBox);

        loadDoubleSpinBox = new QDoubleSpinBox(setPage);
        loadDoubleSpinBox->setObjectName(QStringLiteral("loadDoubleSpinBox"));
        loadDoubleSpinBox->setEnabled(false);
        loadDoubleSpinBox->setMaximum(100);
        loadDoubleSpinBox->setSingleStep(0.1);

        horizontalLayout_14->addWidget(loadDoubleSpinBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);


        gridLayout_6->addLayout(horizontalLayout_14, 3, 0, 1, 1);

        commandStack->addWidget(setPage);
        popPage = new QWidget();
        popPage->setObjectName(QStringLiteral("popPage"));
        gridLayout_4 = new QGridLayout(popPage);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        popMsgButton = new QRadioButton(popPage);
        popMsgButton->setObjectName(QStringLiteral("popMsgButton"));
        popMsgButton->setChecked(true);

        gridLayout_4->addWidget(popMsgButton, 5, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(verticalSpacer_10, 1, 0, 1, 1);

        stopWithPopCheckBox = new QCheckBox(popPage);
        stopWithPopCheckBox->setObjectName(QStringLiteral("stopWithPopCheckBox"));

        gridLayout_4->addWidget(stopWithPopCheckBox, 9, 0, 1, 1);

        popErrorButton = new QRadioButton(popPage);
        popErrorButton->setObjectName(QStringLiteral("popErrorButton"));

        gridLayout_4->addWidget(popErrorButton, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 8, 0, 1, 1);

        label_16 = new QLabel(popPage);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 4, 0, 1, 1);

        popWarningButton = new QRadioButton(popPage);
        popWarningButton->setObjectName(QStringLiteral("popWarningButton"));

        gridLayout_4->addWidget(popWarningButton, 6, 0, 1, 1);

        label_15 = new QLabel(popPage);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        previewButton = new QPushButton(popPage);
        previewButton->setObjectName(QStringLiteral("previewButton"));

        horizontalLayout->addWidget(previewButton);


        gridLayout_4->addLayout(horizontalLayout, 3, 0, 1, 1);

        popText = new QPlainTextEdit(popPage);
        popText->setObjectName(QStringLiteral("popText"));

        gridLayout_4->addWidget(popText, 2, 0, 1, 1);

        commandStack->addWidget(popPage);
        blankPage = new QWidget();
        blankPage->setObjectName(QStringLiteral("blankPage"));
        verticalLayout_16 = new QVBoxLayout(blankPage);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_39 = new QLabel(blankPage);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_16->addWidget(label_39);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_14);

        jump2StructButton = new QPushButton(blankPage);
        jump2StructButton->setObjectName(QStringLiteral("jump2StructButton"));

        horizontalLayout_27->addWidget(jump2StructButton);


        verticalLayout_16->addLayout(horizontalLayout_27);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_15);

        commandStack->addWidget(blankPage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_17 = new QVBoxLayout(page);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_17->addItem(verticalSpacer_11);

        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_17->addWidget(label_13);

        commentTextEdit = new QPlainTextEdit(page);
        commentTextEdit->setObjectName(QStringLiteral("commentTextEdit"));

        verticalLayout_17->addWidget(commentTextEdit);

        verticalSpacer_14 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_17->addItem(verticalSpacer_14);

        commandStack->addWidget(page);

        gridLayout_2->addWidget(commandStack, 2, 0, 1, 1);

        commandTabWidget->addTab(commandTab, QString());
        structTab = new QWidget();
        structTab->setObjectName(QStringLiteral("structTab"));
        gridLayout_17 = new QGridLayout(structTab);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_34 = new QLabel(structTab);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_14->addWidget(label_34);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_12);


        gridLayout_17->addLayout(verticalLayout_14, 3, 1, 1, 1);

        insertCommandTabWidget = new QTabWidget(structTab);
        insertCommandTabWidget->setObjectName(QStringLiteral("insertCommandTabWidget"));
        baseCommandTab = new QWidget();
        baseCommandTab->setObjectName(QStringLiteral("baseCommandTab"));
        gridLayout_18 = new QGridLayout(baseCommandTab);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        addPopCommandButton = new QPushButton(baseCommandTab);
        addPopCommandButton->setObjectName(QStringLiteral("addPopCommandButton"));
        addPopCommandButton->setEnabled(false);

        gridLayout_18->addWidget(addPopCommandButton, 2, 0, 1, 1);

        addWaitCommandButton = new QPushButton(baseCommandTab);
        addWaitCommandButton->setObjectName(QStringLiteral("addWaitCommandButton"));
        addWaitCommandButton->setEnabled(false);

        gridLayout_18->addWidget(addWaitCommandButton, 1, 0, 1, 1);

        addSetCommandButton = new QPushButton(baseCommandTab);
        addSetCommandButton->setObjectName(QStringLiteral("addSetCommandButton"));
        addSetCommandButton->setEnabled(false);

        gridLayout_18->addWidget(addSetCommandButton, 1, 1, 1, 1);

        addMoveCommandButton = new QPushButton(baseCommandTab);
        addMoveCommandButton->setObjectName(QStringLiteral("addMoveCommandButton"));
        addMoveCommandButton->setEnabled(false);

        gridLayout_18->addWidget(addMoveCommandButton, 0, 0, 1, 1);

        addPointCommandButton = new QPushButton(baseCommandTab);
        addPointCommandButton->setObjectName(QStringLiteral("addPointCommandButton"));
        addPointCommandButton->setEnabled(false);

        gridLayout_18->addWidget(addPointCommandButton, 0, 1, 1, 1);

        addStopCommandButton = new QPushButton(baseCommandTab);
        addStopCommandButton->setObjectName(QStringLiteral("addStopCommandButton"));
        addStopCommandButton->setEnabled(false);

        gridLayout_18->addWidget(addStopCommandButton, 2, 1, 1, 1);

        addCommentButton = new QPushButton(baseCommandTab);
        addCommentButton->setObjectName(QStringLiteral("addCommentButton"));
        addCommentButton->setEnabled(false);

        gridLayout_18->addWidget(addCommentButton, 3, 0, 1, 1);

        insertCommandTabWidget->addTab(baseCommandTab, QString());
        advancedCommandTab = new QWidget();
        advancedCommandTab->setObjectName(QStringLiteral("advancedCommandTab"));
        insertCommandTabWidget->addTab(advancedCommandTab, QString());

        gridLayout_17->addWidget(insertCommandTabWidget, 3, 3, 1, 1);

        label_33 = new QLabel(structTab);
        label_33->setObjectName(QStringLiteral("label_33"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy9);
        label_33->setFont(font2);

        gridLayout_17->addWidget(label_33, 0, 0, 1, 4);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_13, 3, 2, 1, 1);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        insertCommandNextRadioButton = new QRadioButton(structTab);
        insertCommandNextRadioButton->setObjectName(QStringLiteral("insertCommandNextRadioButton"));
        insertCommandNextRadioButton->setChecked(true);

        horizontalLayout_26->addWidget(insertCommandNextRadioButton);

        insertCommandPrevRadioButton = new QRadioButton(structTab);
        insertCommandPrevRadioButton->setObjectName(QStringLiteral("insertCommandPrevRadioButton"));

        horizontalLayout_26->addWidget(insertCommandPrevRadioButton);


        gridLayout_17->addLayout(horizontalLayout_26, 1, 0, 1, 4);

        label_35 = new QLabel(structTab);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_17->addWidget(label_35, 2, 1, 1, 3);

        groupBox_9 = new QGroupBox(structTab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        sizePolicy6.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy6);
        gridLayout_19 = new QGridLayout(groupBox_9);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        downCommandButton = new QPushButton(groupBox_9);
        downCommandButton->setObjectName(QStringLiteral("downCommandButton"));
        downCommandButton->setEnabled(false);

        gridLayout_19->addWidget(downCommandButton, 1, 0, 1, 1);

        copyCommandButton = new QPushButton(groupBox_9);
        copyCommandButton->setObjectName(QStringLiteral("copyCommandButton"));
        copyCommandButton->setEnabled(false);

        gridLayout_19->addWidget(copyCommandButton, 0, 1, 1, 1);

        upCommandButton = new QPushButton(groupBox_9);
        upCommandButton->setObjectName(QStringLiteral("upCommandButton"));
        upCommandButton->setEnabled(false);

        gridLayout_19->addWidget(upCommandButton, 0, 0, 1, 1);

        pasteCommandButton = new QPushButton(groupBox_9);
        pasteCommandButton->setObjectName(QStringLiteral("pasteCommandButton"));
        pasteCommandButton->setEnabled(false);

        gridLayout_19->addWidget(pasteCommandButton, 1, 1, 1, 1);

        cutCommandButton = new QPushButton(groupBox_9);
        cutCommandButton->setObjectName(QStringLiteral("cutCommandButton"));
        cutCommandButton->setEnabled(false);

        gridLayout_19->addWidget(cutCommandButton, 0, 2, 1, 1);

        deleteCommandButton = new QPushButton(groupBox_9);
        deleteCommandButton->setObjectName(QStringLiteral("deleteCommandButton"));
        deleteCommandButton->setEnabled(false);

        gridLayout_19->addWidget(deleteCommandButton, 1, 2, 1, 1);


        gridLayout_17->addWidget(groupBox_9, 4, 1, 1, 3);

        commandTabWidget->addTab(structTab, QString());

        horizontalLayout_15->addWidget(commandTabWidget);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 3);
        mainTab->addTab(programTab, QString());
        moveTab = new QWidget();
        moveTab->setObjectName(QStringLiteral("moveTab"));
        gridLayout_22 = new QGridLayout(moveTab);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        toolPositionBox = new QGroupBox(moveTab);
        toolPositionBox->setObjectName(QStringLiteral("toolPositionBox"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(toolPositionBox->sizePolicy().hasHeightForWidth());
        toolPositionBox->setSizePolicy(sizePolicy10);
        gridLayout_21 = new QGridLayout(toolPositionBox);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        toolZ_PositionText = new QLineEdit(toolPositionBox);
        toolZ_PositionText->setObjectName(QStringLiteral("toolZ_PositionText"));
        toolZ_PositionText->setEnabled(false);
        sizePolicy7.setHeightForWidth(toolZ_PositionText->sizePolicy().hasHeightForWidth());
        toolZ_PositionText->setSizePolicy(sizePolicy7);
        toolZ_PositionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(toolZ_PositionText, 2, 1, 1, 1);

        label_18 = new QLabel(toolPositionBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy5.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy5);

        gridLayout_21->addWidget(label_18, 0, 0, 1, 1);

        toolAngelLabel1 = new QLabel(toolPositionBox);
        toolAngelLabel1->setObjectName(QStringLiteral("toolAngelLabel1"));

        gridLayout_21->addWidget(toolAngelLabel1, 1, 5, 1, 1);

        toolX_PositionText = new QLineEdit(toolPositionBox);
        toolX_PositionText->setObjectName(QStringLiteral("toolX_PositionText"));
        toolX_PositionText->setEnabled(false);
        sizePolicy7.setHeightForWidth(toolX_PositionText->sizePolicy().hasHeightForWidth());
        toolX_PositionText->setSizePolicy(sizePolicy7);
        toolX_PositionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(toolX_PositionText, 0, 1, 1, 1);

        toolAngelLabel2 = new QLabel(toolPositionBox);
        toolAngelLabel2->setObjectName(QStringLiteral("toolAngelLabel2"));

        gridLayout_21->addWidget(toolAngelLabel2, 2, 5, 1, 1);

        toolRX_PositionText = new QLineEdit(toolPositionBox);
        toolRX_PositionText->setObjectName(QStringLiteral("toolRX_PositionText"));
        toolRX_PositionText->setEnabled(false);
        sizePolicy7.setHeightForWidth(toolRX_PositionText->sizePolicy().hasHeightForWidth());
        toolRX_PositionText->setSizePolicy(sizePolicy7);
        toolRX_PositionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(toolRX_PositionText, 0, 6, 1, 1);

        toolRZ_PositionText = new QLineEdit(toolPositionBox);
        toolRZ_PositionText->setObjectName(QStringLiteral("toolRZ_PositionText"));
        toolRZ_PositionText->setEnabled(false);
        sizePolicy7.setHeightForWidth(toolRZ_PositionText->sizePolicy().hasHeightForWidth());
        toolRZ_PositionText->setSizePolicy(sizePolicy7);
        toolRZ_PositionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(toolRZ_PositionText, 2, 6, 1, 1);

        toolRZ_UnitLabel = new QLabel(toolPositionBox);
        toolRZ_UnitLabel->setObjectName(QStringLiteral("toolRZ_UnitLabel"));

        gridLayout_21->addWidget(toolRZ_UnitLabel, 2, 7, 1, 1);

        toolRX_UnitLabel = new QLabel(toolPositionBox);
        toolRX_UnitLabel->setObjectName(QStringLiteral("toolRX_UnitLabel"));

        gridLayout_21->addWidget(toolRX_UnitLabel, 0, 7, 1, 1);

        toolX_UnitLabel = new QLabel(toolPositionBox);
        toolX_UnitLabel->setObjectName(QStringLiteral("toolX_UnitLabel"));

        gridLayout_21->addWidget(toolX_UnitLabel, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        toolY_UnitLabel = new QLabel(toolPositionBox);
        toolY_UnitLabel->setObjectName(QStringLiteral("toolY_UnitLabel"));

        gridLayout_21->addWidget(toolY_UnitLabel, 1, 2, 1, 1);

        label_24 = new QLabel(toolPositionBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy5.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy5);

        gridLayout_21->addWidget(label_24, 1, 0, 1, 1);

        toolRY_UnitLabel = new QLabel(toolPositionBox);
        toolRY_UnitLabel->setObjectName(QStringLiteral("toolRY_UnitLabel"));

        gridLayout_21->addWidget(toolRY_UnitLabel, 1, 7, 1, 1);

        toolY_PositionText = new QLineEdit(toolPositionBox);
        toolY_PositionText->setObjectName(QStringLiteral("toolY_PositionText"));
        toolY_PositionText->setEnabled(false);
        sizePolicy7.setHeightForWidth(toolY_PositionText->sizePolicy().hasHeightForWidth());
        toolY_PositionText->setSizePolicy(sizePolicy7);
        toolY_PositionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(toolY_PositionText, 1, 1, 1, 1);

        label_36 = new QLabel(toolPositionBox);
        label_36->setObjectName(QStringLiteral("label_36"));
        sizePolicy5.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy5);

        gridLayout_21->addWidget(label_36, 2, 0, 1, 1);

        toolZ_UnitLabel = new QLabel(toolPositionBox);
        toolZ_UnitLabel->setObjectName(QStringLiteral("toolZ_UnitLabel"));

        gridLayout_21->addWidget(toolZ_UnitLabel, 2, 2, 1, 1);

        toolRY_PositionText = new QLineEdit(toolPositionBox);
        toolRY_PositionText->setObjectName(QStringLiteral("toolRY_PositionText"));
        toolRY_PositionText->setEnabled(false);
        sizePolicy7.setHeightForWidth(toolRY_PositionText->sizePolicy().hasHeightForWidth());
        toolRY_PositionText->setSizePolicy(sizePolicy7);
        toolRY_PositionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(toolRY_PositionText, 1, 6, 1, 1);

        toolAngelLabel0 = new QLabel(toolPositionBox);
        toolAngelLabel0->setObjectName(QStringLiteral("toolAngelLabel0"));

        gridLayout_21->addWidget(toolAngelLabel0, 0, 5, 1, 1);

        toolAngelLabel3 = new QLabel(toolPositionBox);
        toolAngelLabel3->setObjectName(QStringLiteral("toolAngelLabel3"));

        gridLayout_21->addWidget(toolAngelLabel3, 3, 5, 1, 1);

        toolRW_PositionText = new QLineEdit(toolPositionBox);
        toolRW_PositionText->setObjectName(QStringLiteral("toolRW_PositionText"));
        toolRW_PositionText->setEnabled(false);
        toolRW_PositionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(toolRW_PositionText, 3, 6, 1, 1);

        toolRW_UnitLabel = new QLabel(toolPositionBox);
        toolRW_UnitLabel->setObjectName(QStringLiteral("toolRW_UnitLabel"));

        gridLayout_21->addWidget(toolRW_UnitLabel, 3, 7, 1, 1);

        changeToolPositionButton = new QPushButton(toolPositionBox);
        changeToolPositionButton->setObjectName(QStringLiteral("changeToolPositionButton"));
        changeToolPositionButton->setEnabled(false);

        gridLayout_21->addWidget(changeToolPositionButton, 3, 8, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_11, 1, 8, 1, 1);

        toolPositionTypeComboBox = new QComboBox(toolPositionBox);
        toolPositionTypeComboBox->addItem(QString());
        toolPositionTypeComboBox->addItem(QString());
        toolPositionTypeComboBox->addItem(QString());
        toolPositionTypeComboBox->setObjectName(QStringLiteral("toolPositionTypeComboBox"));
        toolPositionTypeComboBox->setEnabled(false);

        gridLayout_21->addWidget(toolPositionTypeComboBox, 0, 8, 1, 1);


        gridLayout_22->addWidget(toolPositionBox, 0, 0, 1, 1);

        jointMoveBox = new QGroupBox(moveTab);
        jointMoveBox->setObjectName(QStringLiteral("jointMoveBox"));
        sizePolicy10.setHeightForWidth(jointMoveBox->sizePolicy().hasHeightForWidth());
        jointMoveBox->setSizePolicy(sizePolicy10);
        gridLayout_20 = new QGridLayout(jointMoveBox);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        joint4Slider = new QSlider(jointMoveBox);
        joint4Slider->setObjectName(QStringLiteral("joint4Slider"));
        joint4Slider->setEnabled(false);
        joint4Slider->setOrientation(Qt::Horizontal);

        gridLayout_20->addWidget(joint4Slider, 5, 1, 1, 1);

        joint4Label = new QLabel(jointMoveBox);
        joint4Label->setObjectName(QStringLiteral("joint4Label"));

        gridLayout_20->addWidget(joint4Label, 5, 0, 1, 1);

        joint3Label = new QLabel(jointMoveBox);
        joint3Label->setObjectName(QStringLiteral("joint3Label"));

        gridLayout_20->addWidget(joint3Label, 4, 0, 1, 1);

        joint5Label = new QLabel(jointMoveBox);
        joint5Label->setObjectName(QStringLiteral("joint5Label"));

        gridLayout_20->addWidget(joint5Label, 6, 0, 1, 1);

        joint1ValueText = new QLineEdit(jointMoveBox);
        joint1ValueText->setObjectName(QStringLiteral("joint1ValueText"));
        joint1ValueText->setEnabled(false);
        QSizePolicy sizePolicy11(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(joint1ValueText->sizePolicy().hasHeightForWidth());
        joint1ValueText->setSizePolicy(sizePolicy11);
        joint1ValueText->setInputMethodHints(Qt::ImhDigitsOnly);
        joint1ValueText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_20->addWidget(joint1ValueText, 2, 2, 1, 1);

        joint0Slider = new QSlider(jointMoveBox);
        joint0Slider->setObjectName(QStringLiteral("joint0Slider"));
        joint0Slider->setEnabled(false);
        joint0Slider->setOrientation(Qt::Horizontal);

        gridLayout_20->addWidget(joint0Slider, 1, 1, 1, 1);

        joint2ValueText = new QLineEdit(jointMoveBox);
        joint2ValueText->setObjectName(QStringLiteral("joint2ValueText"));
        joint2ValueText->setEnabled(false);
        sizePolicy11.setHeightForWidth(joint2ValueText->sizePolicy().hasHeightForWidth());
        joint2ValueText->setSizePolicy(sizePolicy11);
        joint2ValueText->setInputMethodHints(Qt::ImhDigitsOnly);
        joint2ValueText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_20->addWidget(joint2ValueText, 3, 2, 1, 1);

        joint4ValueText = new QLineEdit(jointMoveBox);
        joint4ValueText->setObjectName(QStringLiteral("joint4ValueText"));
        joint4ValueText->setEnabled(false);
        sizePolicy11.setHeightForWidth(joint4ValueText->sizePolicy().hasHeightForWidth());
        joint4ValueText->setSizePolicy(sizePolicy11);
        joint4ValueText->setInputMethodHints(Qt::ImhDigitsOnly);
        joint4ValueText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_20->addWidget(joint4ValueText, 5, 2, 1, 1);

        joint3ValueText = new QLineEdit(jointMoveBox);
        joint3ValueText->setObjectName(QStringLiteral("joint3ValueText"));
        joint3ValueText->setEnabled(false);
        sizePolicy11.setHeightForWidth(joint3ValueText->sizePolicy().hasHeightForWidth());
        joint3ValueText->setSizePolicy(sizePolicy11);
        joint3ValueText->setInputMethodHints(Qt::ImhDigitsOnly);
        joint3ValueText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_20->addWidget(joint3ValueText, 4, 2, 1, 1);

        joint5ValueText = new QLineEdit(jointMoveBox);
        joint5ValueText->setObjectName(QStringLiteral("joint5ValueText"));
        joint5ValueText->setEnabled(false);
        sizePolicy11.setHeightForWidth(joint5ValueText->sizePolicy().hasHeightForWidth());
        joint5ValueText->setSizePolicy(sizePolicy11);
        joint5ValueText->setInputMethodHints(Qt::ImhDigitsOnly);
        joint5ValueText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_20->addWidget(joint5ValueText, 6, 2, 1, 1);

        joint0ValueText = new QLineEdit(jointMoveBox);
        joint0ValueText->setObjectName(QStringLiteral("joint0ValueText"));
        joint0ValueText->setEnabled(false);
        sizePolicy11.setHeightForWidth(joint0ValueText->sizePolicy().hasHeightForWidth());
        joint0ValueText->setSizePolicy(sizePolicy11);
        joint0ValueText->setInputMethodHints(Qt::ImhDigitsOnly);
        joint0ValueText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_20->addWidget(joint0ValueText, 1, 2, 1, 1);

        joint0Label = new QLabel(jointMoveBox);
        joint0Label->setObjectName(QStringLiteral("joint0Label"));

        gridLayout_20->addWidget(joint0Label, 1, 0, 1, 1);

        joint5Slider = new QSlider(jointMoveBox);
        joint5Slider->setObjectName(QStringLiteral("joint5Slider"));
        joint5Slider->setEnabled(false);
        joint5Slider->setOrientation(Qt::Horizontal);

        gridLayout_20->addWidget(joint5Slider, 6, 1, 1, 1);

        joint2Slider = new QSlider(jointMoveBox);
        joint2Slider->setObjectName(QStringLiteral("joint2Slider"));
        joint2Slider->setEnabled(false);
        joint2Slider->setOrientation(Qt::Horizontal);

        gridLayout_20->addWidget(joint2Slider, 3, 1, 1, 1);

        joint3Slider = new QSlider(jointMoveBox);
        joint3Slider->setObjectName(QStringLiteral("joint3Slider"));
        joint3Slider->setEnabled(false);
        joint3Slider->setOrientation(Qt::Horizontal);

        gridLayout_20->addWidget(joint3Slider, 4, 1, 1, 1);

        joint1Slider = new QSlider(jointMoveBox);
        joint1Slider->setObjectName(QStringLiteral("joint1Slider"));
        joint1Slider->setEnabled(false);
        joint1Slider->setOrientation(Qt::Horizontal);

        gridLayout_20->addWidget(joint1Slider, 2, 1, 1, 1);

        joint2Label = new QLabel(jointMoveBox);
        joint2Label->setObjectName(QStringLiteral("joint2Label"));

        gridLayout_20->addWidget(joint2Label, 3, 0, 1, 1);

        joint1Label = new QLabel(jointMoveBox);
        joint1Label->setObjectName(QStringLiteral("joint1Label"));

        gridLayout_20->addWidget(joint1Label, 2, 0, 1, 1);

        joint0UnitLabel = new QLabel(jointMoveBox);
        joint0UnitLabel->setObjectName(QStringLiteral("joint0UnitLabel"));

        gridLayout_20->addWidget(joint0UnitLabel, 1, 3, 1, 1);

        joint1UnitLabel = new QLabel(jointMoveBox);
        joint1UnitLabel->setObjectName(QStringLiteral("joint1UnitLabel"));

        gridLayout_20->addWidget(joint1UnitLabel, 2, 3, 1, 1);

        joint2UnitLabel = new QLabel(jointMoveBox);
        joint2UnitLabel->setObjectName(QStringLiteral("joint2UnitLabel"));

        gridLayout_20->addWidget(joint2UnitLabel, 3, 3, 1, 1);

        joint3UnitLabel = new QLabel(jointMoveBox);
        joint3UnitLabel->setObjectName(QStringLiteral("joint3UnitLabel"));

        gridLayout_20->addWidget(joint3UnitLabel, 4, 3, 1, 1);

        joint4UnitLabel = new QLabel(jointMoveBox);
        joint4UnitLabel->setObjectName(QStringLiteral("joint4UnitLabel"));

        gridLayout_20->addWidget(joint4UnitLabel, 5, 3, 1, 1);

        joint5UnitLabel = new QLabel(jointMoveBox);
        joint5UnitLabel->setObjectName(QStringLiteral("joint5UnitLabel"));

        gridLayout_20->addWidget(joint5UnitLabel, 6, 3, 1, 1);

        resetPositionButton = new QPushButton(jointMoveBox);
        resetPositionButton->setObjectName(QStringLiteral("resetPositionButton"));

        gridLayout_20->addWidget(resetPositionButton, 0, 2, 1, 2);


        gridLayout_22->addWidget(jointMoveBox, 1, 0, 1, 1);

        gridLayout_22->setRowStretch(0, 1);
        gridLayout_22->setRowStretch(1, 2);
        mainTab->addTab(moveTab, QString());

        centralLayout->addWidget(mainTab);

        centralLayout->setStretch(0, 1);
        centralLayout->setStretch(1, 3);

        horizontalLayout_17->addLayout(centralLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1081, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSetting = new QMenu(menuBar);
        menuSetting->setObjectName(QStringLiteral("menuSetting"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSetting->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFile->addAction(actionLoadConfig);
        menuFile->addAction(actionSaveConfig);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveImage);
        menuFile->addAction(actionSaveVRML);
        menuFile->addSeparator();
        menuFile->addAction(actionLoadKeyPoint);
        menuFile->addAction(actionSaveKeyPoint);
        menuFile->addAction(actionLoadPathPoint);
        menuFile->addAction(actionSavePathPoint);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveProgram);
        menuFile->addAction(actionLoadProgram);
        menuSetting->addAction(actionOffline);
        menuSetting->addAction(actionOnline);
        menuSetting->addSeparator();
        menuSetting->addAction(actionRemoteSet);
        menuSetting->addAction(actionSetParameter);
        menu->addAction(showAxis);

        retranslateUi(MainWindow);
        QObject::connect(clearKeyPointButton, SIGNAL(clicked()), MainWindow, SLOT(clearPoint()));
        QObject::connect(addKeyPointButton, SIGNAL(clicked()), MainWindow, SLOT(addPoint()));
        QObject::connect(resetButton, SIGNAL(clicked()), MainWindow, SLOT(reset()));
        QObject::connect(setRemoteButton, SIGNAL(clicked()), MainWindow, SLOT(showRemoteSetWindow()));
        QObject::connect(actionSaveImage, SIGNAL(triggered()), MainWindow, SLOT(saveImage()));
        QObject::connect(actionSaveVRML, SIGNAL(triggered()), MainWindow, SLOT(saveVRML()));
        QObject::connect(actionRemoteSet, SIGNAL(triggered()), MainWindow, SLOT(showRemoteSetWindow()));
        QObject::connect(actionOnline, SIGNAL(triggered()), MainWindow, SLOT(setOnline()));
        QObject::connect(actionOffline, SIGNAL(triggered()), MainWindow, SLOT(setOffline()));
        QObject::connect(actionLoadConfig, SIGNAL(triggered()), MainWindow, SLOT(loadConfig()));
        QObject::connect(actionSaveConfig, SIGNAL(triggered()), MainWindow, SLOT(saveConfig()));
        QObject::connect(actionOpenModel, SIGNAL(triggered()), MainWindow, SLOT(open()));
        QObject::connect(actionSetParameter, SIGNAL(triggered()), MainWindow, SLOT(showParameterSetWindow()));
        QObject::connect(startSolveButton, SIGNAL(clicked()), MainWindow, SLOT(startSolveIK()));
        QObject::connect(randomInitPositionButton, SIGNAL(clicked()), MainWindow, SLOT(getRandomFreeConfiguration()));
        QObject::connect(showAxis, SIGNAL(triggered()), MainWindow, SLOT(showAxis()));
        QObject::connect(showIk, SIGNAL(triggered()), MainWindow, SLOT(showIK()));
        QObject::connect(showOp, SIGNAL(triggered()), MainWindow, SLOT(showOp()));
        QObject::connect(showPosition, SIGNAL(triggered()), MainWindow, SLOT(showPosition()));
        QObject::connect(showCoordCheckBox, SIGNAL(toggled(bool)), MainWindow, SLOT(refreshPlannerTable()));
        QObject::connect(showPathPlanner, SIGNAL(triggered()), MainWindow, SLOT(showPathPlanner()));
        QObject::connect(sendPathButton, SIGNAL(clicked()), MainWindow, SLOT(sendPath2Robot()));
        QObject::connect(drawPathButton, SIGNAL(clicked()), MainWindow, SLOT(drawPath()));
        QObject::connect(setOnlineButton, SIGNAL(clicked()), MainWindow, SLOT(setOnlineOffline()));
        QObject::connect(readwriteButton, SIGNAL(clicked()), MainWindow, SLOT(setReadWrite()));
        QObject::connect(animateButton, SIGNAL(clicked()), MainWindow, SLOT(pauseAnimate()));
        QObject::connect(planMethodComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(planMethodChanged(int)));
        QObject::connect(startPlanButton, SIGNAL(clicked()), MainWindow, SLOT(startPlan()));
        QObject::connect(deleteKeyPointButton, SIGNAL(clicked()), MainWindow, SLOT(deletePoint()));
        QObject::connect(actionLoadKeyPoint, SIGNAL(triggered()), MainWindow, SLOT(loadKeyPoint()));
        QObject::connect(actionSaveKeyPoint, SIGNAL(triggered()), MainWindow, SLOT(saveKeyPoint()));
        QObject::connect(actionLoadPathPoint, SIGNAL(triggered()), MainWindow, SLOT(loadPathPoint()));
        QObject::connect(actionSavePathPoint, SIGNAL(triggered()), MainWindow, SLOT(savePathPoint()));
        QObject::connect(realtimeRefreshCheckBox, SIGNAL(clicked()), MainWindow, SLOT(setAlwaysFlashTable()));
        QObject::connect(commandTreeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), MainWindow, SLOT(programTreeSelectChanged(QTreeWidgetItem*)));
        QObject::connect(jump2StructButton, SIGNAL(clicked()), MainWindow, SLOT(jump2StructPage()));
        QObject::connect(addMoveCommandButton, SIGNAL(clicked()), MainWindow, SLOT(addMoveCommand()));
        QObject::connect(addPointCommandButton, SIGNAL(clicked()), MainWindow, SLOT(addPointCommand()));
        QObject::connect(addWaitCommandButton, SIGNAL(clicked()), MainWindow, SLOT(addWaitCommand()));
        QObject::connect(addSetCommandButton, SIGNAL(clicked()), MainWindow, SLOT(addSetCommand()));
        QObject::connect(addPopCommandButton, SIGNAL(clicked()), MainWindow, SLOT(addPopCommand()));
        QObject::connect(addStopCommandButton, SIGNAL(clicked()), MainWindow, SLOT(addStopCommand()));
        QObject::connect(addCommentButton, SIGNAL(clicked()), MainWindow, SLOT(addCommentCommand()));
        QObject::connect(insertCommandNextRadioButton, SIGNAL(clicked()), MainWindow, SLOT(onInsertCommandNextRadioButton()));
        QObject::connect(insertCommandPrevRadioButton, SIGNAL(clicked()), MainWindow, SLOT(onInsertCommandPrevRadioButton()));
        QObject::connect(commandTreeWidget, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)), MainWindow, SLOT(programTreeSelectChanged(QTreeWidgetItem*)));
        QObject::connect(addPointPrevButton, SIGNAL(clicked()), MainWindow, SLOT(addPointPrev()));
        QObject::connect(addPointNextButton, SIGNAL(clicked()), MainWindow, SLOT(addPointNext()));
        QObject::connect(move2PointButton, SIGNAL(clicked()), MainWindow, SLOT(showAbsolutePoint()));
        QObject::connect(modifyPointButton, SIGNAL(clicked()), MainWindow, SLOT(setAbsolutePoint()));
        QObject::connect(setStartPointButton, SIGNAL(clicked()), MainWindow, SLOT(setRelativePointStart()));
        QObject::connect(move2StartPointButton, SIGNAL(clicked()), MainWindow, SLOT(setRelativePointStart()));
        QObject::connect(setGoalPointButton, SIGNAL(clicked()), MainWindow, SLOT(setRelativePointGoal()));
        QObject::connect(move2GoalPointButton, SIGNAL(clicked()), MainWindow, SLOT(showRelativePointGoal()));
        QObject::connect(pointTypeComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(pointTypeChanged(int)));
        QObject::connect(moveTypeComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(moveTypeChanged(int)));
        QObject::connect(itemUpButton, SIGNAL(clicked()), MainWindow, SLOT(itemUp()));
        QObject::connect(itemDownButton, SIGNAL(clicked()), MainWindow, SLOT(itemDown()));
        QObject::connect(itemDeleteButton, SIGNAL(clicked()), MainWindow, SLOT(itemDelete()));
        QObject::connect(popMsgButton, SIGNAL(clicked()), MainWindow, SLOT(popWindowTypeMsg()));
        QObject::connect(popWarningButton, SIGNAL(clicked()), MainWindow, SLOT(popWindowTypeWarning()));
        QObject::connect(popErrorButton, SIGNAL(clicked()), MainWindow, SLOT(popWindowTypeError()));
        QObject::connect(stopWithPopCheckBox, SIGNAL(clicked()), MainWindow, SLOT(setStopWithPopWindow()));
        QObject::connect(previewButton, SIGNAL(clicked()), MainWindow, SLOT(previewPopWindow()));
        QObject::connect(popText, SIGNAL(textChanged()), MainWindow, SLOT(popWindowTextChanged()));
        QObject::connect(commentTextEdit, SIGNAL(textChanged()), MainWindow, SLOT(commentTextChanged()));
        QObject::connect(jointShareSpeedLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(jointSharedSpeedChanged(QString)));
        QObject::connect(jointShareAccelLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(jointSharedAccelChanged(QString)));
        QObject::connect(setShareToolComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(sharedToolChanged(int)));
        QObject::connect(setShareToolCheckBox, SIGNAL(clicked()), MainWindow, SLOT(setUseSharedTool()));
        QObject::connect(deletePointButton, SIGNAL(clicked()), MainWindow, SLOT(itemDelete()));
        QObject::connect(noFilletButton, SIGNAL(clicked()), MainWindow, SLOT(setNoFillet()));
        QObject::connect(filletButton, SIGNAL(clicked()), MainWindow, SLOT(setFillet()));
        QObject::connect(filletRadiusDoubleSpinBox, SIGNAL(valueChanged(double)), MainWindow, SLOT(setFilletRadius(double)));
        QObject::connect(useShareSettingCheckBox, SIGNAL(clicked()), MainWindow, SLOT(setUseSharedSetting()));
        QObject::connect(jointSpeedLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(jointSpeedChanged(QString)));
        QObject::connect(jointSpeedLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(jointAccelChanged(QString)));
        QObject::connect(pointVarComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(pointVarChanged(int)));
        QObject::connect(noWaitButton, SIGNAL(clicked()), MainWindow, SLOT(setNoWait()));
        QObject::connect(waitTimeButton, SIGNAL(clicked()), MainWindow, SLOT(setWaitTime()));
        QObject::connect(pauseTimeSpinBox, SIGNAL(valueChanged(int)), MainWindow, SLOT(waitTimeChanged(int)));
        QObject::connect(waitDigitalButton, SIGNAL(clicked()), MainWindow, SLOT(setWaitDigital()));
        QObject::connect(digitalInputComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(waitDigitalInChanged(int)));
        QObject::connect(digitalInLevelComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(waitDigitalInLevelChanged(int)));
        QObject::connect(waitAnalogButton, SIGNAL(clicked()), MainWindow, SLOT(setWaitAnalog()));
        QObject::connect(waitFxButton, SIGNAL(clicked()), MainWindow, SLOT(setWaitFx()));
        QObject::connect(analogInputComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(waitAnalogInChanged(int)));
        QObject::connect(analogCompareComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(waitAnalogCompareChanged(int)));
        QObject::connect(analogInLevelSpinBox, SIGNAL(valueChanged(double)), MainWindow, SLOT(waitAnalogInLevelChanged(double)));
        QObject::connect(waitFxLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(waitFxChanged(QString)));
        QObject::connect(noSetRadioButton, SIGNAL(clicked()), MainWindow, SLOT(setNoSet()));
        QObject::connect(setDigitalOutputRadioButton, SIGNAL(clicked()), MainWindow, SLOT(setDigitalOutput()));
        QObject::connect(setDigitalOutputFxRadioButton, SIGNAL(clicked()), MainWindow, SLOT(setDigitalOutputFx()));
        QObject::connect(setAnalogOutputRadioButton, SIGNAL(clicked()), MainWindow, SLOT(setAnalogOutput()));
        QObject::connect(setAnalogOutputFxRadioButton, SIGNAL(clicked()), MainWindow, SLOT(setAnalogOutputFx()));
        QObject::connect(setVarRadioButton, SIGNAL(clicked()), MainWindow, SLOT(setVar()));
        QObject::connect(setLoadCheckBox, SIGNAL(clicked()), MainWindow, SLOT(setLoad()));
        QObject::connect(setToolCheckBox, SIGNAL(clicked()), MainWindow, SLOT(setTool()));
        QObject::connect(digitalOutputComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(setDigitalOutChanged(int)));
        QObject::connect(digitalOutLevelComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(setDigitalOutLevelChanged(int)));
        QObject::connect(digitalOutputFxComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(setDigitalOutFxCombChanged(int)));
        QObject::connect(digitalOutFxLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(setDigitalOutFxChanged(QString)));
        QObject::connect(analogOutputComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(setAnalogOutChanged(int)));
        QObject::connect(analogOutLevelSpinBox, SIGNAL(valueChanged(double)), MainWindow, SLOT(setAnalogOutLevelChanged(double)));
        QObject::connect(analogOutputFxComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(setAnalogOutFxCombChanged(int)));
        QObject::connect(setAnalogOutputFxLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(setAnalogOutFxChanged(QString)));
        QObject::connect(varComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(setVarChanged(int)));
        QObject::connect(varFxlineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(setVarFxChanged(QString)));
        QObject::connect(loadDoubleSpinBox, SIGNAL(valueChanged(double)), MainWindow, SLOT(setLoadChanged(double)));
        QObject::connect(setToolComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(setToolChanged(int)));
        QObject::connect(programRunButton, SIGNAL(clicked()), MainWindow, SLOT(programRun()));
        QObject::connect(programPauseButton, SIGNAL(clicked()), MainWindow, SLOT(programPause()));
        QObject::connect(programStopButton, SIGNAL(clicked()), MainWindow, SLOT(programStop()));
        QObject::connect(joint0Slider, SIGNAL(valueChanged(int)), MainWindow, SLOT(joint0SliderChanged(int)));
        QObject::connect(joint1Slider, SIGNAL(sliderMoved(int)), MainWindow, SLOT(joint1SliderChanged(int)));
        QObject::connect(joint2Slider, SIGNAL(sliderMoved(int)), MainWindow, SLOT(joint2SliderChanged(int)));
        QObject::connect(joint3Slider, SIGNAL(sliderMoved(int)), MainWindow, SLOT(joint3SliderChanged(int)));
        QObject::connect(joint4Slider, SIGNAL(sliderMoved(int)), MainWindow, SLOT(joint4SliderChanged(int)));
        QObject::connect(joint5Slider, SIGNAL(sliderMoved(int)), MainWindow, SLOT(joint5SliderChanged(int)));
        QObject::connect(joint0ValueText, SIGNAL(textChanged(QString)), MainWindow, SLOT(joint0ValueTextChanged(QString)));
        QObject::connect(joint1ValueText, SIGNAL(textChanged(QString)), MainWindow, SLOT(joint1ValueTextChanged(QString)));
        QObject::connect(joint2ValueText, SIGNAL(textChanged(QString)), MainWindow, SLOT(joint2ValueTextChanged(QString)));
        QObject::connect(joint3ValueText, SIGNAL(textChanged(QString)), MainWindow, SLOT(joint3ValueTextChanged(QString)));
        QObject::connect(joint4ValueText, SIGNAL(textChanged(QString)), MainWindow, SLOT(joint4ValueTextChanged(QString)));
        QObject::connect(joint5ValueText, SIGNAL(textChanged(QString)), MainWindow, SLOT(joint5ValueTextChanged(QString)));
        QObject::connect(resetPositionButton, SIGNAL(clicked()), MainWindow, SLOT(reset2ZeroPosition()));
        QObject::connect(changeToolPositionButton, SIGNAL(clicked()), MainWindow, SLOT(applyToolPositionChange()));
        QObject::connect(toolPositionTypeComboBox, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(toolPositionTypeChanged(int)));
        QObject::connect(programNameLineEdit, SIGNAL(textEdited(QString)), MainWindow, SLOT(programNameChanged(QString)));
        QObject::connect(saveProgramPushButton, SIGNAL(clicked()), MainWindow, SLOT(saveProgram()));
        QObject::connect(actionLoadProgram, SIGNAL(triggered()), MainWindow, SLOT(loadProgram()));
        QObject::connect(actionSaveProgram, SIGNAL(triggered()), MainWindow, SLOT(saveProgram()));
        QObject::connect(actionTest, SIGNAL(triggered()), MainWindow, SLOT(test()));

        mainTab->setCurrentIndex(0);
        planTab->setCurrentIndex(0);
        commandTabWidget->setCurrentIndex(1);
        commandStack->setCurrentIndex(3);
        pointTypeStackedWidget->setCurrentIndex(0);
        insertCommandTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RobotController", nullptr));
        actionOpenModel->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\250\241\345\236\213", nullptr));
        actionSaveImage->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\210\252\345\233\276", nullptr));
        actionSaveVRML->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230VRML", nullptr));
        actionOffline->setText(QApplication::translate("MainWindow", "\347\246\273\347\272\277\346\250\241\345\274\217", nullptr));
        actionOnline->setText(QApplication::translate("MainWindow", "\345\234\250\347\272\277\346\250\241\345\274\217", nullptr));
        actionRemoteSet->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\350\277\236\346\216\245", nullptr));
        actionLoadConfig->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\351\205\215\347\275\256", nullptr));
        actionSaveConfig->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\351\205\215\347\275\256", nullptr));
        actionSetParameter->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        showAxis->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264", nullptr));
        showPosition->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\202\345\247\277\346\200\201", nullptr));
        showOp->setText(QApplication::translate("MainWindow", "\346\234\253\347\253\257\345\235\220\346\240\207", nullptr));
        showIk->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\350\277\220\345\212\250\345\255\246", nullptr));
        showPathPlanner->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204\350\247\204\345\210\222", nullptr));
        actionLoadKeyPoint->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\345\205\263\351\224\256\347\202\271", nullptr));
        actionSaveKeyPoint->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\205\263\351\224\256\347\202\271", nullptr));
        actionLoadPathPoint->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\350\267\257\345\276\204\347\202\271", nullptr));
        actionSavePathPoint->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\267\257\345\276\204\347\202\271", nullptr));
        actionSaveProgram->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\347\250\213\345\272\217", nullptr));
        actionLoadProgram->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\347\250\213\345\272\217", nullptr));
        actionTest->setText(QApplication::translate("MainWindow", "test", nullptr));
        positionDock->setWindowTitle(QApplication::translate("MainWindow", "\345\205\263\350\212\202\345\247\277\346\200\201", nullptr));
        onlineGroup->setTitle(QApplication::translate("MainWindow", "\345\234\250\347\272\277\346\250\241\345\274\217", nullptr));
        readwriteButton->setText(QApplication::translate("MainWindow", "\345\217\252\350\257\273\346\250\241\345\274\217", nullptr));
        setOnlineButton->setText(QApplication::translate("MainWindow", "\347\246\273\347\272\277\346\250\241\345\274\217", nullptr));
        setRemoteButton->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\345\217\202\346\225\260", nullptr));
        IK_Group->setTitle(QApplication::translate("MainWindow", "\345\217\215\345\220\221\350\277\220\345\212\250\345\255\246", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\350\247\243\347\256\227\347\273\223\346\236\234\357\274\232", nullptr));
        ikSolverComboBox->setItemText(0, QApplication::translate("MainWindow", "Nlopt", nullptr));
        ikSolverComboBox->setItemText(1, QApplication::translate("MainWindow", "Jacobian", nullptr));

        startSolveButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\247\243\347\256\227", nullptr));
        solveResultLabel->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\350\247\243\347\256\227\345\231\250\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Y\357\274\232", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Z\357\274\232", nullptr));
        randomInitPositionButton->setText(QApplication::translate("MainWindow", "\351\232\217\346\234\272\345\247\277\346\200\201", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "X\357\274\232", nullptr));
        operationalGroup->setTitle(QApplication::translate("MainWindow", "\346\234\253\347\253\257\345\235\220\346\240\207", nullptr));
        label->setText(QApplication::translate("MainWindow", "Collision\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "false", nullptr));
        realtimeRefreshCheckBox->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\346\233\264\346\226\260", nullptr));
        animateButton->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234\345\212\250\347\224\273", nullptr));
        resetButton->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
        startPlanButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\247\243\347\256\227", nullptr));
        planMethodComboBox->setItemText(0, QApplication::translate("MainWindow", "\347\202\271\345\210\260\347\202\271\344\273\273\346\204\217", nullptr));
        planMethodComboBox->setItemText(1, QApplication::translate("MainWindow", "\347\202\271\345\210\260\347\202\271\347\233\264\347\272\277", nullptr));
        planMethodComboBox->setItemText(2, QApplication::translate("MainWindow", "\344\270\211\347\202\271\346\261\202\345\234\206", nullptr));
        planMethodComboBox->setItemText(3, QApplication::translate("MainWindow", "B\346\240\267\346\235\241\346\233\262\347\272\277", nullptr));

        label_11->setText(QApplication::translate("MainWindow", "\346\217\222\350\241\245\351\227\264\351\232\224\357\274\232", nullptr));
        plannerDeltaDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", "\302\260", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\345\205\263\351\224\256\347\202\271\357\274\232", nullptr));
        showCoordCheckBox->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\235\220\346\240\207", nullptr));
        addKeyPointButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        deleteKeyPointButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        clearKeyPointButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        planTab->setTabText(planTab->indexOf(plannerTab), QApplication::translate("MainWindow", "\350\267\257\345\276\204\350\247\204\345\210\222", nullptr));
        sendPathButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\350\267\257\345\276\204", nullptr));
        drawPathButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\267\257\345\276\204", nullptr));
        planTab->setTabText(planTab->indexOf(pathPointTab), QApplication::translate("MainWindow", "\350\267\257\345\276\204\347\202\271", nullptr));
        mainTab->setTabText(mainTab->indexOf(frequentTab), QApplication::translate("MainWindow", "\345\270\270\347\224\250", nullptr));
        programNameLineEdit->setText(QApplication::translate("MainWindow", "\346\234\252\345\221\275\345\220\215", nullptr));
        saveProgramPushButton->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = commandTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\347\250\213\345\272\217", nullptr));
        itemUpButton->setText(QString());
        itemDownButton->setText(QString());
        itemDeleteButton->setText(QString());
        programRunButton->setText(QString());
        programPauseButton->setText(QString());
        programStopButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        renameButton->setText(QApplication::translate("MainWindow", "\351\207\215\345\221\275\345\220\215", nullptr));
        moveHintLabel->setText(QApplication::translate("MainWindow", "\345\260\206\345\234\250\346\234\272\345\231\250\344\272\272\345\205\263\350\212\202\347\251\272\351\227\264\345\206\205\350\256\241\347\256\227\350\275\250\350\277\271\357\274\214\347\224\237\346\210\220\347\232\204\350\275\250\350\277\271\345\260\206\344\270\272\344\270\215\345\217\257\346\216\247\347\232\204\346\233\262\347\272\277\357\274\214\344\275\206\351\200\237\345\272\246\346\234\200\345\277\253\357\274\214\351\200\202\345\220\210\346\227\240\351\232\234\347\242\215\347\251\272\351\227\264\350\277\220\345\212\250\343\200\202", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\234\250\346\255\244\345\244\204\346\214\207\345\256\232\346\234\254\347\273\204\350\267\257\345\276\204\347\202\271\351\227\264\347\232\204\347\247\273\345\212\250\345\212\250\344\275\234\345\217\202\346\225\260\343\200\202</p><p>\345\234\250\344\270\213\345\210\227\345\217\202\346\225\260\350\256\276\347\275\256\344\270\255\345\217\257\351\200\211\346\213\251\344\270\215\345\220\214\347\232\204\347\247\273\345\212\250\346\226\271\345\274\217\357\274\214\345\271\266\350\256\276\347\275\256\346\234\254\347\273\204\350\267\257\345\276\204\344\270\255\345\205\261\344\272\253\347\232\204\351\273\230\350\256\244\345\217\202\346\225\260\343\200\202</p></body></html>", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\347\247\273\345\212\250\346\226\271\345\274\217\357\274\232", nullptr));
        moveTypeComboBox->setItemText(0, QApplication::translate("MainWindow", "MoveJ", nullptr));
        moveTypeComboBox->setItemText(1, QApplication::translate("MainWindow", "MoveL", nullptr));
        moveTypeComboBox->setItemText(2, QApplication::translate("MainWindow", "MoveP", nullptr));
        moveTypeComboBox->setItemText(3, QApplication::translate("MainWindow", "MoveC", nullptr));

        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\205\261\344\272\253\345\217\202\346\225\260", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\202\351\200\237\345\272\246", nullptr));
        jointShareAccelUnitLabel->setText(QApplication::translate("MainWindow", "\302\260/s\302\262", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\202\345\212\240\351\200\237\345\272\246", nullptr));
        jointShareAccelLineEdit->setText(QApplication::translate("MainWindow", "80.00", nullptr));
        jointShareSpeedUnitLabel->setText(QApplication::translate("MainWindow", "\302\260/s", nullptr));
        jointShareSpeedLineEdit->setText(QApplication::translate("MainWindow", "60.00", nullptr));
        setShareToolCheckBox->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\267\245\345\205\267\344\270\272", nullptr));
        pointTypeComboBox->setItemText(0, QApplication::translate("MainWindow", "\347\273\235\345\257\271\344\275\215\347\275\256", nullptr));
        pointTypeComboBox->setItemText(1, QApplication::translate("MainWindow", "\347\233\270\345\257\271\344\275\215\347\275\256", nullptr));
        pointTypeComboBox->setItemText(2, QApplication::translate("MainWindow", "\345\217\257\345\217\230\344\275\215\347\275\256", nullptr));

        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\267\257\347\202\271\350\256\276\347\275\256", nullptr));
        move2PointButton->setText(QApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272\347\247\273\345\212\250\345\210\260\346\255\244\347\202\271", nullptr));
        modifyPointButton->setText(QApplication::translate("MainWindow", "\346\233\264\346\224\271\346\255\244\350\267\257\345\276\204\347\202\271", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\346\214\211\350\265\267\345\247\213\347\202\271\345\222\214\347\273\210\346\255\242\347\202\271\344\271\213\351\227\264\347\232\204\347\233\270\345\257\271\344\275\215\347\275\256\345\267\256\345\274\202\350\277\233\350\241\214\350\277\220\345\212\250\343\200\202", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\347\233\270\345\257\271\345\205\263\347\263\273", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "\344\277\257\344\273\260\350\247\222\345\272\246\357\274\232", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "X:", nullptr));
        pointDeltaY_Label->setText(QApplication::translate("MainWindow", "0.0mm", nullptr));
        pointPthchAngleLabel->setText(QApplication::translate("MainWindow", "0\302\260", nullptr));
        pointDeltaZ_Label->setText(QApplication::translate("MainWindow", "0.0mm", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        pointDeltaX_Label->setText(QApplication::translate("MainWindow", "0.0mm", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\350\267\235\347\246\273\357\274\232", nullptr));
        pointDistanceLabel->setText(QApplication::translate("MainWindow", "0.0mm", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\201\217\350\210\252\350\247\222\345\272\246\357\274\232", nullptr));
        pointYawAngleLabel->setText(QApplication::translate("MainWindow", "0\302\260", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\350\265\267\345\247\213\347\202\271", nullptr));
        setStartPointButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\255\244\347\202\271", nullptr));
        move2StartPointButton->setText(QApplication::translate("MainWindow", "\347\247\273\345\212\250\345\210\260\346\255\244\347\202\271", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\347\273\210\346\255\242\347\202\271", nullptr));
        setGoalPointButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\255\244\347\202\271", nullptr));
        move2GoalPointButton->setText(QApplication::translate("MainWindow", "\347\247\273\345\212\250\345\210\260\346\255\244\347\202\271", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "\345\260\206\346\234\272\345\231\250\344\272\272\347\247\273\345\212\250\350\207\263\345\217\230\351\207\217\344\275\215\347\275\256", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\345\217\230\351\207\217\357\274\232", nullptr));
        pointVarComboBox->setItemText(0, QApplication::translate("MainWindow", "Var_1", nullptr));

        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        noFilletButton->setText(QApplication::translate("MainWindow", "\346\227\240\345\234\206\350\247\222", nullptr));
        filletButton->setText(QApplication::translate("MainWindow", "\345\234\206\350\247\222\345\215\212\345\276\204", nullptr));
        filletRadiusDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", "mm", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\351\253\230\347\272\247\345\217\202\346\225\260", nullptr));
        jointSpeedUnitLabel->setText(QApplication::translate("MainWindow", "\302\260/s", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\202\345\212\240\351\200\237\345\272\246", nullptr));
        jointSpeedLineEdit->setText(QApplication::translate("MainWindow", "60.00", nullptr));
        useShareSettingCheckBox->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\345\205\261\344\272\253\345\217\202\346\225\260", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\202\351\200\237\345\272\246", nullptr));
        jointAccelLineEdit->setText(QApplication::translate("MainWindow", "80.00", nullptr));
        jointAccelUnitLabel->setText(QApplication::translate("MainWindow", "\302\260/s\302\262", nullptr));
        addPointPrevButton->setText(QApplication::translate("MainWindow", "\345\234\250\346\255\244\345\211\215\346\267\273\345\212\240\350\267\257\345\276\204\347\202\271", nullptr));
        addPointNextButton->setText(QApplication::translate("MainWindow", "\345\234\250\346\255\244\345\220\216\346\267\273\345\212\240\350\267\257\345\276\204\347\202\271", nullptr));
        deletePointButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\346\255\244\350\267\257\345\276\204\347\202\271", nullptr));
        noWaitButton->setText(QApplication::translate("MainWindow", "\344\270\215\347\255\211\345\276\205", nullptr));
        waitTimeButton->setText(QApplication::translate("MainWindow", "\347\255\211\345\276\205", nullptr));
        pauseTimeSpinBox->setSuffix(QApplication::translate("MainWindow", "ms", nullptr));
        waitDigitalButton->setText(QApplication::translate("MainWindow", "\347\255\211\345\276\205\346\225\260\345\255\227\350\276\223\345\205\245", nullptr));
        digitalInputComboBox->setItemText(0, QApplication::translate("MainWindow", "D_IN_1", nullptr));

        digitalInLevelComboBox->setItemText(0, QApplication::translate("MainWindow", "\344\275\216", nullptr));
        digitalInLevelComboBox->setItemText(1, QApplication::translate("MainWindow", "\351\253\230", nullptr));

        waitAnalogButton->setText(QApplication::translate("MainWindow", "\347\255\211\345\276\205\346\250\241\346\213\237\350\276\223\345\205\245", nullptr));
        analogInputComboBox->setItemText(0, QApplication::translate("MainWindow", "A_IN_1", nullptr));

        analogCompareComboBox->setItemText(0, QApplication::translate("MainWindow", "\342\211\245", nullptr));
        analogCompareComboBox->setItemText(1, QApplication::translate("MainWindow", ">", nullptr));
        analogCompareComboBox->setItemText(2, QApplication::translate("MainWindow", "=", nullptr));
        analogCompareComboBox->setItemText(3, QApplication::translate("MainWindow", "<", nullptr));
        analogCompareComboBox->setItemText(4, QApplication::translate("MainWindow", "\342\211\244", nullptr));

        analogInLevelSpinBox->setSuffix(QApplication::translate("MainWindow", "mA", nullptr));
        waitFxButton->setText(QApplication::translate("MainWindow", "\347\255\211\345\276\205\350\241\250\350\276\276\345\274\217\344\270\272\347\234\237", nullptr));
        waitFxLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "f(x)", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\346\273\241\350\266\263\344\270\213\345\210\227\346\235\241\344\273\266\346\227\266\346\234\272\345\231\250\344\272\272\346\211\247\350\241\214\344\270\213\344\270\200\345\212\250\344\275\234\357\274\232", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "\345\234\250\346\255\244\345\244\204\344\270\255\346\255\242\347\250\213\345\272\217\343\200\202", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\217\230\351\207\217\350\256\276\347\275\256", nullptr));
        setDigitalOutputRadioButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\225\260\345\255\227\350\276\223\345\207\272", nullptr));
        digitalOutputComboBox->setItemText(0, QApplication::translate("MainWindow", "D_OUT_1", nullptr));

        digitalOutLevelComboBox->setItemText(0, QApplication::translate("MainWindow", "\344\275\216", nullptr));
        digitalOutLevelComboBox->setItemText(1, QApplication::translate("MainWindow", "\351\253\230", nullptr));
        digitalOutLevelComboBox->setItemText(2, QApplication::translate("MainWindow", "\345\205\263", nullptr));

        noSetRadioButton->setText(QApplication::translate("MainWindow", "\346\227\240\345\212\250\344\275\234", nullptr));
        setDigitalOutputFxRadioButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\225\260\345\255\227\350\276\223\345\207\272", nullptr));
        digitalOutputFxComboBox->setItemText(0, QApplication::translate("MainWindow", "D_OUT_1", nullptr));

        digitalOutFxLineEdit->setInputMask(QString());
        digitalOutFxLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "f(x)", nullptr));
        setAnalogOutputRadioButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\250\241\346\213\237\350\276\223\345\207\272", nullptr));
        analogOutputComboBox->setItemText(0, QApplication::translate("MainWindow", "A_OUT_1", nullptr));

        analogOutLevelSpinBox->setSuffix(QApplication::translate("MainWindow", "mA", nullptr));
        setAnalogOutputFxRadioButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\250\241\346\213\237\350\276\223\345\207\272", nullptr));
        analogOutputFxComboBox->setItemText(0, QApplication::translate("MainWindow", "A_OUT_1", nullptr));

        setAnalogOutputFxLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "f(x)", nullptr));
        setVarRadioButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\230\351\207\217\345\200\274\344\270\272", nullptr));
        varComboBox->setItemText(0, QApplication::translate("MainWindow", "Var1", nullptr));

        varFxlineEdit->setPlaceholderText(QApplication::translate("MainWindow", "f(x)", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\250\213\345\272\217\346\211\247\350\241\214\345\210\260\346\255\244\345\244\204\347\232\204\345\212\250\344\275\234\345\222\214\345\217\202\346\225\260", nullptr));
        setToolCheckBox->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\267\245\345\205\267\344\270\272", nullptr));
        setLoadCheckBox->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\275\275\350\215\267\344\270\272", nullptr));
        loadDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", "kg", nullptr));
        popMsgButton->setText(QApplication::translate("MainWindow", "\346\266\210\346\201\257", nullptr));
        stopWithPopCheckBox->setText(QApplication::translate("MainWindow", "\345\274\271\345\207\272\346\255\244\347\252\227\345\217\243\346\227\266\347\273\210\346\255\242\347\250\213\345\272\217", nullptr));
        popErrorButton->setText(QApplication::translate("MainWindow", "\351\224\231\350\257\257", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\345\274\271\345\207\272\347\252\227\345\217\243\347\261\273\345\236\213\357\274\232", nullptr));
        popWarningButton->setText(QApplication::translate("MainWindow", "\350\255\246\345\221\212", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\345\234\250\345\261\217\345\271\225\344\270\212\345\274\271\345\207\272\347\252\227\345\217\243\344\273\245\346\230\276\347\244\272\344\273\245\344\270\213\346\266\210\346\201\257\357\274\214\345\271\266\347\255\211\345\276\205\347\224\250\346\210\267\346\214\211\344\270\213\342\200\234\347\241\256\345\256\232\342\200\235\346\214\211\351\222\256\343\200\202", nullptr));
        previewButton->setText(QApplication::translate("MainWindow", "\351\242\204\350\247\210", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "\345\234\250\342\200\234\347\273\223\346\236\204\342\200\235\351\200\211\351\241\271\345\215\241\344\270\255\357\274\214\346\202\250\346\211\276\345\210\260\345\271\266\344\275\277\347\224\250\345\220\204\347\247\215\347\250\213\345\272\217\346\214\207\344\273\244\343\200\202", nullptr));
        jump2StructButton->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\204", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\263\250\351\207\212\357\274\232", nullptr));
        commandTabWidget->setTabText(commandTabWidget->indexOf(commandTab), QApplication::translate("MainWindow", "\345\221\275\344\273\244", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        addPopCommandButton->setText(QApplication::translate("MainWindow", "\345\274\271\345\207\272\347\252\227\345\217\243", nullptr));
        addWaitCommandButton->setText(QApplication::translate("MainWindow", "\347\255\211\345\276\205", nullptr));
        addSetCommandButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        addMoveCommandButton->setText(QApplication::translate("MainWindow", "\347\247\273\345\212\250", nullptr));
        addPointCommandButton->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204\347\202\271", nullptr));
        addStopCommandButton->setText(QApplication::translate("MainWindow", "\344\270\255\346\255\242", nullptr));
        addCommentButton->setText(QApplication::translate("MainWindow", "\346\263\250\351\207\212", nullptr));
        insertCommandTabWidget->setTabText(insertCommandTabWidget->indexOf(baseCommandTab), QApplication::translate("MainWindow", "\345\237\272\346\234\254", nullptr));
        insertCommandTabWidget->setTabText(insertCommandTabWidget->indexOf(advancedCommandTab), QApplication::translate("MainWindow", "\351\253\230\347\272\247", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "\347\250\213\345\272\217\347\273\223\346\236\204\347\274\226\350\276\221\345\231\250", nullptr));
        insertCommandNextRadioButton->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\345\210\260\344\271\213\345\220\216", nullptr));
        insertCommandPrevRadioButton->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\345\210\260\344\271\213\345\211\215", nullptr));
        label_35->setText(QString());
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        downCommandButton->setText(QApplication::translate("MainWindow", "\344\270\213\347\247\273", nullptr));
        copyCommandButton->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        upCommandButton->setText(QApplication::translate("MainWindow", "\344\270\212\347\247\273", nullptr));
        pasteCommandButton->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
        cutCommandButton->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
        deleteCommandButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        commandTabWidget->setTabText(commandTabWidget->indexOf(structTab), QApplication::translate("MainWindow", "\347\273\223\346\236\204", nullptr));
        mainTab->setTabText(mainTab->indexOf(programTab), QApplication::translate("MainWindow", "\347\274\226\347\250\213", nullptr));
        toolPositionBox->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267\347\211\271\345\276\201", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "X", nullptr));
        toolAngelLabel1->setText(QApplication::translate("MainWindow", "RY", nullptr));
        toolAngelLabel2->setText(QApplication::translate("MainWindow", "RZ", nullptr));
        toolRZ_UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        toolRX_UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        toolX_UnitLabel->setText(QApplication::translate("MainWindow", "mm", nullptr));
        toolY_UnitLabel->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Y", nullptr));
        toolRY_UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "Z", nullptr));
        toolZ_UnitLabel->setText(QApplication::translate("MainWindow", "mm", nullptr));
        toolAngelLabel0->setText(QApplication::translate("MainWindow", "RX", nullptr));
        toolAngelLabel3->setText(QApplication::translate("MainWindow", "A", nullptr));
        toolRW_UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        changeToolPositionButton->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        toolPositionTypeComboBox->setItemText(0, QApplication::translate("MainWindow", "\346\227\213\350\275\254\347\237\242\351\207\217", nullptr));
        toolPositionTypeComboBox->setItemText(1, QApplication::translate("MainWindow", "\345\233\233\345\205\203\346\225\260", nullptr));
        toolPositionTypeComboBox->setItemText(2, QApplication::translate("MainWindow", "RPY", nullptr));

        jointMoveBox->setTitle(QApplication::translate("MainWindow", "\347\247\273\345\212\250\345\205\263\350\212\202", nullptr));
        joint4Label->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\2024", nullptr));
        joint3Label->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\2023", nullptr));
        joint5Label->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\2025", nullptr));
        joint0Label->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\2020", nullptr));
        joint2Label->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\2022", nullptr));
        joint1Label->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\2021", nullptr));
        joint0UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        joint1UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        joint2UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        joint3UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        joint4UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        joint5UnitLabel->setText(QApplication::translate("MainWindow", "\302\260", nullptr));
        resetPositionButton->setText(QApplication::translate("MainWindow", "\345\275\222\351\233\266", nullptr));
        mainTab->setTabText(mainTab->indexOf(moveTab), QApplication::translate("MainWindow", "\347\247\273\345\212\250", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menuSetting->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
