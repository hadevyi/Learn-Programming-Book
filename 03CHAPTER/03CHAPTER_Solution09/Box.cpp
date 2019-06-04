#include <iostream>
#include "Box.h"
using namespace std;

Box::Box() {
	width = 1;
	height = 1;
	fill = '*';
}

Box::Box(int w, int h) {
	width = w;
	height = h;
	fill = '*';
}

void Box::setFill(char c) {
	fill = c;
}

void Box::setSize(int w, int h) {
	width = w;
	height = h;
}

void Box::draw() {

	for (int i = 1; i <= width * height; i++)
	{
		cout << fill;

		if (i % width == 0)
			cout << '\n';
	}
}