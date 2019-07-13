#pragma once
#ifndef NAMEDCIRCLE
#define NAMEDCIRCLE
#include <string.h>
#include "Circle.h"
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name) :Circle(radius) { this->name = name; }
	string getname() { return name; }
	void show();
};
#endif // !NAMEDCIRCLE
