/********************************************************************************
** Form generated from reading UI file 'PeopleVsComputer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLEVSCOMPUTER_H
#define UI_PEOPLEVSCOMPUTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeopleVsComputer
{
public:
    QAction *actionBack;
    QAction *actionPeople;
    QAction *actionComputer;
    QAction *actionScreenshot;
    QAction *actionHome;
    QAction *actionNet;
    QAction *actionQuit_2;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_4;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PeopleVsComputer)
    {
        if (PeopleVsComputer->objectName().isEmpty())
            PeopleVsComputer->setObjectName(QString::fromUtf8("PeopleVsComputer"));
        PeopleVsComputer->resize(660, 640);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/gobang.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PeopleVsComputer->setWindowIcon(icon);
        actionBack = new QAction(PeopleVsComputer);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/image/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon1);
        actionPeople = new QAction(PeopleVsComputer);
        actionPeople->setObjectName(QString::fromUtf8("actionPeople"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/image/person.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPeople->setIcon(icon2);
        actionComputer = new QAction(PeopleVsComputer);
        actionComputer->setObjectName(QString::fromUtf8("actionComputer"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/image/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputer->setIcon(icon3);
        actionScreenshot = new QAction(PeopleVsComputer);
        actionScreenshot->setObjectName(QString::fromUtf8("actionScreenshot"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/image/screenshot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScreenshot->setIcon(icon4);
        actionHome = new QAction(PeopleVsComputer);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/image/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon5);
        actionNet = new QAction(PeopleVsComputer);
        actionNet->setObjectName(QString::fromUtf8("actionNet"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/image/net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNet->setIcon(icon6);
        actionQuit_2 = new QAction(PeopleVsComputer);
        actionQuit_2->setObjectName(QString::fromUtf8("actionQuit_2"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/image/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit_2->setIcon(icon7);
        centralwidget = new QWidget(PeopleVsComputer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PeopleVsComputer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PeopleVsComputer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_4 = new QMenu(menu);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_4->setIcon(icon8);
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        PeopleVsComputer->setMenuBar(menubar);
        statusbar = new QStatusBar(PeopleVsComputer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PeopleVsComputer->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(menu_4->menuAction());
        menu->addAction(actionHome);
        menu->addAction(actionQuit_2);
        menu_4->addAction(actionPeople);
        menu_4->addAction(actionComputer);
        menu_4->addAction(actionNet);
        menu_2->addAction(actionBack);
        menu_2->addAction(actionScreenshot);

        retranslateUi(PeopleVsComputer);

        QMetaObject::connectSlotsByName(PeopleVsComputer);
    } // setupUi

    void retranslateUi(QMainWindow *PeopleVsComputer)
    {
        PeopleVsComputer->setWindowTitle(QCoreApplication::translate("PeopleVsComputer", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        actionBack->setText(QCoreApplication::translate("PeopleVsComputer", "\346\202\224\346\243\213", nullptr));
        actionPeople->setText(QCoreApplication::translate("PeopleVsComputer", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        actionComputer->setText(QCoreApplication::translate("PeopleVsComputer", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        actionScreenshot->setText(QCoreApplication::translate("PeopleVsComputer", "\344\277\235\345\255\230\346\243\213\345\261\200", nullptr));
        actionHome->setText(QCoreApplication::translate("PeopleVsComputer", "\345\233\236\345\210\260\350\217\234\345\215\225", nullptr));
        actionNet->setText(QCoreApplication::translate("PeopleVsComputer", "\345\261\200\345\237\237\347\275\221\345\257\271\346\210\230", nullptr));
        actionQuit_2->setText(QCoreApplication::translate("PeopleVsComputer", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("PeopleVsComputer", "\345\274\200\345\247\213", nullptr));
        menu_4->setTitle(QCoreApplication::translate("PeopleVsComputer", "\346\226\260\346\270\270\346\210\217", nullptr));
        menu_2->setTitle(QCoreApplication::translate("PeopleVsComputer", "\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeopleVsComputer: public Ui_PeopleVsComputer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLEVSCOMPUTER_H
