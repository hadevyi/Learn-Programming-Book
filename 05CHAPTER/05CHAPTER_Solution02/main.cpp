#include <iostream>
using namespace std;

bool bigger(int a, int b, int &big) {
	if (a == b) return true;
	else if (a > b) { big = a; return false; }
	else { big = b; return false; }
}

void main() {
	int num1, num2, big;

	while (true) {
		cout << "Please enter 2 integers." << endl;
		cin >> num1 >> num2;

		if (bigger(num1, num2, big)) { cout << "The value is the same."; }
		else { cout << ">> The value is different. The maximum value is : " << big; }

		cout << endl << endl;
	}
}