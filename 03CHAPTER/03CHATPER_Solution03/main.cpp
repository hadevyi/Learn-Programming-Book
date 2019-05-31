//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Random.h"
using namespace std;

void main()
{
	Random r;

	cout << "\n- At zero. " << RAND_MAX << "10 random integers to--" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "10 random integers from --2 to 4--" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl << endl;
}
