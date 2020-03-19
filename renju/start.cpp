#include "define.h"
#include "searchmove.h"
#include "printchessboard.h"
#include "makemove.h"
#include "evaluate.h"
int main()
{
	bool flag = false;
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
		if (v[0] == "newblack")
		{

		}
		else if (v[0] == "newwhite")
		{

		}
		else if (v[0] == "move")
		{
			int x = stoi(v[1]), y = stoi(v[2]);
			if (inboard(x,y)&&chessBoard[x][y]==0)
			{
				chessBoard[x][y] = flag + 1;
				//cout << chessBoard[x][y] << endl;
				point newchess;
				newchess.get(x, y, flag + 1);
				//cout << evaluate(newchess);
				if (gameover(newchess))
				{
					cout << "winner: ";
					if (flag)
						cout << "��!" << endl;
					else
						cout << "��!" << endl;
					break;

				}
				flag = !flag;
			}
			else
			{
				cout << "�������̿հ״�����" << endl;
			}
		}
		else
		{
			break;
		}
	}
	
}
