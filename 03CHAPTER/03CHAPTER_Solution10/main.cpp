#include <iostream>
#include "Ram.h"
using namespace std;

void main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 value = " << (int)ram.read(102) << endl << endl;
}