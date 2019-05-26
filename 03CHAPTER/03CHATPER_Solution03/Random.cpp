//2017-1학기 C++ 20163131 당현아
#include <cstdlib>
#include <ctime>
#include "Random.h"

Random::Random() {
	start_num = 1;
	end_num = 10;
	srand((unsigned)time(0)); //실행마다 다른 랜덤 값을 발생시키는 seed , ctime에 의해 include 됨 
}

int Random::next() {
	start_num = 0;
	end_num = RAND_MAX;

	return rand(); //cstdlib에 포함되어있는 랜덤 발생 함수
}

int Random::nextInRange(int n1, int n2) {
	start_num = n1;
	end_num = n2;

	return n1 + (rand() % (n2 - n1 + 1)); //rand 함수의 범위 지정 방법 = 시작값 + (rand() % (끝값 - 시작값 + 1))
}