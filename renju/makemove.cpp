#include "define.h"
#include "printchessboard.h"

// Âä×Ó
bool makeMove(point pt, int plyer)
{
	if ((plyer != 1 && plyer != 2) || !(inboard(pt.x, pt.y))) {
		return false;
	}
	chessBoard[pt.x][pt.y] = plyer;
	return true;
}
bool unMakeMove(point pt, int plyer)
{
	if (chessBoard[pt.x][pt.y] == 0) {
		return false;
	}
	chessBoard[pt.x][pt.y] = 0;
	return true;
}
