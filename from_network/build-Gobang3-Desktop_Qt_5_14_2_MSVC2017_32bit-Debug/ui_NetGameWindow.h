/********************************************************************************
** Form generated from reading UI file 'NetGameWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETGAMEWINDOW_H
#define UI_NETGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetGameWindow
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
    QTextBrowser *messageBrowser;
    QTextEdit *messageTextEdit;
    QPushButton *sendButton;
    QTableWidget *userTableWidget;
    QPushButton *readyBtn;
    QPushButton *giveupBtn;
    QPushButton *backBtn;
    QPushButton *quitBtn;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_2;

    void setupUi(QMainWindow *NetGameWindow)
    {
        if (NetGameWindow->objectName().isEmpty())
            NetGameWindow->setObjectName(QString::fromUtf8("NetGameWindow"));
        NetGameWindow->resize(850, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/gobang.ico"), QSize(), QIcon::Normal, QIcon::Off);
        NetGameWindow->setWindowIcon(icon);
        actionQuit = new QAction(NetGameWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/image/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionBack = new QAction(NetGameWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/image/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon2);
        actionPeople = new QAction(NetGameWindow);
        actionPeople->setObjectName(QString::fromUtf8("actionPeople"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/image/person.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPeople->setIcon(icon3);
        actionComputer = new QAction(NetGameWindow);
        actionComputer->setObjectName(QString::fromUtf8("actionComputer"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/image/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputer->setIcon(icon4);
        actionScreenshot = new QAction(NetGameWindow);
        actionScreenshot->setObjectName(QString::fromUtf8("actionScreenshot"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/image/screenshot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScreenshot->setIcon(icon5);
        actionHome = new QAction(NetGameWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/image/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon6);
        actionNet = new QAction(NetGameWindow);
        actionNet->setObjectName(QString::fromUtf8("actionNet"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/image/net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNet->setIcon(icon7);
        centralwidget = new QWidget(NetGameWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        messageBrowser = new QTextBrowser(centralwidget);
        messageBrowser->setObjectName(QString::fromUtf8("messageBrowser"));
        messageBrowser->setGeometry(QRect(630, 340, 201, 251));
        messageBrowser->setStyleSheet(QString::fromUtf8("background:rgb(178, 113, 60);"));
        messageTextEdit = new QTextEdit(centralwidget);
        messageTextEdit->setObjectName(QString::fromUtf8("messageTextEdit"));
        messageTextEdit->setGeometry(QRect(630, 600, 201, 31));
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(760, 640, 75, 23));
        userTableWidget = new QTableWidget(centralwidget);
        if (userTableWidget->columnCount() < 3)
            userTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(255, 255, 255));
        userTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(255, 255, 255));
        userTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        userTableWidget->setObjectName(QString::fromUtf8("userTableWidget"));
        userTableWidget->setGeometry(QRect(630, 180, 201, 151));
        userTableWidget->setAutoFillBackground(false);
        userTableWidget->setStyleSheet(QString::fromUtf8("background:rgb(178, 113, 60);"));
        userTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        readyBtn = new QPushButton(centralwidget);
        readyBtn->setObjectName(QString::fromUtf8("readyBtn"));
        readyBtn->setGeometry(QRect(190, 640, 100, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \346\245\267\344\275\223 Std R"));
        font.setPointSize(18);
        readyBtn->setFont(font);
        readyBtn->setFlat(true);
        giveupBtn = new QPushButton(centralwidget);
        giveupBtn->setObjectName(QString::fromUtf8("giveupBtn"));
        giveupBtn->setGeometry(QRect(360, 640, 100, 40));
        giveupBtn->setFont(font);
        giveupBtn->setFlat(true);
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(30, 640, 100, 40));
        backBtn->setBaseSize(QSize(0, 0));
        backBtn->setFont(font);
        backBtn->setFlat(true);
        quitBtn = new QPushButton(centralwidget);
        quitBtn->setObjectName(QString::fromUtf8("quitBtn"));
        quitBtn->setGeometry(QRect(500, 640, 100, 40));
        quitBtn->setFont(font);
        quitBtn->setFlat(true);
        NetGameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NetGameWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_3->setGeometry(QRect(410, 107, 134, 119));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_3->setIcon(icon8);
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        NetGameWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(menu_3->menuAction());
        menu->addAction(actionHome);
        menu->addAction(actionQuit);
        menu_3->addAction(actionPeople);
        menu_3->addAction(actionComputer);
        menu_3->addAction(actionNet);
        menu_2->addAction(actionBack);
        menu_2->addAction(actionScreenshot);

        retranslateUi(NetGameWindow);

        QMetaObject::connectSlotsByName(NetGameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NetGameWindow)
    {
        NetGameWindow->setWindowTitle(QCoreApplication::translate("NetGameWindow", "\345\261\200\345\237\237\347\275\221\345\257\271\346\210\230", nullptr));
        actionQuit->setText(QCoreApplication::translate("NetGameWindow", "\351\200\200\345\207\272", nullptr));
        actionBack->setText(QCoreApplication::translate("NetGameWindow", "\346\202\224\346\243\213", nullptr));
        actionPeople->setText(QCoreApplication::translate("NetGameWindow", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        actionComputer->setText(QCoreApplication::translate("NetGameWindow", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        actionScreenshot->setText(QCoreApplication::translate("NetGameWindow", "\344\277\235\345\255\230\346\243\213\345\261\200", nullptr));
        actionHome->setText(QCoreApplication::translate("NetGameWindow", "\345\233\236\345\210\260\350\217\234\345\215\225", nullptr));
        actionNet->setText(QCoreApplication::translate("NetGameWindow", "\345\261\200\345\237\237\347\275\221\345\257\271\346\210\230", nullptr));
        sendButton->setText(QCoreApplication::translate("NetGameWindow", "\345\217\221\351\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem = userTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("NetGameWindow", "\344\270\273\346\234\272\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = userTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("NetGameWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = userTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("NetGameWindow", "IP\345\234\260\345\235\200", nullptr));
        readyBtn->setText(QCoreApplication::translate("NetGameWindow", "\345\207\206\345\244\207", nullptr));
        giveupBtn->setText(QCoreApplication::translate("NetGameWindow", "\350\256\244\350\276\223", nullptr));
        backBtn->setText(QCoreApplication::translate("NetGameWindow", "\346\202\224\346\243\213", nullptr));
        quitBtn->setText(QCoreApplication::translate("NetGameWindow", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("NetGameWindow", "\345\274\200\345\247\213", nullptr));
        menu_3->setTitle(QCoreApplication::translate("NetGameWindow", "\346\226\260\346\270\270\346\210\217", nullptr));
        menu_2->setTitle(QCoreApplication::translate("NetGameWindow", "\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetGameWindow: public Ui_NetGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETGAMEWINDOW_H
