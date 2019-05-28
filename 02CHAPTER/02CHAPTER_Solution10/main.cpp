//2017-1 C++ 20163131 당현아
#include <iostream>
using namespace std;

int main()
{
	char ch[20];
	int leght, i, j;

	cout << "Enter String>> ";
	cin.getline(ch, 20, '\n');

	leght = strlen(ch);

	for (i = 0; i < leght; i++)	{
		for (j = 0; j <= i; j++)
			cout << ch[j];
		cout << endl;
	}
}
