/********************************************************************************
** Form generated from reading UI file 'GroundStation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUNDSTATION_H
#define UI_GROUNDSTATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "LED.h"
#include "QtCharts/QChartView"

QT_BEGIN_NAMESPACE

class Ui_GroundStationClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWebEngineView *mapEngine;
    QHBoxLayout *horizontalLayout;
    QGroupBox *infoGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *systemTimeLabel;
    QLabel *runTimeLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *formationSetButton;
    QPushButton *stopButton;
    QPushButton *startButton;
    QPushButton *selectPathButton;
    QChartView *xyChartView;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *openChartsButton;
    QGroupBox *formationInfoGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *uavNoLabel2;
    QLabel *uavTimeLabel5;
    QLabel *uavNoLabel4;
    QLabel *uavNoLabel1;
    QLabel *uavTimeLabel2;
    QLabel *uavNoLabel9;
    QLabel *label;
    QLabel *uavNoLabel10;
    QLabel *uavErrorLabel10;
    QLabel *uavTimeLabel4;
    QLabel *uavTimeLabel8;
    LED *warningStateLed1;
    QLabel *uavErrorLabel8;
    QLabel *uavDistanceLabel8;
    QLabel *uavDistanceLabel3;
    QLabel *uavNoLabel6;
    QLabel *label_4;
    QLabel *uavTimeLabel10;
    QLabel *uavDistanceLabel6;
    QLabel *uavTimeLabel3;
    QLabel *uavErrorLabel4;
    QLabel *uavErrorLabel2;
    QLabel *uavDistanceLabel2;
    QLabel *uavDistanceLabel5;
    QLabel *uavErrorLabel7;
    QLabel *uavErrorLabel6;
    QLabel *label_2;
    QLabel *uavNoLabel7;
    QLabel *uavErrorLabel3;
    QLabel *uavErrorLabel5;
    QLabel *uavErrorLabel9;
    QLabel *uavNoLabel5;
    QLabel *uavDistanceLabel1;
    QLabel *label_3;
    QLabel *uavTimeLabel6;
    QLabel *uavDistanceLabel9;
    QLabel *uavDistanceLabel7;
    QLabel *uavNoLabel3;
    QLabel *uavErrorLabel1;
    QLabel *uavDistanceLabel10;
    QLabel *uavTimeLabel1;
    QLabel *uavDistanceLabel4;
    QLabel *uavTimeLabel9;
    QLabel *uavNoLabel8;
    QLabel *uavTimeLabel7;
    QLabel *linkStateLabel1;
    QLabel *linkStateLabel2;
    QLabel *linkStateLabel3;
    QLabel *linkStateLabel4;
    QLabel *linkStateLabel5;
    QLabel *linkStateLabel6;
    QLabel *linkStateLabel7;
    QLabel *linkStateLabel8;
    QLabel *linkStateLabel9;
    QLabel *linkStateLabel10;
    LED *warningStateLed2;
    LED *warningStateLed3;
    LED *warningStateLed4;
    LED *warningStateLed5;
    LED *warningStateLed6;
    LED *warningStateLed7;
    LED *warningStateLed8;
    LED *warningStateLed9;
    LED *warningStateLed10;

    void setupUi(QMainWindow *GroundStationClass)
    {
        if (GroundStationClass->objectName().isEmpty())
            GroundStationClass->setObjectName(QString::fromUtf8("GroundStationClass"));
        GroundStationClass->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/GroundStation/Resources/location.png"), QSize(), QIcon::Normal, QIcon::Off);
        GroundStationClass->setWindowIcon(icon);
        centralWidget = new QWidget(GroundStationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mapEngine = new QWebEngineView(centralWidget);
        mapEngine->setObjectName(QString::fromUtf8("mapEngine"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapEngine->sizePolicy().hasHeightForWidth());
        mapEngine->setSizePolicy(sizePolicy);
        mapEngine->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout->addWidget(mapEngine, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        infoGroupBox = new QGroupBox(centralWidget);
        infoGroupBox->setObjectName(QString::fromUtf8("infoGroupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        infoGroupBox->setFont(font);
        gridLayout_2 = new QGridLayout(infoGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        systemTimeLabel = new QLabel(infoGroupBox);
        systemTimeLabel->setObjectName(QString::fromUtf8("systemTimeLabel"));
        systemTimeLabel->setFont(font);

        gridLayout_2->addWidget(systemTimeLabel, 0, 0, 1, 1);

        runTimeLabel = new QLabel(infoGroupBox);
        runTimeLabel->setObjectName(QString::fromUtf8("runTimeLabel"));
        runTimeLabel->setFont(font);

        gridLayout_2->addWidget(runTimeLabel, 1, 0, 1, 1);


        horizontalLayout->addWidget(infoGroupBox);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        formationSetButton = new QPushButton(groupBox);
        formationSetButton->setObjectName(QString::fromUtf8("formationSetButton"));
        formationSetButton->setEnabled(false);

        gridLayout_3->addWidget(formationSetButton, 1, 1, 1, 1);

        stopButton = new QPushButton(groupBox);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);

        gridLayout_3->addWidget(stopButton, 0, 1, 1, 1);

        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setEnabled(false);
        startButton->setLayoutDirection(Qt::RightToLeft);
        startButton->setCheckable(false);
        startButton->setChecked(false);
        startButton->setAutoExclusive(false);

        gridLayout_3->addWidget(startButton, 0, 0, 1, 1);

        selectPathButton = new QPushButton(groupBox);
        selectPathButton->setObjectName(QString::fromUtf8("selectPathButton"));
        selectPathButton->setEnabled(false);

        gridLayout_3->addWidget(selectPathButton, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        xyChartView = new QChartView(centralWidget);
        xyChartView->setObjectName(QString::fromUtf8("xyChartView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xyChartView->sizePolicy().hasHeightForWidth());
        xyChartView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(xyChartView, 1, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        openChartsButton = new QPushButton(centralWidget);
        openChartsButton->setObjectName(QString::fromUtf8("openChartsButton"));
        openChartsButton->setFont(font);

        gridLayout_4->addWidget(openChartsButton, 0, 1, 1, 1);

        formationInfoGroupBox = new QGroupBox(centralWidget);
        formationInfoGroupBox->setObjectName(QString::fromUtf8("formationInfoGroupBox"));
        formationInfoGroupBox->setFont(font);
        gridLayout_5 = new QGridLayout(formationInfoGroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        uavNoLabel2 = new QLabel(formationInfoGroupBox);
        uavNoLabel2->setObjectName(QString::fromUtf8("uavNoLabel2"));
        uavNoLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel2, 2, 2, 1, 1);

        uavTimeLabel5 = new QLabel(formationInfoGroupBox);
        uavTimeLabel5->setObjectName(QString::fromUtf8("uavTimeLabel5"));
        uavTimeLabel5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel5, 5, 8, 1, 1);

        uavNoLabel4 = new QLabel(formationInfoGroupBox);
        uavNoLabel4->setObjectName(QString::fromUtf8("uavNoLabel4"));
        uavNoLabel4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel4, 4, 2, 1, 1);

        uavNoLabel1 = new QLabel(formationInfoGroupBox);
        uavNoLabel1->setObjectName(QString::fromUtf8("uavNoLabel1"));
        uavNoLabel1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel1, 1, 2, 1, 1);

        uavTimeLabel2 = new QLabel(formationInfoGroupBox);
        uavTimeLabel2->setObjectName(QString::fromUtf8("uavTimeLabel2"));
        uavTimeLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel2, 2, 8, 1, 1);

        uavNoLabel9 = new QLabel(formationInfoGroupBox);
        uavNoLabel9->setObjectName(QString::fromUtf8("uavNoLabel9"));
        uavNoLabel9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel9, 9, 2, 1, 1);

        label = new QLabel(formationInfoGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label, 0, 2, 1, 1);

        uavNoLabel10 = new QLabel(formationInfoGroupBox);
        uavNoLabel10->setObjectName(QString::fromUtf8("uavNoLabel10"));
        uavNoLabel10->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel10, 10, 2, 1, 1);

        uavErrorLabel10 = new QLabel(formationInfoGroupBox);
        uavErrorLabel10->setObjectName(QString::fromUtf8("uavErrorLabel10"));
        uavErrorLabel10->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel10, 10, 4, 1, 1);

        uavTimeLabel4 = new QLabel(formationInfoGroupBox);
        uavTimeLabel4->setObjectName(QString::fromUtf8("uavTimeLabel4"));
        uavTimeLabel4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel4, 4, 8, 1, 1);

        uavTimeLabel8 = new QLabel(formationInfoGroupBox);
        uavTimeLabel8->setObjectName(QString::fromUtf8("uavTimeLabel8"));
        uavTimeLabel8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel8, 8, 8, 1, 1);

        warningStateLed1 = new LED(formationInfoGroupBox);
        warningStateLed1->setObjectName(QString::fromUtf8("warningStateLed1"));
        warningStateLed1->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed1, 1, 1, 1, 1);

        uavErrorLabel8 = new QLabel(formationInfoGroupBox);
        uavErrorLabel8->setObjectName(QString::fromUtf8("uavErrorLabel8"));
        uavErrorLabel8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel8, 8, 4, 1, 1);

        uavDistanceLabel8 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel8->setObjectName(QString::fromUtf8("uavDistanceLabel8"));
        uavDistanceLabel8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel8, 8, 6, 1, 1);

        uavDistanceLabel3 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel3->setObjectName(QString::fromUtf8("uavDistanceLabel3"));
        uavDistanceLabel3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel3, 3, 6, 1, 1);

        uavNoLabel6 = new QLabel(formationInfoGroupBox);
        uavNoLabel6->setObjectName(QString::fromUtf8("uavNoLabel6"));
        uavNoLabel6->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel6, 6, 2, 1, 1);

        label_4 = new QLabel(formationInfoGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_4, 0, 8, 1, 1);

        uavTimeLabel10 = new QLabel(formationInfoGroupBox);
        uavTimeLabel10->setObjectName(QString::fromUtf8("uavTimeLabel10"));
        uavTimeLabel10->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel10, 10, 8, 1, 1);

        uavDistanceLabel6 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel6->setObjectName(QString::fromUtf8("uavDistanceLabel6"));
        uavDistanceLabel6->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel6, 6, 6, 1, 1);

        uavTimeLabel3 = new QLabel(formationInfoGroupBox);
        uavTimeLabel3->setObjectName(QString::fromUtf8("uavTimeLabel3"));
        uavTimeLabel3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel3, 3, 8, 1, 1);

        uavErrorLabel4 = new QLabel(formationInfoGroupBox);
        uavErrorLabel4->setObjectName(QString::fromUtf8("uavErrorLabel4"));
        uavErrorLabel4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel4, 4, 4, 1, 1);

        uavErrorLabel2 = new QLabel(formationInfoGroupBox);
        uavErrorLabel2->setObjectName(QString::fromUtf8("uavErrorLabel2"));
        uavErrorLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel2, 2, 4, 1, 1);

        uavDistanceLabel2 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel2->setObjectName(QString::fromUtf8("uavDistanceLabel2"));
        uavDistanceLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel2, 2, 6, 1, 1);

        uavDistanceLabel5 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel5->setObjectName(QString::fromUtf8("uavDistanceLabel5"));
        uavDistanceLabel5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel5, 5, 6, 1, 1);

        uavErrorLabel7 = new QLabel(formationInfoGroupBox);
        uavErrorLabel7->setObjectName(QString::fromUtf8("uavErrorLabel7"));
        uavErrorLabel7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel7, 7, 4, 1, 1);

        uavErrorLabel6 = new QLabel(formationInfoGroupBox);
        uavErrorLabel6->setObjectName(QString::fromUtf8("uavErrorLabel6"));
        uavErrorLabel6->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel6, 6, 4, 1, 1);

        label_2 = new QLabel(formationInfoGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 0, 4, 1, 1);

        uavNoLabel7 = new QLabel(formationInfoGroupBox);
        uavNoLabel7->setObjectName(QString::fromUtf8("uavNoLabel7"));
        uavNoLabel7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel7, 7, 2, 1, 1);

        uavErrorLabel3 = new QLabel(formationInfoGroupBox);
        uavErrorLabel3->setObjectName(QString::fromUtf8("uavErrorLabel3"));
        uavErrorLabel3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel3, 3, 4, 1, 1);

        uavErrorLabel5 = new QLabel(formationInfoGroupBox);
        uavErrorLabel5->setObjectName(QString::fromUtf8("uavErrorLabel5"));
        uavErrorLabel5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel5, 5, 4, 1, 1);

        uavErrorLabel9 = new QLabel(formationInfoGroupBox);
        uavErrorLabel9->setObjectName(QString::fromUtf8("uavErrorLabel9"));
        uavErrorLabel9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel9, 9, 4, 1, 1);

        uavNoLabel5 = new QLabel(formationInfoGroupBox);
        uavNoLabel5->setObjectName(QString::fromUtf8("uavNoLabel5"));
        uavNoLabel5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel5, 5, 2, 1, 1);

        uavDistanceLabel1 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel1->setObjectName(QString::fromUtf8("uavDistanceLabel1"));
        uavDistanceLabel1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel1, 1, 6, 1, 1);

        label_3 = new QLabel(formationInfoGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 6, 1, 1);

        uavTimeLabel6 = new QLabel(formationInfoGroupBox);
        uavTimeLabel6->setObjectName(QString::fromUtf8("uavTimeLabel6"));
        uavTimeLabel6->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel6, 6, 8, 1, 1);

        uavDistanceLabel9 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel9->setObjectName(QString::fromUtf8("uavDistanceLabel9"));
        uavDistanceLabel9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel9, 9, 6, 1, 1);

        uavDistanceLabel7 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel7->setObjectName(QString::fromUtf8("uavDistanceLabel7"));
        uavDistanceLabel7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel7, 7, 6, 1, 1);

        uavNoLabel3 = new QLabel(formationInfoGroupBox);
        uavNoLabel3->setObjectName(QString::fromUtf8("uavNoLabel3"));
        uavNoLabel3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel3, 3, 2, 1, 1);

        uavErrorLabel1 = new QLabel(formationInfoGroupBox);
        uavErrorLabel1->setObjectName(QString::fromUtf8("uavErrorLabel1"));
        uavErrorLabel1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavErrorLabel1, 1, 4, 1, 1);

        uavDistanceLabel10 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel10->setObjectName(QString::fromUtf8("uavDistanceLabel10"));
        uavDistanceLabel10->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel10, 10, 6, 1, 1);

        uavTimeLabel1 = new QLabel(formationInfoGroupBox);
        uavTimeLabel1->setObjectName(QString::fromUtf8("uavTimeLabel1"));
        uavTimeLabel1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel1, 1, 8, 1, 1);

        uavDistanceLabel4 = new QLabel(formationInfoGroupBox);
        uavDistanceLabel4->setObjectName(QString::fromUtf8("uavDistanceLabel4"));
        uavDistanceLabel4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavDistanceLabel4, 4, 6, 1, 1);

        uavTimeLabel9 = new QLabel(formationInfoGroupBox);
        uavTimeLabel9->setObjectName(QString::fromUtf8("uavTimeLabel9"));
        uavTimeLabel9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel9, 9, 8, 1, 1);

        uavNoLabel8 = new QLabel(formationInfoGroupBox);
        uavNoLabel8->setObjectName(QString::fromUtf8("uavNoLabel8"));
        uavNoLabel8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavNoLabel8, 8, 2, 1, 1);

        uavTimeLabel7 = new QLabel(formationInfoGroupBox);
        uavTimeLabel7->setObjectName(QString::fromUtf8("uavTimeLabel7"));
        uavTimeLabel7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(uavTimeLabel7, 7, 8, 1, 1);

        linkStateLabel1 = new QLabel(formationInfoGroupBox);
        linkStateLabel1->setObjectName(QString::fromUtf8("linkStateLabel1"));
        linkStateLabel1->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel1, 1, 3, 1, 1);

        linkStateLabel2 = new QLabel(formationInfoGroupBox);
        linkStateLabel2->setObjectName(QString::fromUtf8("linkStateLabel2"));
        linkStateLabel2->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel2, 2, 3, 1, 1);

        linkStateLabel3 = new QLabel(formationInfoGroupBox);
        linkStateLabel3->setObjectName(QString::fromUtf8("linkStateLabel3"));
        linkStateLabel3->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel3, 3, 3, 1, 1);

        linkStateLabel4 = new QLabel(formationInfoGroupBox);
        linkStateLabel4->setObjectName(QString::fromUtf8("linkStateLabel4"));
        linkStateLabel4->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel4, 4, 3, 1, 1);

        linkStateLabel5 = new QLabel(formationInfoGroupBox);
        linkStateLabel5->setObjectName(QString::fromUtf8("linkStateLabel5"));
        linkStateLabel5->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel5, 5, 3, 1, 1);

        linkStateLabel6 = new QLabel(formationInfoGroupBox);
        linkStateLabel6->setObjectName(QString::fromUtf8("linkStateLabel6"));
        linkStateLabel6->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel6, 6, 3, 1, 1);

        linkStateLabel7 = new QLabel(formationInfoGroupBox);
        linkStateLabel7->setObjectName(QString::fromUtf8("linkStateLabel7"));
        linkStateLabel7->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel7, 7, 3, 1, 1);

        linkStateLabel8 = new QLabel(formationInfoGroupBox);
        linkStateLabel8->setObjectName(QString::fromUtf8("linkStateLabel8"));
        linkStateLabel8->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel8, 8, 3, 1, 1);

        linkStateLabel9 = new QLabel(formationInfoGroupBox);
        linkStateLabel9->setObjectName(QString::fromUtf8("linkStateLabel9"));
        linkStateLabel9->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel9, 9, 3, 1, 1);

        linkStateLabel10 = new QLabel(formationInfoGroupBox);
        linkStateLabel10->setObjectName(QString::fromUtf8("linkStateLabel10"));
        linkStateLabel10->setPixmap(QPixmap(QString::fromUtf8(":/GroundStation/Resources/link24.png")));

        gridLayout_5->addWidget(linkStateLabel10, 10, 3, 1, 1);

        warningStateLed2 = new LED(formationInfoGroupBox);
        warningStateLed2->setObjectName(QString::fromUtf8("warningStateLed2"));
        warningStateLed2->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed2, 2, 1, 1, 1);

        warningStateLed3 = new LED(formationInfoGroupBox);
        warningStateLed3->setObjectName(QString::fromUtf8("warningStateLed3"));
        warningStateLed3->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed3, 3, 1, 1, 1);

        warningStateLed4 = new LED(formationInfoGroupBox);
        warningStateLed4->setObjectName(QString::fromUtf8("warningStateLed4"));
        warningStateLed4->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed4, 4, 1, 1, 1);

        warningStateLed5 = new LED(formationInfoGroupBox);
        warningStateLed5->setObjectName(QString::fromUtf8("warningStateLed5"));
        warningStateLed5->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed5, 5, 1, 1, 1);

        warningStateLed6 = new LED(formationInfoGroupBox);
        warningStateLed6->setObjectName(QString::fromUtf8("warningStateLed6"));
        warningStateLed6->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed6, 6, 1, 1, 1);

        warningStateLed7 = new LED(formationInfoGroupBox);
        warningStateLed7->setObjectName(QString::fromUtf8("warningStateLed7"));
        warningStateLed7->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed7, 7, 1, 1, 1);

        warningStateLed8 = new LED(formationInfoGroupBox);
        warningStateLed8->setObjectName(QString::fromUtf8("warningStateLed8"));
        warningStateLed8->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed8, 8, 1, 1, 1);

        warningStateLed9 = new LED(formationInfoGroupBox);
        warningStateLed9->setObjectName(QString::fromUtf8("warningStateLed9"));
        warningStateLed9->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed9, 9, 1, 1, 1);

        warningStateLed10 = new LED(formationInfoGroupBox);
        warningStateLed10->setObjectName(QString::fromUtf8("warningStateLed10"));
        warningStateLed10->setColor(QColor(0, 255, 0));

        gridLayout_5->addWidget(warningStateLed10, 10, 1, 1, 1);


        gridLayout_4->addWidget(formationInfoGroupBox, 1, 0, 1, 2);


        gridLayout->addLayout(gridLayout_4, 0, 1, 1, 1);

        gridLayout->setRowStretch(0, 3);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);
        GroundStationClass->setCentralWidget(centralWidget);

        retranslateUi(GroundStationClass);

        QMetaObject::connectSlotsByName(GroundStationClass);
    } // setupUi

    void retranslateUi(QMainWindow *GroundStationClass)
    {
        GroundStationClass->setWindowTitle(QApplication::translate("GroundStationClass", "\345\234\260\351\235\242\347\253\231", nullptr));
        infoGroupBox->setTitle(QApplication::translate("GroundStationClass", "\344\277\241\346\201\257", nullptr));
        systemTimeLabel->setText(QApplication::translate("GroundStationClass", "\347\263\273\347\273\237\346\227\266\351\227\264\357\274\2322019/1/1 00:00:00", nullptr));
        runTimeLabel->setText(QApplication::translate("GroundStationClass", "\350\277\220\350\241\214\346\227\266\351\227\264\357\274\23200:00:00.000", nullptr));
        groupBox->setTitle(QApplication::translate("GroundStationClass", "\346\216\247\345\210\266", nullptr));
        formationSetButton->setText(QApplication::translate("GroundStationClass", "\347\274\226\351\230\237\350\256\276\347\275\256", nullptr));
        stopButton->setText(QApplication::translate("GroundStationClass", "\346\232\202\345\201\234", nullptr));
        startButton->setText(QApplication::translate("GroundStationClass", "\345\274\200\345\247\213", nullptr));
        selectPathButton->setText(QApplication::translate("GroundStationClass", "\351\200\211\345\217\226\350\267\257\345\276\204", nullptr));
        openChartsButton->setText(QApplication::translate("GroundStationClass", "\346\211\223\345\274\200\346\225\260\346\215\256\347\252\227\345\217\243", nullptr));
        formationInfoGroupBox->setTitle(QApplication::translate("GroundStationClass", "\347\274\226\351\230\237\344\277\241\346\201\257", nullptr));
        uavNoLabel2->setText(QApplication::translate("GroundStationClass", "2", nullptr));
        uavTimeLabel5->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavNoLabel4->setText(QApplication::translate("GroundStationClass", "4", nullptr));
        uavNoLabel1->setText(QApplication::translate("GroundStationClass", "1", nullptr));
        uavTimeLabel2->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavNoLabel9->setText(QApplication::translate("GroundStationClass", "9", nullptr));
        label->setText(QApplication::translate("GroundStationClass", "\347\274\226\345\217\267", nullptr));
        uavNoLabel10->setText(QApplication::translate("GroundStationClass", "10", nullptr));
        uavErrorLabel10->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavTimeLabel4->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavTimeLabel8->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavErrorLabel8->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel8->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel3->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavNoLabel6->setText(QApplication::translate("GroundStationClass", "6", nullptr));
        label_4->setText(QApplication::translate("GroundStationClass", "\351\242\204\347\225\231\346\227\266\351\227\264\n"
"i:t(s)", nullptr));
        uavTimeLabel10->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel6->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavTimeLabel3->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavErrorLabel4->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavErrorLabel2->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel2->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel5->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavErrorLabel7->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavErrorLabel6->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        label_2->setText(QApplication::translate("GroundStationClass", "\347\274\226\351\230\237\345\201\217\345\267\256\n"
"(m)", nullptr));
        uavNoLabel7->setText(QApplication::translate("GroundStationClass", "7", nullptr));
        uavErrorLabel3->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavErrorLabel5->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavErrorLabel9->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavNoLabel5->setText(QApplication::translate("GroundStationClass", "5", nullptr));
        uavDistanceLabel1->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        label_3->setText(QApplication::translate("GroundStationClass", "\346\234\200\350\277\221\350\267\235\347\246\273\n"
"i:R,H(m)", nullptr));
        uavTimeLabel6->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel9->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel7->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavNoLabel3->setText(QApplication::translate("GroundStationClass", "3", nullptr));
        uavErrorLabel1->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel10->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavTimeLabel1->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavDistanceLabel4->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavTimeLabel9->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        uavNoLabel8->setText(QApplication::translate("GroundStationClass", "8", nullptr));
        uavTimeLabel7->setText(QApplication::translate("GroundStationClass", "0", nullptr));
        linkStateLabel1->setText(QString());
        linkStateLabel2->setText(QString());
        linkStateLabel3->setText(QString());
        linkStateLabel4->setText(QString());
        linkStateLabel5->setText(QString());
        linkStateLabel6->setText(QString());
        linkStateLabel7->setText(QString());
        linkStateLabel8->setText(QString());
        linkStateLabel9->setText(QString());
        linkStateLabel10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GroundStationClass: public Ui_GroundStationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUNDSTATION_H
