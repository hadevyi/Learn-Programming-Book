//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "odd_even.h"
using namespace std;

void main() {
	Random r;

	cout << "\nFrom 0 onwards " << RAND_MAX << " 10 even random integers to" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.EvenRandom();
		cout << n << " ";
	}

	cout << "\n\n10 random odd integers from 2 to 9" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.OddRandom(2, 9);
		cout << n << " ";
	}

	cout << endl << endl;
}