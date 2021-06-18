#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << endl; }
	friend void operator++(Circle& op);
	friend Circle operator++(Circle& op, int n);
};

void operator++(Circle& op)
{
	op.radius++;
}

Circle operator++(Circle& op, int n)
{
	Circle temp;
	temp.radius = op.radius;
	op.radius++;
	return temp;
}

void main()
{
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}