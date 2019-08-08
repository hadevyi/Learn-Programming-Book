#pragma once
#ifndef SHAPE
#define SHAPE
#include <string.h>
class Shape {
protected:
	string name;	//The name of the shape
	int width, height;	//The width and height of the rectangle in which the shape intersects.
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; }	//dummy value return
	string getName() { return name; }	//name return
};
#endif // !SHAPE
