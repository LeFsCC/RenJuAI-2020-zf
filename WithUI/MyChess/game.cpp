#include "game.h"
#include "makemove.h"
#include "searchmove.h"
#include "evaluate.h"
#include <memory.h>

game::game()
{
    player=0;
}
bool game::judge_is_blank(int x, int y)
{
    if(!chessBoard[x][y])
        return true;
    else
        return false;
}
void game::peoplePutDown(int x,int y)
{
    chessBoard[x][y]=player++%2+1;
}
point game::computerPutDown()
{
    return mkdecision(player++%2+1, 10);
}
