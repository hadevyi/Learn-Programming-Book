//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Tower.h"
using namespace std;

Tower::Tower() {
	height = 1;
}

Tower::Tower(int h) {
	height = h;
}

int Tower::getHeight() {
	return height;
}