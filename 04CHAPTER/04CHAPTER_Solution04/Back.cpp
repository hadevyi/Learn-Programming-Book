#include <iostream>
#include <string>
#include "Back.h"
using namespace std;

void Back::print() {
	cout << "Please enter a line below (exit will exit)" << endl;

	while (true) {
		cout << ">>";
		getline(cin, s);
		leght = s.size();

		if (s == "exit")
			exit(0);

		for (int i = leght; i >= 0; i--)
			cout << s.substr(i, 1);

		cout << endl;
	}
}