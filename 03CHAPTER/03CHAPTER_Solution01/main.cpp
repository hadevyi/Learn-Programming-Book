//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Tower.h"
using namespace std;

void main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "It is " << myTower.getHeight() << " meters tall." << endl;
	cout << "It is " << seoulTower.getHeight() << " meters tall." << endl;
}
