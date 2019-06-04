#include <iostream>
#include "Ram.h"
using namespace std;

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