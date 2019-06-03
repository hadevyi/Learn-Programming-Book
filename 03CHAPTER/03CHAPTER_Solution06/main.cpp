//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "integer.h"
using namespace std;

void main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}