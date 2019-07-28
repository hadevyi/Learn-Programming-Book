#include "ForLoopAdder.h"

int ForLoopAdder::calculate() {
	int x = getX();
	int y = getY();
	int sum = 0;

	for (int i = x; i <= y; i++)
		sum += i;

	return sum;
}