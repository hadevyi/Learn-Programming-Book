#pragma once
#ifndef MYQUEUE
#define MYQUEUE
#include <iostream>
#include "BaseArray.h"
class MyQueue :public BaseArray {
	int leg;
public:
	MyQueue(int capacity) :BaseArray(capacity) { leg = 0; }
	void enqueue(int val) { put(leg, val); leg++; }
	int capacity() { return getCapacity(); }
	int length() { return leg; }
	int dequeue() {
		leg--;
		int result = get(leg);
		put(leg, NULL);
		return result;
	}
};
#endif // !MYQUEUE
