#include "define.h"
#include "searchmove.h"
#include "printchessboard.h"
#include "makemove.h"
#include "evaluate.h"


int main()
{
	int plyer_point_type = black; // ��ҵ�������ɫ��1Ϊ�ڣ�2Ϊ��, Ĭ��Ϊ��
	bool game_on = false;         // ��Ϸ�Ƿ�ʼ
	while (true)
	{
		system("cls");
		cout << "*************�������˻�����AI*************" << endl;
		cout << "����: newblack  ��������" << endl;
		cout << "����: newwhite  ���Ժ���" << endl;
		cout << "����: move x y  ��ʾ���ӵ�" << endl;
		print();
		string str;
		getline(cin, str);	
		vector<string> v = split(str, " ");

		if (v[0] == "newblack" && !game_on) {
			plyer_point_type = white;
			game_on = true;
			chessBoard[7][7] = 3 - plyer_point_type;     // �������ֵ�һ��Ĭ���µ��м�λ��
		}
		else if (v[0] == "newwhite" && !game_on) {
			game_on = true;
		}
		else if (v[0] == "move") {
			int x = stoi(v[1]), y = stoi(v[2]);
			if (inboard(x,y) && chessBoard[x][y] == 0)
			{
				// ѡ������
				chessBoard[x][y] = plyer_point_type;
				point newchess;
				newchess.get(x, y, plyer_point_type);

				if (gameover(newchess)) {
					cout << "you win!";
					break;
				}
				// ��������, ����4��
				point compt = mkdecision(3 - plyer_point_type, 2);
				if (gameover(compt))  {
					cout << "computer win";
					break;
				}
			}
			else {
				cout << "�������̿հ״�����" << endl;
			}

		}
		else {
			break;
		}
	}
}
