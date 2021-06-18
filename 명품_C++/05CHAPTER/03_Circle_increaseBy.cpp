#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r);
	int getRadius();
	void setRadius(int r);
	void show();
};

Circle::Circle(int r) { radius = r; }
int Circle::getRadius() { return radius; }
void Circle::setRadius(int r) { radius = r; }
void Circle::show() { cout << "a circle with a radius of " << radius << endl; }

void increaseBy(Circle &x, Circle &y) {
	x.setRadius(x.getRadius() + y.getRadius());
}

void main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}