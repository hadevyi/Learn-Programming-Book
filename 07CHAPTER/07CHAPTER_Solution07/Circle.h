#pragma once
#ifndef CIRCLE
#define CIRCLE
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << endl; }
	friend void operator++(Circle& op);
	friend Circle operator++(Circle& op, int n);
};
#endif // !CIRCLE
