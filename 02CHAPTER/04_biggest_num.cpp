#include <iostream>
using namespace std;

int main()
{
	double num[5], max;
	int i = 0;

	cout << "input to five number >>";

	for (i = 0; i < 5; i++)
		cin >> num[i];

	max = num[0];

	for (i = 1; i <= 4; i++)
		if (max < num[i])
			max = num[i];

	cout << "max number = " << max << endl;
}
