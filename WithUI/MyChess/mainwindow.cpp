#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(850,640);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->close();
    GameWindow* pvc=new GameWindow;
    pvc->youFirst();
    pvc->setMode(true);
    pvc->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
    GameWindow* pvc= new GameWindow;
    pvc->setMode(false);
    QMessageBox::StandardButton r = QMessageBox::question(this, "选择先手", "是否玩家先手", QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    if (r == QMessageBox::Yes) {
        QMessageBox::StandardButton t = QMessageBox::question(this, "choose difficulty", "hard：yes, simple：no", QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
        if(t == QMessageBox::Yes) {
            pvc->setDiff(5);
        } else {
            pvc->setDiff(1);
        }
        pvc->youFirst();
    }
    else {
        QMessageBox::StandardButton t = QMessageBox::question(this, "choose difficulty", "hard：yes, simple：no", QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
        if(t == QMessageBox::Yes) {
            pvc->setDiff(5);
        } else {
            pvc->setDiff(1);
        }
        pvc->computerFirst();
    }
    pvc->show();
}
