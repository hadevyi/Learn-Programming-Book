#include "DoWhileLoopAdder.h"

int DoWhileLoopAdder::calculate(){
	int x = getX();
	int y = getY();
	int sum = 0;
	x--;

	do
	{
		x++;
		sum += x;
	} while (x < y);

	return sum;
}