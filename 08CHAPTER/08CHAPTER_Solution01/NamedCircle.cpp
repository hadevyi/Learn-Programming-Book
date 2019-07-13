#include <iostream>
#include <string>
#include "NamedCircle.h"
using namespace std;

void NamedCircle::show()
{
	cout << "Radia is " << getRadius() << ", " << getname() << endl;
}