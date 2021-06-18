#include <iostream>
#include <string.h>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint :public Point {
	string name;
public:
	ColorPoint(int x, int y, string name) : Point(x, y) { this->name = name; }
	void setPoint(int x, int y);
	void setColor(string name);
	void show();
};

void ColorPoint::setPoint(int x, int y){
	move(x, y);
}

void ColorPoint::setColor(string name){
	this->name = name;
}

void ColorPoint::show(){
	cout << name << "Points located in  (" << getX() << "," << getY() << ")in color." << endl;
}

void main(){
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}