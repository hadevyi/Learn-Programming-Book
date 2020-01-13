#include <iostream>
using namespace std;

char &find(char s[], int index) {
	return s[index];
}

void main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S';
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't';
	cout << name << endl;
}