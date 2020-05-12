#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager();
	CircleManager(int size);
	~CircleManager();
	void serachByName();
	void serchByArea();
};

void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

string Circle::getName() {
	return name;
}

CircleManager::CircleManager() {}

CircleManager::CircleManager(int size) {
	this->size = size;
	int ra;
	string na;

	p = new Circle[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Name and radius of circle " << "th >> ";
		cin >> na >> ra;

		p[i].setCircle(na, ra);
	}
}

CircleManager::~CircleManager() { delete[] p; }

void CircleManager::serachByName() {
	string shna;

	cout << "The name of the circle you want to search for >> ";
	cin >> shna;

	for (int i = 0; i < size; i++)
		if (p[i].getName() == shna)
			cout << "The area of " << p[i].getName() << p[i].getArea() << endl;
}

void CircleManager::serchByArea() {
	int num, cont = 0;
	double resul;

	cout << "Please enter the minimum area as an integer.>> ";
	cin >> num;
	resul = num * num*3.14;

	cout << "Search for a circle greater than " << num << endl;

	for (int i = 0; i < size; i++)
		if (p[i].getArea() > num)
			cout << "the area of  " << p[i].getName() << p[i].getArea() << ", ";

	cout << endl;
}

void main() {
	int num;

	cout << "the number of circles>> ";
	cin >> num;

	CircleManager CM(num);
	CM.serachByName();
	CM.serchByArea();
}