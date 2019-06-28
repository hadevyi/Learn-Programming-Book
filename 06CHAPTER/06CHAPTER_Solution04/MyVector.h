#pragma once
#ifndef MYVECTOR
#define MYVECTOR
class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	void show();
	~MyVector();
};
#endif // !MYVECTOR
