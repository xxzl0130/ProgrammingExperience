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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionOpenJson;
    QAction *actionOpenStylesheet;
    QAction *actionSave;
    QAction *actionSaveAs;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *openButton;
    QPushButton *stylesheetButton;
    QPushButton *addButton;
    QPushButton *delButton;
    QPushButton *clearButton;
    QPushButton *saveButton;
    QPushButton *saveAsButton;
    QTableWidget *parameterTable;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(600, 402);
        actionOpenJson = new QAction(MainWindowClass);
        actionOpenJson->setObjectName(QStringLiteral("actionOpenJson"));
        actionOpenStylesheet = new QAction(MainWindowClass);
        actionOpenStylesheet->setObjectName(QStringLiteral("actionOpenStylesheet"));
        actionSave = new QAction(MainWindowClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSaveAs = new QAction(MainWindowClass);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));

        verticalLayout->addWidget(openButton);

        stylesheetButton = new QPushButton(centralWidget);
        stylesheetButton->setObjectName(QStringLiteral("stylesheetButton"));

        verticalLayout->addWidget(stylesheetButton);

        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout->addWidget(addButton);

        delButton = new QPushButton(centralWidget);
        delButton->setObjectName(QStringLiteral("delButton"));

        verticalLayout->addWidget(delButton);

        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        verticalLayout->addWidget(clearButton);

        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        verticalLayout->addWidget(saveButton);

        saveAsButton = new QPushButton(centralWidget);
        saveAsButton->setObjectName(QStringLiteral("saveAsButton"));

        verticalLayout->addWidget(saveAsButton);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);

        parameterTable = new QTableWidget(centralWidget);
        parameterTable->setObjectName(QStringLiteral("parameterTable"));

        gridLayout_2->addWidget(parameterTable, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionOpenJson);
        menu->addAction(actionOpenStylesheet);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);

        retranslateUi(MainWindowClass);
        QObject::connect(openButton, SIGNAL(clicked()), MainWindowClass, SLOT(openJson()));
        QObject::connect(addButton, SIGNAL(clicked()), MainWindowClass, SLOT(addItem()));
        QObject::connect(delButton, SIGNAL(clicked()), MainWindowClass, SLOT(deleteItem()));
        QObject::connect(clearButton, SIGNAL(clicked()), MainWindowClass, SLOT(clearItem()));
        QObject::connect(saveButton, SIGNAL(clicked()), MainWindowClass, SLOT(save()));
        QObject::connect(stylesheetButton, SIGNAL(clicked()), MainWindowClass, SLOT(openStylesheet()));
        QObject::connect(actionOpenJson, SIGNAL(triggered()), MainWindowClass, SLOT(openJson()));
        QObject::connect(actionOpenStylesheet, SIGNAL(triggered()), MainWindowClass, SLOT(openStylesheet()));
        QObject::connect(actionSave, SIGNAL(triggered()), MainWindowClass, SLOT(save()));
        QObject::connect(actionSaveAs, SIGNAL(triggered()), MainWindowClass, SLOT(saveAs()));
        QObject::connect(parameterTable, SIGNAL(cellChanged(int,int)), MainWindowClass, SLOT(contentChanged(int,int)));
        QObject::connect(saveAsButton, SIGNAL(clicked()), MainWindowClass, SLOT(saveAs()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "\345\217\202\346\225\260Json\346\226\207\344\273\266\347\224\237\346\210\220\345\231\250", nullptr));
        actionOpenJson->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200json", nullptr));
        actionOpenStylesheet->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200stylesheet", nullptr));
        actionSave->setText(QApplication::translate("MainWindowClass", "\344\277\235\345\255\230", nullptr));
        actionSaveAs->setText(QApplication::translate("MainWindowClass", "\345\217\246\345\255\230\344\270\272", nullptr));
        openButton->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200\n"
"JSON", nullptr));
        stylesheetButton->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200\n"
"stylesheet", nullptr));
        addButton->setText(QApplication::translate("MainWindowClass", "\346\267\273\345\212\240", nullptr));
        delButton->setText(QApplication::translate("MainWindowClass", "\345\210\240\351\231\244", nullptr));
        clearButton->setText(QApplication::translate("MainWindowClass", "\346\270\205\347\251\272", nullptr));
        saveButton->setText(QApplication::translate("MainWindowClass", "\344\277\235\345\255\230", nullptr));
        saveAsButton->setText(QApplication::translate("MainWindowClass", "\345\217\246\345\255\230\344\270\272", nullptr));
        menu->setTitle(QApplication::translate("MainWindowClass", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
