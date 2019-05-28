//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "sum_h.h"
using namespace std;

int main(void)
{
	int n = 0;

	cout << "Please enter the number of endings.>> ";
	cin >> n;

	cout << "The sum of 1 to " << n << " is " << sum(1, n) << endl;
}
