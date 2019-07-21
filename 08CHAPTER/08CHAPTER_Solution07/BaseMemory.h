#pragma once
#ifndef BASEMEMORY
#define BASEMEMORY
class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void set(int size, int val) { mem[size] = val; }
	char get(int size) { return mem[size]; }
};
#endif // !BASEMEMORY
