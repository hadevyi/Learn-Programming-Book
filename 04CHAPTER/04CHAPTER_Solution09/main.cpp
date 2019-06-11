#include <iostream>
#include "CircleManager.h"
using namespace std;

void main() {
	int num;

	cout << "the number of circles>> ";
	cin >> num;

	CircleManager CM(num);
	CM.serachByName();
	CM.serchByArea();
}