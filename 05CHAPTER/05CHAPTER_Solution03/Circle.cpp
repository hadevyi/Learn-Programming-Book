#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(int r) { radius = r; }
int Circle::getRadius() { return radius; }
void Circle::setRadius(int r) { radius = r; }
void Circle::show() { cout << "a circle with a radius of " << radius << endl; }