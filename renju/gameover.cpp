#include "define.h"
bool gameover(point node)//еп╤ойг╥Ясно╥╫АйЬ
{
	for (int i = 1; i < 9; i++)
	{
		int num = 1;
		for (int j = 1; j < 5; j++)
		{
			if (getLine(node,i,j) == node.flag)
			{
				num++;
				//cout << num << endl;
			}
			else
			{
				continue;
			}
		}
		if (num==5)
		{
			return true;
		}
	}
	return false;
}
