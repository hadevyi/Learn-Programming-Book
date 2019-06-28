#include <iostream>
#include "MyVector.h"
using namespace std;

MyVector::MyVector(int n, int val)
{
	size = n;
	mem = new int[n];

	for (int i = 0; i < size; i++)
		mem[i] = val;
}

void MyVector::show()
{
	int cnt = 0;

	for (int i = 0; i < size; i++) {
		cout << mem[i] << ' ';
		cnt++;

		if (cnt % 10 == 0)
			cout << endl;
	}
}

MyVector::~MyVector() { delete[]mem; }