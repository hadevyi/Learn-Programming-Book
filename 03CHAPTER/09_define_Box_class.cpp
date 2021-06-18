#include <iostream>
using namespace std;

class Box {
	int width, height;
	char fill;
public:
	Box();
	Box(int w, int h);
	void setFill(char c);
	void setSize(int w, int h);
	void draw();
};

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

void main() {
	Box b(10, 2);
	b.draw();

	cout << endl << endl;

	b.setSize(7, 4);
	b.setFill('^');
	b.draw();

	cout << endl << endl;
}