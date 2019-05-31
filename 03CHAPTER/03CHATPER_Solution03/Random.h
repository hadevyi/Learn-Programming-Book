#pragma once
#ifndef RANDOM
#define RANDOM
class Random {
	int start_num;
	int end_num;
public:
	Random();
	int next();
	int nextInRange(int n1, int n2);
};
#endif // !RANDOM
