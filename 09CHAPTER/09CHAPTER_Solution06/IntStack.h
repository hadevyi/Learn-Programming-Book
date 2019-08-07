#pragma once
#ifndef INTSTACK
#define INTSTACK
#include "AbstractStack.h"
class IntStack :public AbstractStack {
	int* arr;
	int max;
	int cnt;
public:
	IntStack(int max) { this->max = max; cnt = 0; arr = new int[max]; }
	bool push(int n);
	bool pop(int& n);
	int size() { return cnt; }
	void now();
};
#endif // !INTSTACK
