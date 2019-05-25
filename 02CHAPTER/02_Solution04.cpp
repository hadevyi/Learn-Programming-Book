//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	double num[5], max;
	int i = 0;

	cout << "5개의 실수를 입력하라>>";
	for (i = 0; i < 5; i++)
		cin >> num[i];

	max = num[0];

	for (i = 1; i <= 4; i++)
		if (max < num[i])
			max = num[i];

	cout << "제일 큰 수 = " << max << endl;
}