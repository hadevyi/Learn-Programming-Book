#include <iostream>
#include "Circle.h"
using namespace std;

void main() {
	Circle a;
	Circle b(30);

	cout << "a : " << a.putRadius() << endl;
	cout << "b : " << b.putRadius() << endl << endl;

	swap(a, b);

	cout << "<<After performing the swap function>>" << endl;
	cout << "a : " << a.putRadius() << endl;
	cout << "b : " << b.putRadius() << endl << endl;
}