#include <iostream>
using namespace std;

class Stack {
	int arr[10];
	int count;
public:
	Stack() { count = -1; }
	Stack& operator<<(int num);
	bool operator!();
	Stack operator >> (int& num);
};

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

void main()
{
	Stack stack;
	stack << 3 << 5 << 10;

	while (true)
	{
		if (!stack)
			break;

		int x;
		stack >> x;
		cout << x << ' ';
	}

	cout << endl;
}