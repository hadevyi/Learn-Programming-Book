//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Tower.h"
using namespace std;

void main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}