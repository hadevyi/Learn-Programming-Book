#include <iostream>
#include "Circle.h"
using namespace std;

void increaseBy(Circle &x, Circle &y) {
	x.setRadius(x.getRadius() + y.getRadius());
}

void main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}