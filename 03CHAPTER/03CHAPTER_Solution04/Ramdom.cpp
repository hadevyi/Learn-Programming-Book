//2017-1학기 C++ 20163131 당현아
#include <cstdlib>
#include <ctime>
#include "Ramdom.h"

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	return rand();
}

int Random::EvenRondom(int n1, int n2) {
	int n;

	start_num = n1;
	end_num = n2;

	n = start_num + (rand() % (end_num - start_num + 1));

	if (n % 2 == 0)
		return n;
	else
		return n - 1;
}