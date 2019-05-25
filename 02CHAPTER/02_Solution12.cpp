//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

int sum(int num1, int num2);

void main()
{
	int n = 0;

	cout << "끝 수를 입력하세요>> ";
	cin >> n;

	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << endl;
}

int sum(int num1, int num2)
{
	int i, result = 0;

	for (i = num1; i <= num2; i++)
		result += i;

	return result;
}