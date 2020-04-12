
#ifndef _DEFINE_
#define _DEFINE_


#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>
#include <iostream>
#include<vector>
#include <algorithm>
#include <ctime>
using namespace std;

#define inf 1000000
#define MIN 0
#define inboard(a,b) (a>0 && a<=15 && b>0 && b<=15)		// check if the chess is on the board
#define GRID_NUM 16	// chess board scale

extern int chessBoard[GRID_NUM][GRID_NUM]; // chess board
struct point
{
    int x, y;
    int point_type;//0blank 1black 2white
    int value;     // evaluate value
    void get(int xf, int yf, int pointType) {
        x = xf; y = yf; point_type = pointType;
    }
};
vector<string> split(const string& s, const string& seperator);
int getLine(point p, int i, int j);
bool gameover(point node); //check if game is over
#endif


