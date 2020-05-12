#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle(){
	radius = 1;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::Circle(int r){
	radius = r;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::~Circle(){
	cout << "家戈磊 角青 radius = " << radius << endl;
}

void Circle::setRadius(int r){
	radius = r;
}

double Circle::getArea(){
	return 3.14*radius*radius;
}

void main(){
	Circle *p, *q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
}