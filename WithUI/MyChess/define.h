
#ifndef _DEFINE_
#define _DEFINE_
//全局变量定义

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
#define inboard(a,b) (a>0 && a<=15 && b>0 && b<=15)		//用于检验招法是否在棋盘上
#define GRID_NUM 16	//棋盘规模

extern int chessBoard[GRID_NUM][GRID_NUM]; //棋盘
struct point
{
    int x, y;
    int point_type;//0空1黑2白
    int value;     //记录估值
    void get(int xf, int yf, int pointType) {
        x = xf; y = yf; point_type = pointType;
    }
};
vector<string> split(const string& s, const string& seperator);
int getLine(point p, int i, int j);
bool gameover(point node); //判断是否游戏结束
#endif


