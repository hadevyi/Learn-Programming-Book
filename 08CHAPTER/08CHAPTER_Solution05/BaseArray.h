#pragma once
#ifndef BASEARRAY
#define BASEARRAY
class BaseArray {
private:
	int capacity;	//Size of Array
	int* mem;	//Pointer of memory to create an integer array
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
#endif // !BASEARRAY
