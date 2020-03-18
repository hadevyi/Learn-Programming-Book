//2017-1ÇÐ±â C++ 20163131 ´çÇö¾Æ
#include <iostream>
#include "odd_even.h"
using namespace std;

void main() {
	Random r1;

	cout << "\nFrom 0 onwards " << RAND_MAX << " 10 even random integers to" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.EvenRandom();
		cout << n << " ";
	}

	cout << "\n\n10 random odd integers from 2 to 9" << endl;

	Random r2(2, 9);
	for (int i = 0; i < 10; i++)
	{
		int n = r2.OddRandom();
		cout << n << " ";
	}

	cout << endl << endl;
}
