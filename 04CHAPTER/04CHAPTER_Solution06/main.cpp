#include <iostream>
#include "Circle.h"
using namespace std; 

void main() {
	Circle c;
	int num;

	cout << "the number of circles : ";
	cin >> num;

	c.setRadius(num);
}