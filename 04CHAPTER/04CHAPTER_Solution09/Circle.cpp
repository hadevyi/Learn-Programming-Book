#include <string>
#include "Circle.h"

void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

string Circle::getName() {
	return name;
}