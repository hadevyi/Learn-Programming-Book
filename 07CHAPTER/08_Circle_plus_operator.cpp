#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << endl; }
	friend Circle operator+(int num, Circle op);
};

Circle operator+(int num, Circle op)
{
	op.radius += num;

	return op;
}

void main()
{
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}