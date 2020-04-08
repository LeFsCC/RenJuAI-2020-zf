#include "define.h"
bool gameover(point node)//еп╤ойг╥Ясно╥╫АйЬ
{
	for (int i = 1; i <= 8; i++) {
		int num = 1;
		for (int j = 1; j <= 4; j++) {
			if (getLine(node,i,j) == node.point_type) {
				num += 1;
			}
		}
		if (num == 5) {
			return true;
		}	
	}
	return false;
}
