#ifndef _SEARCHMOVE_
#define _SEARCHMOVE_
//ËÑË÷ºËÐÄ

int search_max(int plyer, point pt, int depth, int alpha, int beta);

int search_min(int plyer, point pt, int depth, int alpha, int beta);

point minimax(int plyer, int depth); // minimax Ëã·¨ + alpha-beta ¼ôÖ¦

point mkdecision(int plyer, int depth);

#endif