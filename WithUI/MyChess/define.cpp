#include "define.h"
#include <QDebug>

int chessBoard[GRID_NUM][GRID_NUM];

vector<string> split(const string& s, const string& seperator) {
    vector<string> result;
    typedef string::size_type string_size;
    string_size i = 0;

    while (i != s.size()) {
        int flag = 0;
        while (i != s.size() && flag == 0) {
            flag = 1;
            for (string_size x = 0; x < seperator.size(); ++x)
                if (s[i] == seperator[x]) {
                    ++i;
                    flag = 0;
                    break;
                }
        }

        flag = 0;
        string_size j = i;
        while (j != s.size() && flag == 0) {
            for (string_size x = 0; x < seperator.size(); ++x)
                if (s[j] == seperator[x]) {
                    flag = 1;
                    break;
                }
            if (flag == 0)
                ++j;
        }
        if (i != j) {
            result.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return result;
}

int getLine(point p, int i, int j) {
    int x = p.x, y = p.y;
    switch (i) {
    case 1:
        x = x + j;
        break;
    case 2:
        x = x + j;
        y = y + j;
        break;
    case 3:
        y = y + j;
        break;
    case 4:
        x = x - j;
        y = y + j;
        break;
    case 5:
        x = x - j;
        break;
    case 6:
        x = x - j;
        y = y - j;
        break;
    case 7:
        y = y - j;
        break;
    case 8:
        x = x + j;
        y = y - j;
    }
    //qDebug()<<x<<" "<<y<<" "<<chessBoard[x][y]<<endl;
    if inboard(x, y) return chessBoard[x][y];
    //cout << "Not in board" <<x<<" "<<y<< endl;
    return -1;
}
bool gameover(point node)
{
    for (int i = 1; i <= 4; i++) {
        int num = 0;
        for (int j = -4; j <= 4; j++) {
            if (getLine(node,i,j) == node.point_type) {
                num += 1;
            }
//            else{
//                break;
//            }
            //qDebug()<<getLine(node,i,j)<<" "<<node.point_type<<endl;
        }
        //qDebug()<<num<<endl;
        if (num >= 5) {
            return true;
        }
    }
    return false;
}
