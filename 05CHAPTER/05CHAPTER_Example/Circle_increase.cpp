#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
	int getRadius();
	void setRadius(int radius);
};

Circle::Circle() {
	radius = 1;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::Circle(int r){
	this->radius = r;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::~Circle(){
	cout << "家戈磊 角青 radius = " << radius << endl;
}

double Circle::getArea(){
	return 3.14*radius*radius;
}

int Circle::getRadius(){
	return radius;
}

void Circle::setRadius(int radius){
	this->radius = radius;
}

void increase(Circle &c){
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main(){
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}