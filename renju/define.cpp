#include "define.h"

int chessBoard[GRID_NUM][GRID_NUM];//定义棋盘

vector<string> split(const string& s, const string& seperator) {
    vector<string> result;
    typedef string::size_type string_size;
    string_size i = 0;

    while (i != s.size()) {
        //找到字符串中首个不等于分隔符的字母；
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

        //找到又一个分隔符，将两个分隔符之间的字符串取出；
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

int getLine(point p, int i, int j) { // i:方向 j:相对p的顺序值（以p为0） p:当前点
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
    if inboard(x, y) return chessBoard[x][y];
    //cout << "Not in board" <<x<<" "<<y<< endl;
    return -1;
}