/********************************************************************************
** Form generated from reading UI file 'Sondeur.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONDEUR_H
#define UI_SONDEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SondeurClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SondeurClass)
    {
        if (SondeurClass->objectName().isEmpty())
            SondeurClass->setObjectName(QString::fromUtf8("SondeurClass"));
        SondeurClass->resize(600, 400);
        menuBar = new QMenuBar(SondeurClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        SondeurClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SondeurClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SondeurClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SondeurClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SondeurClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SondeurClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SondeurClass->setStatusBar(statusBar);

        retranslateUi(SondeurClass);

        QMetaObject::connectSlotsByName(SondeurClass);
    } // setupUi

    void retranslateUi(QMainWindow *SondeurClass)
    {
        SondeurClass->setWindowTitle(QCoreApplication::translate("SondeurClass", "Sondeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SondeurClass: public Ui_SondeurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONDEUR_H
