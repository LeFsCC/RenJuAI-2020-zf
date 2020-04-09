#ifndef _SEARCHMOVE_
#define _SEARCHMOVE_
#include "define.h"
//搜索核心

int search_max(int plyer, point pt, int depth, int alpha, int beta);

int search_min(int plyer, point pt, int depth, int alpha, int beta);

point minimax(int plyer, int depth); // minimax 算法 + alpha-beta 剪枝

point mkdecision(int plyer, int depth);

#endif
