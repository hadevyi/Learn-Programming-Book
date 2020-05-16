#include <iostream>
using namespace std;

char&find(char a[], char c, bool&success);

void main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);

	if (b == false) {
		cout << "I can't find 'M'." << endl;
	}

	loc = 'm';
	cout << s << endl << endl;
}

char&find(char a[], char c, bool&success) {
	for (int i = 0; i < sizeof(a); i++)
	{
		if (a[i] == c)
		{
			success = true;
			return a[i];
		}
		return *a;
	}
}