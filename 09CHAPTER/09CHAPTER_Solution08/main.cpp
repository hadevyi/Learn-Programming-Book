#include <iostream>
#include "Oval.h"
#include "Rect.h"
#include "Triangular.h"
using namespace std;

void main()
{
	Shape* p[3];
	p[0] = new Oval("A", 10, 20);
	p[1] = new Rect("B", 30, 40);
	p[2] = new Triangular("C", 30, 40);

	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << "in breadth " << p[i]->getArea() << endl;

	for (int i = 0; i < 3; i++)
		delete p[i];
}