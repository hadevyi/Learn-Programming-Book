#include <iostream>
#include <string.h>
#include "ColorPoint.h"
using namespace std;

void ColorPoint::setPoint(int x, int y)
{
	move(x, y);
}

void ColorPoint::setColor(string name)
{
	this->name = name;
}

void ColorPoint::show()
{
	cout << name << "Points located in  (" << getX() << "," << getY() << ")in color." << endl;
}