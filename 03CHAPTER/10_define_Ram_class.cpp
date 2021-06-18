#include <iostream>
#include "Ram.h"
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

Ram::Ram() {
	int i;

	for (i = 0; i < 100 * 1024; i++)
		mem[i] = 0;
}

Ram::~Ram() {
	cout << "메모리 제거됨";
}

char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}

void main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 value = " << (int)ram.read(102) << endl << endl;
}