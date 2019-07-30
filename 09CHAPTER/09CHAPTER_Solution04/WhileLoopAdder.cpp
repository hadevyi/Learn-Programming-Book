#include "WhileLoopAdder.h"

int WhileLoopAdder::calculate(){
	int x = getX();
	int y = getY();
	int sum = 0;

	while (x <= y)	{
		sum += x;
		x++;
	}

	return sum;
}