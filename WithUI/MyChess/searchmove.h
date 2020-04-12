#ifndef _SEARCHMOVE_
#define _SEARCHMOVE_
#include "define.h"


int search_max(int plyer, point pt, int depth, int alpha, int beta);

int search_min(int plyer, point pt, int depth, int alpha, int beta);

point minimax(int plyer, int depth);

point mkdecision(int plyer, int depth);

#endif
