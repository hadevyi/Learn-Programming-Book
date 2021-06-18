#include <iostream>
#include <string>
using namespace std;

class Back {
	int leght;
	string s;
public:
	void print();
};

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

void main() {
	Back b;
	b.print();
}