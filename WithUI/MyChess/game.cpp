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
    return mkdecision(player++%2+1, 3);
}

void game::clear_board()
{
    for(int i = 0;i < GRID_NUM; i++) {
        for(int j = 0; j < GRID_NUM; j++) {
            chessBoard[i][j] = 0;
        }
    }
    player = 0;
}
