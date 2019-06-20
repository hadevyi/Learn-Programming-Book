#include "MyIntStack.h"

MyIntStack::MyIntStack() {
	tos = 0;
}

bool MyIntStack::push(int n) {
	if (tos == 10)
		return false;
	else {
		p[tos] = n;
		tos++;
		return true;
	}
}

bool MyIntStack::pop(int &n) {
	tos--;
	if (tos == -1)
		return false;
	else {
		n = p[tos];
		return true;
	}
}