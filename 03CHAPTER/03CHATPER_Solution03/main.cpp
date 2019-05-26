//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Random.h"
using namespace std;

void main()
{
	Random r;

	cout << "\n--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "--2에서 4 까지의 랜덤 정수 10개--" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl << endl;
}