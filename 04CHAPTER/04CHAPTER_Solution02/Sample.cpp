#include <iostream>
#include "Sample.h"
using namespace std;

Sample::Sample(int n) {
	size = n;
	p = new int[n];
}

Sample::~Sample() {
	delete[] p;
}

void Sample::read() {
	cout << "Input : ";

	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}

void Sample::write() {
	cout << "Output : ";

	for (int i = 0; i < size; i++)
		cout << p[i] << " ";
}

int Sample::big() {
	int max;

	max = p[0];

	for (int i = 1; i < size; i++)
		if (max < p[i])
			max = p[i];

	return max;
}