
#ifndef _DEFINE_
#define _DEFINE_
//ȫ�ֱ�������

#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>
#include <iostream>
#include<vector>
#include <algorithm>
#include <ctime>
using namespace std;

#define blank 0		//�հ׵�
#define black 1		//�ڷ�
#define white 2		//�׷�
#define inf 1000000		
#define inboard(a,b) (a>0 && a<=15 && b>0 && b<=15)		//���ڼ����з��Ƿ���������
#define GRID_NUM 16	//���̹�ģ
extern int chessBoard[GRID_NUM][GRID_NUM]; //����
struct point
{
	int x, y;
	int flag;//0��1��2��
	int value;//��¼��ֵ
	void get(int xf, int yf, int flagf) {
		x = xf; y = yf; flag = flagf;
	}
};
vector<string> split(const string& s, const string& seperator);
int getLine(point p, int i, int j);
bool gameover(point node); //�ж��Ƿ���Ϸ����
#endif


