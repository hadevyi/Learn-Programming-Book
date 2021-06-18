#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int n);
	void setRadius(int n);
	int putRadius();
};

Circle::Circle() { radius = 1; }
Circle::Circle(int n) { radius = n; }
void Circle::setRadius(int n) { radius = n; }
int Circle::putRadius() { return radius; }

void swap(Circle &a, Circle &b) {
	int temp;

	temp = a.putRadius();
	a.setRadius(b.putRadius());
	b.setRadius(temp);
}

void main() {
	Circle a;
	Circle b(30);

	cout << "a : " << a.putRadius() << endl;
	cout << "b : " << b.putRadius() << endl << endl;

	swap(a, b);

	cout << "<<After performing the swap function>>" << endl;
	cout << "a : " << a.putRadius() << endl;
	cout << "b : " << b.putRadius() << endl << endl;
}