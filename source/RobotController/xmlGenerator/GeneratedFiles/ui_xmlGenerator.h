/********************************************************************************
** Form generated from reading UI file 'xmlGenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMLGENERATOR_H
#define UI_XMLGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xmlGeneratorClass
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionClear;
    QAction *actionSaveAs;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *xmlGeneratorClass)
    {
        if (xmlGeneratorClass->objectName().isEmpty())
            xmlGeneratorClass->setObjectName(QStringLiteral("xmlGeneratorClass"));
        xmlGeneratorClass->resize(592, 401);
        actionOpen = new QAction(xmlGeneratorClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(xmlGeneratorClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionClear = new QAction(xmlGeneratorClass);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionSaveAs = new QAction(xmlGeneratorClass);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        centralWidget = new QWidget(xmlGeneratorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        xmlGeneratorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(xmlGeneratorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 592, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        xmlGeneratorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(xmlGeneratorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        xmlGeneratorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(xmlGeneratorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        xmlGeneratorClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addAction(actionClear);

        retranslateUi(xmlGeneratorClass);
        QObject::connect(actionOpen, SIGNAL(triggered()), xmlGeneratorClass, SLOT(open()));
        QObject::connect(actionSave, SIGNAL(triggered()), xmlGeneratorClass, SLOT(save()));
        QObject::connect(actionClear, SIGNAL(triggered()), xmlGeneratorClass, SLOT(clear()));
        QObject::connect(actionSaveAs, SIGNAL(triggered()), xmlGeneratorClass, SLOT(saveAs()));

        QMetaObject::connectSlotsByName(xmlGeneratorClass);
    } // setupUi

    void retranslateUi(QMainWindow *xmlGeneratorClass)
    {
        xmlGeneratorClass->setWindowTitle(QApplication::translate("xmlGeneratorClass", "xmlGenerator", nullptr));
        actionOpen->setText(QApplication::translate("xmlGeneratorClass", "\346\211\223\345\274\200", nullptr));
        actionSave->setText(QApplication::translate("xmlGeneratorClass", "\344\277\235\345\255\230", nullptr));
        actionClear->setText(QApplication::translate("xmlGeneratorClass", "\346\270\205\347\251\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("xmlGeneratorClass", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveAs->setText(QApplication::translate("xmlGeneratorClass", "\345\217\246\345\255\230\344\270\272", nullptr));
        menu->setTitle(QApplication::translate("xmlGeneratorClass", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xmlGeneratorClass: public Ui_xmlGeneratorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMLGENERATOR_H
