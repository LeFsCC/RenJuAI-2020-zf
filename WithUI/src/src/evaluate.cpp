#include "define.h"

int Evaluate(point p, int me, int plyer) {
    int value = 0;
    int numoftwo = 0;
    for (int i = 1; i <= 8; i++) {
        // 01111*
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, -4) == plyer
            && getLine(p, i, -5) == 0) {
            value += 300000;
            if (me != plyer) { value -= 500; }
            continue;
        }
        // 21111*
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, -4) == plyer
            && (getLine(p, i, -5) == 3 - plyer || getLine(p, i, -5) == -1)) {
            value += 250000;
            if (me != plyer) { value -= 500; }
            //cout << endl << endl << endl << "yes!We make it" <<value<< endl;
            continue;
        }
        // 111*1
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, 1) == plyer) {
            value += 240000;
            if (me != plyer) { value -= 500; }
            continue;
        }
        // 11*11
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, 1) == plyer && getLine(p, i, 2) == plyer) {
            value += 230000;
            if (me != plyer) { value -= 500; }
            continue;
        }
        // 111*0
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
        // 1110*
        if (getLine(p, i, -1) == 0 && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) == plyer && getLine(p, i, -4) == plyer) {
            value += 350;
            continue;
        }
        // 11*1
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
        if (getLine(p, i, -1) == plyer && getLine(p, i, -2) == plyer
            && getLine(p, i, -3) != 3 - plyer && getLine(p, i, 1) != 3 - plyer) {
            numoftwo++;
        }
        int numOfplyer = 0;
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

int evaluate(point& p)
{
    int origin_flag = chessBoard[p.x][p.y];
    chessBoard[p.x][p.y] = p.point_type;
    p.value = Evaluate(p, 1, 1) + Evaluate(p, 1, 2);
    chessBoard[p.x][p.y] = origin_flag;
    return  p.value;
}
