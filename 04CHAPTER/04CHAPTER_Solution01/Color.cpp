#include "Color.h"
#include <iostream>
using namespace std;

Color::Color() { red = green = blue = 0; }

Color::Color(int r, int g, int b) {
	red = r;
	green = g;
	blue = b;
}

void Color::setColor(int r, int g, int b) {
	red = r;
	green = g;
	blue = b;
}

void Color::show() {
	cout << red << " " << green << " " << blue << endl;
}