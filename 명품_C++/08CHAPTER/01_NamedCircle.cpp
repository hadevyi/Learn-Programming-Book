#include <iostream>
#include <string.h>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name) :Circle(radius) { this->name = name; }
	string getname() { return name; }
	void show();
};

void NamedCircle::show()
{
	cout << "Radia is " << getRadius() << ", " << getname() << endl;
}

void main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
}