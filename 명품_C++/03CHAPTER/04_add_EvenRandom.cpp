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
	int EvenRondom(int n1, int n2);
};

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	return rand();
}

int Random::EvenRondom(int n1, int n2) {
	int n;

	start_num = n1;
	end_num = n2;

	n = start_num + (rand() % (end_num - start_num + 1));

	if (n % 2 == 0)
		return n;
	else
		return n - 1;
}

void main() {
	Random r;

	cout << "\n--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;

	for (int i = 0; i < 10; i++) {
		int num = r.next();
		cout << num << " ";
	}

	cout << endl << endl;

	cout << "--2에서 10 까지의 랜덤 정수 10개--" << endl;

	for (int i = 0; i < 10; i++) {
		int num = r.EvenRondom(2, 10);
		cout << num << " ";
	}

	cout << endl << endl;
}