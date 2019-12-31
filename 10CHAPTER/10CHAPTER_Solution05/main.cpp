#include <iostream>
using namespace std;

void main()
{
	int *arr = new int[8];
	int x[5] = { 4,3,1,6,4 };
	int y[3] = { 9,6,8 };

	arr = concat(x, 5, y, 3);

	for (int i = 0; i < 8; i++)
		cout << arr[i] << " ";
	cout << endl;
}