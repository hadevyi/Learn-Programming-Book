#include <iostream>
#include "IntStack.h"
using namespace std;

bool IntStack::push(int n) {

	if (cnt >= max)
		return false;

	arr[cnt] = n;
	cnt++;

	return true;
}

bool IntStack::pop(int& n) {

	if (cnt <= 0)
		return false;

	for (int i = 0; i < cnt; i++)
		if (arr[i] == n)
		{
			for (int j = i; j < cnt - 1; j++)
				arr[j] = arr[j + 1];

			arr[cnt] = NULL;
			cnt--;
		}

	return true;
}

void IntStack::now() {

	if (cnt == 0)
		cout << "No input value." << endl;
	else
	{
		for (int i = 0; i < cnt; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}