#include "Circle.h"

void swap(Circle &a, Circle &b) {
	int temp;

	temp = a.putRadius();
	a.setRadius(b.putRadius());
	b.setRadius(temp);
}