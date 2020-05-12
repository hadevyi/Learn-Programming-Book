#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setradius(int radius);
	double getArea();
};

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

void main() {
	Circle c;
	c.setradius(3);
	c.getArea();
}