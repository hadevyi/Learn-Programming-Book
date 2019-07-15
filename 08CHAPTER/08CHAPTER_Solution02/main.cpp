#include <iostream>
#include "NamedCircle.h"
using namespace std;

void main()
{
	NamedCircle pizza[5];
	int radius;
	double max;
	string name;

	for (int i = 0; i < 5; i++)
	{
		cout << (i + 1) << " >> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	max = pizza[0].getArea();

	for (int i = 1; i < 5; i++)
		max = max < pizza[i].getArea() ? pizza[i].getArea() : max;

	for (int i = 0; i < 5; i++)
		if (pizza[i].getArea() == max)
			cout << "The largest pizza is " << pizza[i].getName() << endl;
}