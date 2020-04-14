#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QVector>
#include <QLabel>
#include <QTimer>
#include "game.h"
#include "define.h"
namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();
    virtual void paintEvent(QPaintEvent*);
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent *event);
    int judgeWhoFirst();
    void youFirst();
    void computerFirst();
    bool pvp_flag;
    void setMode(bool whofirst);
    void setDiff(int degree);

public slots:
    void trigerMenu(QAction* act);
    void updateplaying();

private:
    Ui::GameWindow *ui;
    int currentX;
    int currentY;
    int moveX;
    int moveY;
    bool mouseflag;
    QMenu *menu[2];
    QAction *act[3];
    QMenuBar *menubar;
    QTimer *timer;

    game game;
    point lastplyerchessmem;
    point lastcomputerchessmem;

    point plyerchessmem;
    point computerchessmem;

    QVector<point> plyermem;
    QVector<point> compmem;
    int firstput = 0;   // 0 means player fisrt, 1 means computer first.


};

#endif // GAMEWINDOW_H
