#pragma once
#ifndef ROM
#define ROM
#include "BaseMemory.h"
class ROM :public BaseMemory {
	int leg;
public:
	ROM(int size, char x[], int num) :BaseMemory(size) {
		leg = num;
		for (int i = 0; i < num; i++)
			set(i, x[i]);
	}
	char read(int i) {
		return get(i);
	}
};
#endif // !ROM
