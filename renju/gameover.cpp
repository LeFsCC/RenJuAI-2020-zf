#include "define.h"
bool gameover(point node)//ÅĞ¶ÏÊÇ·ñÓÎÏ·½áÊø
{
	for (int i = 1; i <= 4; i++) {
		int num = 0;
		for (int j = -4; j <= 4; j++) {
			if (getLine(node,i,j) == node.point_type) {
				num += 1;
			}
		}
		if (num >= 5) {
			return true;
		}	
	}
	return false;
}
