#include "define.h"
#include "createmoves.h"
#include<vector>
using std::vector;


vector<point> createMoves() // generate a set of all available moves.
{
    vector<point> availMoves;

    for (int i = 0; i < GRID_NUM; i++) {
        for (int j = 0; j < GRID_NUM; j++) {
            point blank_point;
            blank_point.get(i, j, 0);
            if (chessBoard[i][j] == 0 && suit_position(blank_point)) {
                availMoves.push_back(blank_point);
            }
        }
    }
    return availMoves;
}

bool suit_position(point pt) // available position if has neighbors in 3 steps
{
    for (int i = 1; i <= 8; i++) {
        if (getLine(pt, i, -1) != 0 || getLine(pt, i, -2) != 0 || getLine(pt, i, -3) != 0) {
            return true;
        }
    }
    return false;
}
