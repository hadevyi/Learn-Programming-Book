#pragma once
#ifndef ODD_EVEN
#define ODD_EVEN
class Random {
	int start_num;
	int end_num;
public:
	Random();
	int EvenRandom();
	int OddRandom(int n1, int n2);
};
#endif // !ODD_EVEN
