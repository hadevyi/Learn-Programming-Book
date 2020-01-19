#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle();
	double getArea();
	static int getNumOfCircles();
};

Circle::Circle(int r) {
	radius = r; 
	numOfCircles++;
}

Circle::~Circle() { numOfCircles--; }

double Circle::getArea(){
	return 3.14*radius*radius;
}

int Circle::getNumOfCircles(){
	return numOfCircles;
}

int Circle::numOfCircles = 0;

void main(){
	Circle *p = new Circle[10];
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	delete[]p;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle b;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
}