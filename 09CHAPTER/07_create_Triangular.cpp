#include <iostream>
using namespace std;

class Shape {
protected:
	string name;	//The name of the shape
	int width, height;	//The width and height of the rectangle in which the shape intersects.
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; }	//dummy value return
	string getName() { return name; }	//name return
};

class Triangular :public Shape {
public:
	Triangular(string n = "", int w = 0, int h = 0) :Shape(n, w, h) { ; }
	double getArea() { return (width * height) / 2; }
};

class Rect :public Shape {
public:
	Rect(string n = "", int w = 0, int h = 0) :Shape(n, w, h) { ; }
	double getArea() { return width * height; }
};

class Oval :public Shape {
public:
	Oval(string n = "", int w = 0, int h = 0) :Shape(n, w, h) { ; }
	double getArea() { return width * height * 3.14; }	//Short radius * Long radius * circumference
};

void main(){
	Shape* p[3];
	p[0] = new Oval("A", 10, 20);
	p[1] = new Rect("B", 30, 40);
	p[2] = new Triangular("C", 30, 40);

	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << "in breadth " << p[i]->getArea() << endl;

	for (int i = 0; i < 3; i++)
		delete p[i];
}
