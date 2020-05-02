#include <iostream>
using namespace std;

int main()
{
	char s1[10], s2[10];

	cout << "Please enter a new password>> ";
	cin >> s1;

	cout << "Please re-enter the new password>> ";
	cin >> s2;

	if (strcmp(s1, s2) == 0)
		cout << "It's same." << endl;
	else
		cout << "It's not the same." << endl;
}
