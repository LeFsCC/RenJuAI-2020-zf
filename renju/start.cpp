#include "define.h"
#include "searchmove.h"
#include "printchessboard.h"
#include "makemove.h"
#include "evaluate.h"


int main()
{
	int plyer_point_type = black; // 玩家的棋子颜色，1为黑，2为白, 默认为黑
	bool game_on = false;         // 游戏是否开始
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

		if (v[0] == "newblack" && !game_on) {
			plyer_point_type = white;
			game_on = true;
			chessBoard[7][7] = 3 - plyer_point_type;     // 电脑先手第一步默认下到中间位置
		}
		else if (v[0] == "newwhite" && !game_on) {
			game_on = true;
		}
		else if (v[0] == "move") {
			int x = stoi(v[1]), y = stoi(v[2]);
			if (inboard(x,y) && chessBoard[x][y] == 0)
			{
				// 选手下棋
				chessBoard[x][y] = plyer_point_type;
				point newchess;
				newchess.get(x, y, plyer_point_type);

				if (gameover(newchess)) {
					cout << "you win!";
					break;
				}
				// 电脑下棋, 搜索4层
				point compt = mkdecision(3 - plyer_point_type, 2);
				if (gameover(compt))  {
					cout << "computer win";
					break;
				}
			}
			else {
				cout << "请在棋盘空白处下棋" << endl;
			}

		}
		else {
			break;
		}
	}
}
