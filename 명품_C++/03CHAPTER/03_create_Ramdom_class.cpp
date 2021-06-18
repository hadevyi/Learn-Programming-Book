#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	int start_num;
	int end_num;
public:
	Random();
	int next();
	int nextInRange(int n1, int n2);
};

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
