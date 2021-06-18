#include <iostream>
#include "sum_h.h"
using namespace std;

int sum(int num1, int num2);

int main(void)
{
	int n = 0;

	cout << "Please enter the number of endings.>> ";
	cin >> n;

	cout << "The sum of 1 to " << n << " is " << sum(1, n) << endl;
}

int sum(int num1, int num2)
{
	int i, result = 0;

	for (i = num1; i <= num2; i++)
		result += i;

	return result;
}