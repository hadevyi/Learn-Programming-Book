#include <iostream>
#include "Random.h"
using namespace std;

void main()
{
	Random::seed();

	cout << "Outputs 10 random integers from 1 to 100." << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100) << ' ';

	cout << endl << endl << "Outputs 10 alphabets randomly." << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet() << ' ';

	cout << endl << endl << "Output to 10 random a mistake." << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextDouble() << ' ';

	cout << endl << endl;
}