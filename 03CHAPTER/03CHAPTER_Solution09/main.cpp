//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Box.h"
using namespace std;


void main() {
	Box b(10, 2);
	b.draw();

	cout << endl << endl;

	b.setSize(7, 4);
	b.setFill('^');
	b.draw();

	cout << endl << endl;
}