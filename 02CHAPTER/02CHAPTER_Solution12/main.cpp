//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "sum_h.h"
using namespace std;

int main(void)
{
	int n = 0;

	cout << "끝 수를 입력하세요>> ";
	cin >> n;

	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << endl;
}