#pragma once
#ifndef ODD_EVEN
#define ODD_EVEN
class Random {
	int start_num;
	int end_num;
public :
	Random();
	Random(int n1, int n2);
	int EvenRandom();
	int OddRandom();
};
#endif // !ODD_EVEN
