#include <cstdlib>
#include <ctime>
#include "odd_even.h"

Random::Random() {
	srand((unsigned)time(0));
}

Random::Random(int n1, int n2) {
	srand((unsigned)time(0));

	start_num = n1;
	end_num = n2;
}

int Random::EvenRandom() {
	int n = rand();

	while (true) {
		int n = rand();

		if (n % 2 == 0)
			return n;
	}

	if (n % 2 == 0)
		return n;
}

int Random::OddRandom() {

	while (true) {
		int n = rand() % (end_num - start_num + 1) + start_num;

		if (n % 2 == 1)
			return n;
	}
}
