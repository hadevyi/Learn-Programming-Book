#include <iostream>
using namespace std;

int big(int num1, int num2)
{
	int big;

	big = num1 > num2 ? num1 : num2;

	if (big < 100)
		return big;
	else
		return 100;
}

int big(int num1, int num2, int num3)
{
	int big;

	big = num1 > num2 ? num1 : num2;

	if (big < num3)
		return big;
	else
		return num3;
}

void main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}