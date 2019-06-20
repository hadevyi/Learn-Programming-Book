#include <iostream>
#include "Accumulator.h"
using namespace std;

void main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}