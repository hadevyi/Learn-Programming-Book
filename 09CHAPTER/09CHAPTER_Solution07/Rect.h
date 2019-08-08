#pragma once
#ifndef RECT
#define RECT
#include <string.h>
#include "Shape.h"
class Rect :public Shape {
public:
	Rect(string n = "", int w = 0, int h = 0) :Shape(n, w, h) { ; }
	double getArea() { return width * height; }
};
#endif // !RECT
