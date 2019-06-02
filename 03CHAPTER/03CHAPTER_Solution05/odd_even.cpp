//2017-1학기 C++ 20163131 당현아
#include <cstdlib>
#include <ctime>
#include "odd_even.h"

Random::Random() {
	srand((unsigned)time(0));
}

int Random::EvenRandom() {
	int n = rand();

	if (n % 2 == 0)
		return n;
	else
		return n - 1;
}

int Random::OddRandom(int n1, int n2) {
	start_num = n1;
	end_num = n2;

	int n = n1 + (rand() % (n2 - n1 + 1));

	if (n % 2 == 1)
		return n;
	else
		return n - 1;
}