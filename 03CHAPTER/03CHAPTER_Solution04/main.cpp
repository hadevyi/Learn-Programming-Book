//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Ramdom.h"
using namespace std;

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