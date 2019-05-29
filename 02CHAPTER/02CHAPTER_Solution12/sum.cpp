//2017-1학기 C++ 20163131 당현아 
#include <iostream>
#include "sum_h.h"
using namespace std;

int sum(int num1, int num2)
{
	int i, result = 0;

	for (i = num1; i <= num2; i++)
		result += i;

	return result;
}
