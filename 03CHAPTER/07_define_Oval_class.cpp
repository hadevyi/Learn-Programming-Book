#include <iostream>
using namespace std;

class Oval {
	int width;
	int height;
public:
	Oval();
	Oval(int n1, int n2);
	~Oval();
	void set(int n1, int n2);
	void show();
	int getWidth();
	int getHeight();
};

Oval::Oval() {
	width = 1;
	height = 1;
}

Oval::Oval(int n1, int n2) {
	width = n1;
	height = n2;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;
}

void Oval::set(int n1, int n2) {
	width = n1;
	height = n2;
}

void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

void main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}