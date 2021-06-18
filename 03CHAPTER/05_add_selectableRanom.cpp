#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	int start_num;
	int end_num;
public:
	Random();
	Random(int n1, int n2);
	int EvenRandom();
	int OddRandom();
};

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
