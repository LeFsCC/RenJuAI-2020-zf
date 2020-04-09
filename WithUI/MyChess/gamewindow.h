#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
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

private:
    Ui::GameWindow *ui;
    int currentX;
    int currentY;
    int moveX;
    int moveY;
    bool mouseflag;
    game game;
};

#endif // GAMEWINDOW_H
