#ifndef GAME_H
#define GAME_H
#include "define.h"

class game
{
public:
    game();
    int computerColor;
    bool judge_is_blank(int x,int y);
    void peoplePutDown(int x,int y);
    point computerPutDown();
    int player;
};

#endif // GAME_H
