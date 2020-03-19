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
		cout << "*************五子棋人机对弈AI*************" << endl;
		cout << "输入: newblack  电脑先手" << endl;
		cout << "输入: newwhite  电脑后手" << endl;
		cout << "输入: move x y  表示落子点" << endl;
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
						cout << "●!" << endl;
					else
						cout << "○!" << endl;
					break;

				}
				flag = !flag;
			}
			else
			{
				cout << "请在棋盘空白处下棋" << endl;
			}
		}
		else
		{
			break;
		}
	}
	
}
