#include <iostream>
using namespace std;

int main()
{
	char arr[100];
	int x = 0, leght, i;

	cout << "Enter characters (less than 100 characters)" << endl;
	cin.getline(arr, 100, '\n');

	leght = strlen(arr);

	for (i = 0; i < leght - 1; i++)
		if (arr[i] == 'x')
			x++;

	cout << "The number of x's is " << x << endl;
}
