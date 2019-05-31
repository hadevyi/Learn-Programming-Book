//2017-1학기 C++ 20163131 당현아
#include <cstdlib>
#include <ctime>
#include "Random.h"

Random::Random() {
	start_num = 1;
	end_num = 10;
	srand((unsigned)time(0)); //Inclouded by seed , ctime, which generates different random values for each run
}

int Random::next() {
	start_num = 0;
	end_num = RAND_MAX;

	return rand(); //Random generated function included in cstdlib
}

int Random::nextInRange(int n1, int n2) {
	start_num = n1;
	end_num = n2;

	return n1 + (rand() % (n2 - n1 + 1));
	//To specify the range of the range function = start value + (land() % (end value - start value + 1)
}
