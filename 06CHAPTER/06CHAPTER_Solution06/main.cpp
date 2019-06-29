#include <iostream>
#include "ArrayUtility2.h"
using namespace std;

void main()
{
	int x[5], y[5], size, * temp1, * temp2, retSize = 0;

	cout << "Enter 5 integers. Insert into array X. >> ";

	for (int i = 0; i < 5; i++)
		cin >> x[i];

	cout << "Enter 5 integers. Insert into array y. >> ";

	for (int i = 0; i < 5; i++)
		cin >> y[i];

	cout << "Outputs a combined array." << endl;
	size = sizeof(x) / sizeof(int) + sizeof(y) / sizeof(int);

	temp1 = ArrayUtility2::concat(x, y, size);

	for (int i = 0; i < size; i++)
		cout << temp1[i] << ' ';
	cout << endl << endl;

	temp2 = ArrayUtility2::remove(x, y, size, retSize);

	cout << "Outputs the result by subtracting y[] from the array x[]. in number" << retSize << endl;

	for (int i = 0; i < retSize; i++)
		cout << temp2[i] << ' ';
	cout << endl;
}