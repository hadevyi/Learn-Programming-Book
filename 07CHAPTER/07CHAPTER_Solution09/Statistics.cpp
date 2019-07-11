#include <iostream>
#include "Statistics.h"
using namespace std;

bool Statistics::operator!()
{
	if (count == 0)
		return true;
	else
		return false;
}

Statistics& Statistics::operator<<(int num)
{
	arr[count] = num;
	count++;

	return *this;
}

void Statistics::operator~()
{
	for (int i = 0; i < count; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

void Statistics::operator >> (int& avg)
{
	int sum = 0;

	for (int i = 0; i < count; i++)
		sum += arr[i];

	avg = sum / count;
}