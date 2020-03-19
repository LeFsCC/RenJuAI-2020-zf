#include "define.h"

int chessBoard[GRID_NUM][GRID_NUM];//��������

vector<string> split(const string& s, const string& seperator) {
    vector<string> result;
    typedef string::size_type string_size;
    string_size i = 0;

    while (i != s.size()) {
        //�ҵ��ַ������׸������ڷָ�������ĸ��
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

        //�ҵ���һ���ָ������������ָ���֮����ַ���ȡ����
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

int getLine(point p, int i, int j) { // i:���� j:���p��˳��ֵ����pΪ0�� p:��ǰ��
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