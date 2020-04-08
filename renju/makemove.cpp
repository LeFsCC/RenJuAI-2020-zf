#include "define.h"
#include "printchessboard.h"

// 落子
bool makeMove(point pt, int plyer)
{
	if ((plyer != 1 && plyer != 2) || !(inboard(pt.x, pt.y))) {
		return false;
	}
	chessBoard[pt.x][pt.y] = plyer;
	return true;
}

// 撤子，允许撤三步
bool unMakeMove(point pt, int plyer)
{
	if (chessBoard[pt.x][pt.y] == 0) {
		return false;
	}
	chessBoard[pt.x][pt.y] = 0;
	//撤销落子操作（chessboard[i][j]=0）
	return true;
}
