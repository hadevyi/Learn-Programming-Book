#include <iostream>
using namespace std;

int big(int a, int b) // a와 b 중 큰 수 리턴
{
	if (a > b) return a;
	else return b;
}

int big(int a[], int size)  // 배열 a[]에서 가장 큰 수 리턴
{
	int res = a[0];

	for (int i = 1; i < size; i++)
		if (res < a[i])res = a[i];

	return res;
}

void main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}