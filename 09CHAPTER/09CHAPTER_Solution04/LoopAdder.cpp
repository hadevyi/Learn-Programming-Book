#include <iostream>
#include "LoopAdder.h"
using namespace std;

void LoopAdder::read() {	//Enter x, y
	cout << name << ":" << endl;
	cout << "Add from the first to the second. Please enter two numbers.>> ";
	cin >> x >> y;
}

void LoopAdder::write() {	//Result sum output
	cout << "The sum of " << x << " to " << y << " is " << sum << endl;
}

void LoopAdder::run() {
	read();	//Read x, y.
	sum = calculate();	//Calculate around the loop.
	write();	//Outputs the result sum.
}