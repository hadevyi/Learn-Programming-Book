#include <iostream>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max)
{
	return min + rand() % (max - min + 1);
}

char Random::nextAlphabet()
{
	int num = rand();

	if (num >= 'a' && num <= 'z' || num >= 'A' && num <= 'Z')
	{
		return (char)num;
	}
	else
	{
		while (!(num >= 'a' && num <= 'z' || num >= 'A' && num <= 'Z'))
			num = rand();

		return (char)num;
	}
}

double Random::nextDouble()
{
	return rand() / (double)(RAND_MAX + 1);
}

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