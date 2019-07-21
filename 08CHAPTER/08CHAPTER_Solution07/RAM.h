#pragma once
#ifndef RAM
#define RAM
#include "BaseMemory.h"
class RAM :public BaseMemory {
public:
	RAM(int size) :BaseMemory(size) { ; }
	void write(int i, int val) { set(i, val); }
	char read(int i) { return get(i); }
};
#endif // !RAM
