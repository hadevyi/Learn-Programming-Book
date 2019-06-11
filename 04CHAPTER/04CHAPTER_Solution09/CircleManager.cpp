#include <iostream>
#include "CircleManager.h"
using namespace std;

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