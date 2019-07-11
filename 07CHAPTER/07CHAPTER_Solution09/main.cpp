#include <iostream>
#include "Statistics.h"
using namespace std;

void main()
{
	Statistics stat;

	if (!stat)
		cout << "There is currently no statistical data." << endl;

	int x[5];
	cout << "Please enter five integers. >> ";

	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0; i < 5; i++)
		stat << x[i];

	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}