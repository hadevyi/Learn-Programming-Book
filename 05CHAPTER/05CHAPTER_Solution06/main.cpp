#include <iostream>
#include "MyIntStack.h"
using namespace std;

void main() {
	MyIntStack a(10);
	a.push(10);
	a.push(10);

	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "Value to Stack A = " << n << endl;
	b.pop(n);
	cout << "Value to Stack B = " << n << endl;
}