/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *btnPeople;
    QPushButton *btnComputer;
    QPushButton *btnNet;
    QPushButton *btnAbout;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(860, 640);
        MainWindow->setMinimumSize(QSize(860, 640));
        MainWindow->setMaximumSize(QSize(860, 640));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/gobang.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 860, 640));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setFrameShape(QFrame::NoFrame);
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/image/banner.jpg")));
        label->setScaledContents(true);
        btnPeople = new QPushButton(centralWidget);
        btnPeople->setObjectName(QString::fromUtf8("btnPeople"));
        btnPeople->setGeometry(QRect(60, 350, 180, 40));
        btnPeople->setMinimumSize(QSize(180, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        btnPeople->setFont(font);
        btnPeople->setFlat(true);
        btnComputer = new QPushButton(centralWidget);
        btnComputer->setObjectName(QString::fromUtf8("btnComputer"));
        btnComputer->setGeometry(QRect(60, 420, 180, 40));
        btnComputer->setMinimumSize(QSize(180, 40));
        btnComputer->setFont(font);
        btnComputer->setFlat(true);
        btnNet = new QPushButton(centralWidget);
        btnNet->setObjectName(QString::fromUtf8("btnNet"));
        btnNet->setGeometry(QRect(70, 490, 180, 40));
        btnNet->setMinimumSize(QSize(180, 40));
        btnNet->setFont(font);
        btnNet->setFlat(true);
        btnAbout = new QPushButton(centralWidget);
        btnAbout->setObjectName(QString::fromUtf8("btnAbout"));
        btnAbout->setGeometry(QRect(50, 560, 180, 40));
        btnAbout->setMinimumSize(QSize(180, 40));
        btnAbout->setFont(font);
        btnAbout->setFlat(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 311, 141));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font1.setPointSize(60);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\272\224\345\255\220\346\243\213", nullptr));
        label->setText(QString());
        btnPeople->setText(QCoreApplication::translate("MainWindow", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        btnComputer->setText(QCoreApplication::translate("MainWindow", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        btnNet->setText(QCoreApplication::translate("MainWindow", "\345\261\200\345\237\237\347\275\221\345\257\271\346\210\230", nullptr));
        btnAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\346\270\270\346\210\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\272\224\345\255\220\346\243\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
