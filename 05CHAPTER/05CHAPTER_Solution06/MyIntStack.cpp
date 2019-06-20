#include "MyIntStack.h"

MyIntStack::MyIntStack() {}

MyIntStack::MyIntStack(int size) { tos = -1; p = new int[size]; this->size = size; }

MyIntStack::MyIntStack(MyIntStack&s) {
	this->p = new int[s.size];
	this->size = s.size;
	this->tos = s.tos;

	for (int i = 0; i <= s.tos; i++)
		this->p[i] = s.p[i];
}

MyIntStack::~MyIntStack() { delete[]p; }

bool MyIntStack::push(int n) {
	tos++;

	if (tos == 10)return false;
	else { p[tos] = n; return true; }
}

bool MyIntStack::pop(int &n) {
	if (tos == -1)return false;
	else { n = p[tos]; return true; }

	tos--;
}