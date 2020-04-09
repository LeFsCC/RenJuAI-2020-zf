#include "define.h"

int Evaluate(point p, int me, int plyer) { // me:我的代号  plyer:当前计算的player的代号
    int value = 0;
    int numoftwo = 0;
    for (int i = 1; i <= 8; i++) { // 8个方向
        // 活四 01111* *代表当前空位置  0代表其他空位置    下同
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, -4) == plyer
            && getLine(p, i, -5) == 0) {
            value += 300000;
            if (me != plyer) { value -= 500; }
            continue;
        }
        // 死四A 21111*
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, -4) == plyer
            && (getLine(p, i, -5) == 3 - plyer || getLine(p, i, -5) == -1)) {
            value += 250000;
            if (me != plyer) { value -= 500; }
            //cout << endl << endl << endl << "yes!We make it" <<value<< endl;
            continue;
        }
        // 死四B 111*1
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, 1) == plyer) {
            value += 240000;
            if (me != plyer) { value -= 500; }
            continue;
        }
        // 死四C 11*11
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, 1) == plyer && getLine(p, i, 2) == plyer) {
            value += 230000;
            if (me != plyer) { value -= 500; }
            continue;
        }
        // 活三 近3位置 111*0
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer) {
            if (getLine(p, i, 1) == 0) {
                value += 750;
                if (getLine(p, i, -4) == 0) {
                    value += 3150;
                    if (me != plyer) { value -= 300; }
                }
            }
            if ((getLine(p, i, 1) == 3 - plyer || getLine(p, i, 1) == -1) && getLine(p, i, -4) == 0) {
                value += 500;
            }
            continue;
        }
        // 活三 远3位置 1110*
        if (getLine(p, i, -1) == 0 && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, -4) == plyer) {
            value += 350;
            continue;
        }
        // 死三 11*1
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, 1) == plyer) {
            value += 600;
            if (getLine(p, i, -3) == 0 && getLine(p, i, 2) == 0) {
                value += 3150;
                continue;
            }
            if ((getLine(p, i, -3) == 3 - plyer || getLine(p, i, -3) == -1) && (getLine(p, i, 2) == 3 - plyer || getLine(p, i, 2) == -1)) {
                continue;
            }
            else {
                value += 700;
                continue;
            }
        }
        //活二的个数
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) != 3 - plyer && getLine(p, i, 1) != 3 - plyer) {
            numoftwo++;
        }
        //其余散棋
        int numOfplyer = 0; // 因为方向会算两次？
        for (int k = -4; k <= 0; k++) { // ++++* +++*+ ++*++ +*+++ *++++
            int temp = 0;
            for (int l = 0; l <= 4; l++) {
                if (getLine(p, i, k + l) == plyer) {
                    temp++;
                }
                else
                    if (getLine(p, i, k + l) == 3 - plyer
                        || getLine(p, i, k + l) == -1) {
                        temp = 0;
                        break;
                    }
            }
            numOfplyer += temp;
        }
        value += numOfplyer * 15;
        if (numOfplyer != 0) {
        }
    }
    if (numoftwo >= 2) {
        value += 3000;
        if (me != plyer) {
            value -= 100;
        }
    }
    return value;
}

int evaluate(point& p) //估值算法，返回估值
{
    int origin_flag = chessBoard[p.x][p.y];
    chessBoard[p.x][p.y] = p.point_type;
    p.value = Evaluate(p, 1, 1) + Evaluate(p, 1, 2);
    chessBoard[p.x][p.y] = origin_flag;
    return  p.value;
}

//由于五子棋搜索分支庞大，通常无法直接搜索到胜负终局，当搜索到一定深度时需要根据局面返回搜索结果。
//参考资料：
//张明亮, 吴俊, 李凡长. 五子棋机器博弈系统评估函数的设计[J]. 计算机应用, 2012, 32(07):1969-1972.
//裴博文. 五子棋人工智能权重估值算法[J]. 电脑编程技巧与维护, 2008(6):69-75.
//https://www.cnblogs.com/maxuewei2/p/4825520.html
