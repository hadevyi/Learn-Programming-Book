#include <iostream>
#include "Circle.h"
using namespace std; 

void Circle::setradius(int radius) {
	int num = radius, ragi = 0;

	for (int i = 0; i < num; i++) {
		cout << "radius of " << i + 1 << "th circle >> ";
		cin >> this->radius;

		if (getArea() >= 100)
			ragi++;
	}

	cout << "A circle larger than 100 is the " << ragi << "th circle." << endl;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}