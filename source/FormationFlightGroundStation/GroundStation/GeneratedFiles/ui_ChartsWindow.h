/********************************************************************************
** Form generated from reading UI file 'ChartsWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTSWINDOW_H
#define UI_CHARTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>
#include "QtCharts/QChartView"

QT_BEGIN_NAMESPACE

class Ui_ChartsWindow
{
public:
    QAction *saveAction;
    QAction *time0Action;
    QAction *time05Action;
    QAction *time1Action;
    QAction *time5Action;
    QAction *x5Action;
    QAction *x10Action;
    QAction *x30Action;
    QAction *x60Action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QChartView *heightChartView;
    QChartView *speedChartView;
    QChartView *phiChartView;
    QChartView *miuChartView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *ChartsWindow)
    {
        if (ChartsWindow->objectName().isEmpty())
            ChartsWindow->setObjectName(QString::fromUtf8("ChartsWindow"));
        ChartsWindow->resize(800, 600);
        QFont font;
        font.setPointSize(12);
        ChartsWindow->setFont(font);
        saveAction = new QAction(ChartsWindow);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        time0Action = new QAction(ChartsWindow);
        time0Action->setObjectName(QString::fromUtf8("time0Action"));
        time0Action->setCheckable(true);
        time05Action = new QAction(ChartsWindow);
        time05Action->setObjectName(QString::fromUtf8("time05Action"));
        time05Action->setCheckable(true);
        time1Action = new QAction(ChartsWindow);
        time1Action->setObjectName(QString::fromUtf8("time1Action"));
        time1Action->setCheckable(true);
        time5Action = new QAction(ChartsWindow);
        time5Action->setObjectName(QString::fromUtf8("time5Action"));
        x5Action = new QAction(ChartsWindow);
        x5Action->setObjectName(QString::fromUtf8("x5Action"));
        x5Action->setCheckable(true);
        x10Action = new QAction(ChartsWindow);
        x10Action->setObjectName(QString::fromUtf8("x10Action"));
        x10Action->setCheckable(true);
        x30Action = new QAction(ChartsWindow);
        x30Action->setObjectName(QString::fromUtf8("x30Action"));
        x30Action->setCheckable(true);
        x60Action = new QAction(ChartsWindow);
        x60Action->setObjectName(QString::fromUtf8("x60Action"));
        x60Action->setCheckable(true);
        centralwidget = new QWidget(ChartsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        heightChartView = new QChartView(centralwidget);
        heightChartView->setObjectName(QString::fromUtf8("heightChartView"));

        gridLayout->addWidget(heightChartView, 0, 0, 1, 1);

        speedChartView = new QChartView(centralwidget);
        speedChartView->setObjectName(QString::fromUtf8("speedChartView"));

        gridLayout->addWidget(speedChartView, 0, 1, 1, 1);

        phiChartView = new QChartView(centralwidget);
        phiChartView->setObjectName(QString::fromUtf8("phiChartView"));

        gridLayout->addWidget(phiChartView, 1, 0, 1, 1);

        miuChartView = new QChartView(centralwidget);
        miuChartView->setObjectName(QString::fromUtf8("miuChartView"));

        gridLayout->addWidget(miuChartView, 1, 1, 1, 1);

        ChartsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChartsWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        ChartsWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(saveAction);
        menu_2->addAction(time0Action);
        menu_2->addAction(time05Action);
        menu_2->addAction(time1Action);
        menu_2->addAction(time5Action);
        menu_3->addAction(x5Action);
        menu_3->addAction(x10Action);
        menu_3->addAction(x30Action);
        menu_3->addAction(x60Action);

        retranslateUi(ChartsWindow);

        QMetaObject::connectSlotsByName(ChartsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChartsWindow)
    {
        ChartsWindow->setWindowTitle(QApplication::translate("ChartsWindow", "\346\225\260\346\215\256\347\233\221\350\247\206", nullptr));
        saveAction->setText(QApplication::translate("ChartsWindow", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
        time0Action->setText(QApplication::translate("ChartsWindow", "\347\253\213\345\215\263", nullptr));
        time05Action->setText(QApplication::translate("ChartsWindow", "0.5\347\247\222", nullptr));
        time1Action->setText(QApplication::translate("ChartsWindow", "1\347\247\222", nullptr));
        time5Action->setText(QApplication::translate("ChartsWindow", "5\347\247\222", nullptr));
        x5Action->setText(QApplication::translate("ChartsWindow", "5\347\247\222", nullptr));
        x10Action->setText(QApplication::translate("ChartsWindow", "10\347\247\222", nullptr));
        x30Action->setText(QApplication::translate("ChartsWindow", "30\347\247\222", nullptr));
        x60Action->setText(QApplication::translate("ChartsWindow", "60\347\247\222", nullptr));
        menu->setTitle(QApplication::translate("ChartsWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("ChartsWindow", "\346\233\264\346\226\260\351\200\237\345\272\246", nullptr));
        menu_3->setTitle(QApplication::translate("ChartsWindow", "\346\250\252\350\275\264\351\225\277\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChartsWindow: public Ui_ChartsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTSWINDOW_H
