#pragma once
#ifndef NAMEDCIRCLE
#define NAMEDCIRCLE
#include <string.h>
#include "Circle.h"
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "") :Circle(radius) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};
#endif // !NAMEDCIRCLE
