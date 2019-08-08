#pragma once
#ifndef TRIANGULAR
#define TRIANGULAR
#include <string.h>
#include "Shape.h"
class Triangular :public Shape {
public:
	Triangular(string n = "", int w = 0, int h = 0) :Shape(n, w, h) { ; }
	double getArea() { return (width * height) / 2; }
};
#endif // !TRIANGULAR
