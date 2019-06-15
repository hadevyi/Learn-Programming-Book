#include "Circle.h"

Circle::Circle() { radius = 1; }
Circle::Circle(int n) { radius = n; }
void Circle::setRadius(int n) { radius = n; }
int Circle::putRadius() { return radius; }