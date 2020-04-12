/********************************************************************************
** Form generated from reading UI file 'GameWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QAction *actionQuit;
    QAction *actionBack;
    QAction *actionPeople;
    QAction *actionComputer;
    QAction *actionScreenshot;
    QAction *actionHome;
    QAction *actionNet;
    QWidget *centralwidget;
    QLabel *blackTime;
    QLabel *whiteTime;
    QLabel *label;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_4;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QString::fromUtf8("GameWindow"));
        GameWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/gobang.ico"), QSize(), QIcon::Normal, QIcon::Off);
        GameWindow->setWindowIcon(icon);
        GameWindow->setStyleSheet(QString::fromUtf8(""));
        actionQuit = new QAction(GameWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/image/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionBack = new QAction(GameWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/image/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon2);
        actionPeople = new QAction(GameWindow);
        actionPeople->setObjectName(QString::fromUtf8("actionPeople"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/image/person.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPeople->setIcon(icon3);
        actionComputer = new QAction(GameWindow);
        actionComputer->setObjectName(QString::fromUtf8("actionComputer"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/image/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputer->setIcon(icon4);
        actionScreenshot = new QAction(GameWindow);
        actionScreenshot->setObjectName(QString::fromUtf8("actionScreenshot"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/image/screenshot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScreenshot->setIcon(icon5);
        actionHome = new QAction(GameWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/image/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon6);
        actionNet = new QAction(GameWindow);
        actionNet->setObjectName(QString::fromUtf8("actionNet"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/image/net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNet->setIcon(icon7);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        blackTime = new QLabel(centralwidget);
        blackTime->setObjectName(QString::fromUtf8("blackTime"));
        blackTime->setGeometry(QRect(680, 490, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("OCR A Std"));
        font.setPointSize(20);
        blackTime->setFont(font);
        whiteTime = new QLabel(centralwidget);
        whiteTime->setObjectName(QString::fromUtf8("whiteTime"));
        whiteTime->setGeometry(QRect(680, 200, 101, 51));
        whiteTime->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(680, 160, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font1.setPointSize(20);
        label->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(680, 450, 81, 31));
        label_3->setFont(font1);
        GameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_4 = new QMenu(menu);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_4->setIcon(icon8);
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        GameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GameWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(menu_4->menuAction());
        menu->addAction(actionHome);
        menu->addAction(actionQuit);
        menu_4->addAction(actionPeople);
        menu_4->addAction(actionComputer);
        menu_4->addAction(actionNet);
        menu_2->addAction(actionBack);
        menu_2->addAction(actionScreenshot);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        actionQuit->setText(QCoreApplication::translate("GameWindow", "\351\200\200\345\207\272", nullptr));
        actionBack->setText(QCoreApplication::translate("GameWindow", "\346\202\224\346\243\213", nullptr));
        actionPeople->setText(QCoreApplication::translate("GameWindow", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        actionComputer->setText(QCoreApplication::translate("GameWindow", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        actionScreenshot->setText(QCoreApplication::translate("GameWindow", "\344\277\235\345\255\230\346\243\213\345\261\200", nullptr));
        actionHome->setText(QCoreApplication::translate("GameWindow", "\345\233\236\345\210\260\350\217\234\345\215\225", nullptr));
        actionNet->setText(QCoreApplication::translate("GameWindow", "\345\261\200\345\237\237\347\275\221\345\257\271\346\210\230", nullptr));
        blackTime->setText(QCoreApplication::translate("GameWindow", "05-00", nullptr));
        whiteTime->setText(QCoreApplication::translate("GameWindow", "05-00", nullptr));
        label->setText(QCoreApplication::translate("GameWindow", "\345\200\222\350\256\241\346\227\266", nullptr));
        label_3->setText(QCoreApplication::translate("GameWindow", "\345\200\222\350\256\241\346\227\266 ", nullptr));
        menu->setTitle(QCoreApplication::translate("GameWindow", "\345\274\200\345\247\213", nullptr));
        menu_4->setTitle(QCoreApplication::translate("GameWindow", "\346\226\260\346\270\270\346\210\217", nullptr));
        menu_2->setTitle(QCoreApplication::translate("GameWindow", "\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
