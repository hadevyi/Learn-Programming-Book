#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() { cout << "---Shape---"; }
};

class Circle :public Shape {
public:
	int x;
	virtual void draw() { Shape::draw(); cout << "Circle" << endl; }
};

void main(){
	Circle circle;
	Shape *pShape = &circle;

	pShape->draw();
	pShape->Shape::draw();
}