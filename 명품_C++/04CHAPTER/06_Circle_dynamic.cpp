#include <iostream>
using namespace std; 

class Circle {
	int radius;
	int num;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	int num = radius, ragi = 0;

	for (int i = 0; i < num; i++)
	{
		cout << "radius of " << i + 1 << "th circle >> ";
		cin >> this->radius;

		if (getArea() >= 100)
			ragi++;
	}

	cout << "There are " << ragi << " circles with an area greater than 100." << endl;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

void main() {
	Circle c;
	int num;

	cout << "the number of circles : ";
	cin >> num;

	c.setRadius(num);
}