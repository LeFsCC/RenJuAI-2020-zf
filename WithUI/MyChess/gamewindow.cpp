#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "QMessageBox"
#include <QPainter>
#include <QFileDialog>
#include <QWidget>
#include "mainwindow.h"
#include <QDebug>

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    pvp_flag = false;
    this->setFixedSize(660,660);
    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background,QColor("#B1723C"));
    this->setPalette(palette);
    mouseflag=false;
    setMouseTracking(true);
}

GameWindow::~GameWindow()
{
    delete ui;
}

int GameWindow::judgeWhoFirst()
{
    QMessageBox box(QMessageBox::Question,QStringLiteral("1"),QStringLiteral("2"));
    box.setStandardButtons (QMessageBox::Yes|QMessageBox::No);
    box.setButtonText (QMessageBox::Yes,QString(QStringLiteral("3")));
    box.setButtonText (QMessageBox::No,QString(QStringLiteral("4")));
    return box.exec();
}
void GameWindow::youFirst()
{
    game.computerColor=2;
    mouseflag=true;
}

void GameWindow::computerFirst()
{
    game.computerColor=1;
    chessBoard[7][7]=1;
    game.player++;
    mouseflag=true;
}

void GameWindow::mouseReleaseEvent(QMouseEvent* event)
{
    int x,y;
    if(mouseflag)
    {
        x=(event->y()-40)/40;
        y=(event->x()-20)/40;
        if(event->x()>=20&&event->x()<=620&&event->y()>=40&&event->y()<=640)
        {
            if(game.judge_is_blank(x,y))
            {
                game.peoplePutDown(x,y);
                currentX=x;
                currentY=y;
                update();
                //qDebug()<<x<<" "<<y<<" "<<chessBoard[x][y]<<endl;
                point newchess;
                newchess.get(x, y, chessBoard[x][y]);
                if (gameover(newchess)) {
                    if((game.player-1)%2)
                        QMessageBox::about(this,QStringLiteral("游戏结束"),QStringLiteral("白子胜"));
                    else
                        QMessageBox::about(this,QStringLiteral("游戏结束"),QStringLiteral("黑子胜"));
                    mouseflag=false;
                    return;
                }
                if(!pvp_flag)
                {
                    mouseflag=false;
                    point poinst=game.computerPutDown();
                    currentX=poinst.x;
                    currentY=poinst.y;
                    //qDebug()<<currentX<<" "<<currentY<<" "<<chessBoard[currentX][currentY]<<endl;
                    update();
                    mouseflag=true;
                    if (gameover(poinst)) {
                        if((game.player-1)%2)
                            QMessageBox::about(this,QStringLiteral("游戏结束"),QStringLiteral("白子胜"));
                        else
                            QMessageBox::about(this,QStringLiteral("游戏结束"),QStringLiteral("黑子胜"));
                        mouseflag=false;
                        return;
                    }
                }
            }
            else
                QMessageBox::information(this,QStringLiteral(""),QStringLiteral("请在空白处落子"),QMessageBox::Ok);
        }
        else
            QMessageBox::information(this,QStringLiteral(""),QStringLiteral("请在棋盘内落子"),QMessageBox::Ok);
        update();
    }
}
void GameWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    QPen pen=painter.pen();
    pen.setColor(QColor("#8D5822"));
    pen.setWidth(7);
    painter.setPen(pen);
    QBrush brush;
    brush.setColor(QColor("#EEC085"));
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawRect(20,40,600,600);
    pen.setColor(Qt::black);
    pen.setWidth(1);
    painter.setPen(pen);
    for(int i=0;i<15;i++)
        {
            painter.drawLine(40+i*40,60,40+i*40,620);//纵线
            painter.drawLine(40,60+i*40,600,60+i*40);//横线
        }
    brush.setColor(Qt::black);
    painter.setBrush(brush);
    painter.drawRect(155,175,10,10);
    painter.drawRect(475,175,10,10);
    painter.drawRect(155,495,10,10);
    painter.drawRect(475,495,10,10);
    painter.drawRect(315,335,10,10);
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 15; j++)
            {
                if (chessBoard[i][j] == 1)
                {
                    brush.setColor(Qt::black);
                    painter.setBrush(brush);
                    painter.drawEllipse(QPoint((j + 1) * 40,(i + 1) * 40+20),  18, 18);
                }
                else if (chessBoard[i][j] == 2)
                {
                    brush.setColor(Qt::white);
                    painter.setPen(Qt::NoPen);
                    painter.setBrush(brush);
                    painter.drawEllipse(QPoint((j + 1) * 40,(i + 1) * 40+20),  18, 18);
                }
            }
    pen.setColor(Qt::red);
    pen.setWidth(1);
    painter.setPen(pen);
    if((moveX*40+40)>=20&&(moveX*40+40)<=620&&(moveY*40+40)>=20&&(moveY*40+40)<=620)
    {
        painter.drawLine((moveY+1)*40-20,(moveX+1)*40,(moveY+1)*40-10,(moveX+1)*40);
        painter.drawLine((moveY+1)*40+20,(moveX+1)*40,(moveY+1)*40+10,(moveX+1)*40);
        painter.drawLine((moveY+1)*40-20,(moveX+1)*40+40,(moveY+1)*40-10,(moveX+1)*40+40);
        painter.drawLine((moveY+1)*40+20,(moveX+1)*40+40,(moveY+1)*40+10,(moveX+1)*40+40);
        painter.drawLine((moveY+1)*40-20,(moveX+1)*40,(moveY+1)*40-20,(moveX+1)*40+10);
        painter.drawLine((moveY+1)*40+20,(moveX+1)*40,(moveY+1)*40+20,(moveX+1)*40+10);
        painter.drawLine((moveY+1)*40-20,(moveX+1)*40+40,(moveY+1)*40-20,(moveX+1)*40+30);
        painter.drawLine((moveY+1)*40+20,(moveX+1)*40+40,(moveY+1)*40+20,(moveX+1)*40+30);
    }
        painter.drawLine((currentY+1)*40-1,(currentX+1)*40+20,(currentY+1)*40-6,(currentX+1)*40+20);
        painter.drawLine((currentY+1)*40+1,(currentX+1)*40+20,(currentY+1)*40+6,(currentX+1)*40+20);
        painter.drawLine((currentY+1)*40,(currentX+1)*40+19,(currentY+1)*40,(currentX+1)*40+14);
        painter.drawLine((currentY+1)*40,(currentX+1)*40+21,(currentY+1)*40,(currentX+1)*40+26);
}
void GameWindow::mouseMoveEvent(QMouseEvent *event)
{
    moveX=(event->y()-40)/40;
    moveY=(event->x()-20)/40;
    //qDebug()<<moveX<<" "<<moveY<<endl;
    update();
}
