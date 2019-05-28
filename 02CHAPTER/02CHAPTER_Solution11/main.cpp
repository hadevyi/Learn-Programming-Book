//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

int main()
{
	int i, n = 0, sum = 0;

	cout << "Please enter the last number.>> ";
	cin >> n;

	for (i = 1; i <= n; i++)
		sum += i;

	cout << "The sum of 1 to " << n << " is " << sum << endl;
}
