#include <iostream>
#include "Oval.h"
using namespace std;

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