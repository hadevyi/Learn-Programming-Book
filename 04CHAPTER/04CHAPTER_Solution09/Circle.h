#pragma once
#ifndef CIRCLE
#define CIRCLE
#include <string>
class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
#endif // !CIRCLE