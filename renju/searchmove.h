#ifndef _SEARCHMOVE_
#define _SEARCHMOVE_
//��������

int search_max(int plyer, point pt, int depth, int alpha, int beta);

int search_min(int plyer, point pt, int depth, int alpha, int beta);

point minimax(int plyer, int depth); // minimax �㷨 + alpha-beta ��֦

point mkdecision(int plyer, int depth);

#endif