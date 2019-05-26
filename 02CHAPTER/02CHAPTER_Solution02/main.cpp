//2017-1학기 C++ 20163131 
#include <iostream>
using namespace std;

void main()
{
	int i, j, result = 0;

	for (i = 1; i <= 9; i++){
		for (j = 1; j <= 9; j++){
			result = i * j;
			cout << j << "X" << i << "=" << result << "\t";
		}
		cout << endl;
	}
}
