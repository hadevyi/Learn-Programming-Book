#pragma once
#ifndef MYSTACK
#define MYSTACK
#include <iostream>
#include "BaseArray.h"
class MyStack : public BaseArray {
	int leg;
public:
	MyStack(int capacity) :BaseArray(capacity) { leg = 0; }
	void push(int val) { put(leg, val); leg++; }
	int capacity() { return getCapacity(); }
	int length() { return leg; }
	int pop() {
		leg--;
		int result = get(leg);
		return result;
	}
};
#endif // !MYSTACK
