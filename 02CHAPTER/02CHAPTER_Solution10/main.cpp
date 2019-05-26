//2017-1 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	char ch[20];
	int leght, i, j;

	cout << "¹®ÀÚ¿­ ÀÔ·Â>> ";
	cin.getline(ch, 20, '\n');

	leght = strlen(ch);

	for (i = 0; i < leght; i++)	{
		for (j = 0; j <= i; j++)
			cout << ch[j];
		cout << endl;
	}
}
