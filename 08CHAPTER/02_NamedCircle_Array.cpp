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
	NamedCircle(int radius = 0, string name = "") :Circle(radius) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

void main()
{
	NamedCircle pizza[5];
	int radius;
	double max;
	string name;

	for (int i = 0; i < 5; i++)
	{
		cout << (i + 1) << " >> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	max = pizza[0].getArea();

	for (int i = 1; i < 5; i++)
		max = max < pizza[i].getArea() ? pizza[i].getArea() : max;

	for (int i = 0; i < 5; i++)
		if (pizza[i].getArea() == max)
			cout << "The largest pizza is " << pizza[i].getName() << endl;
}