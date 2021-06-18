#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color();
	Color(int r, int g, int b);
	void setColor(int r, int g, int b);
	void show();
};

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

void main() {
	Color screenColor(255, 0, 0);
	Color *p;
	p = &screenColor;
	p->show();

	Color colors[3];
	p = colors;

	p->setColor(255, 0, 0);
	(p + 1)->setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 225);

	for (int i = 0; i < 3; i++)
		(p + i)->show();
}