#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int h);
	int getHeight();
};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int h) {
	height = h;
}

int Tower::getHeight() {
	return height;
}

void main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "It is " << myTower.getHeight() << " meters tall." << endl;
	cout << "It is " << seoulTower.getHeight() << " meters tall." << endl;
}
