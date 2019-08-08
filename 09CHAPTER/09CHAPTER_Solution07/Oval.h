#pragma once
#ifndef OVAL
#define OVAL
#include <string.h>
#include "Shape.h"
class Oval :public Shape {
public:
	Oval(string n = "", int w = 0, int h = 0) :Shape(n, w, h) { ; }
	double getArea() { return width * height * 3.14; }	//Short radius * Long radius * circumference
};
#endif // !OVAL
