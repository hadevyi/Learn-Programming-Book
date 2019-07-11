#include "Stack.h"

Stack& Stack::operator<<(int num)
{
	count++;
	arr[count] = num;

	return *this;
}

bool Stack::operator!()
{
	if (count == -1)
		return true;
	else
		return false;
}

Stack Stack::operator >> (int& num)
{
	num = arr[count];
	count--;

	return *this;
}