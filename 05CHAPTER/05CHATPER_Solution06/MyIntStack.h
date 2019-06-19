#pragma once
#ifndef MYINTSTACK
#define MYINTSTACK
class MyIntStack {
	int *p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(MyIntStack&s);
	~MyIntStack();
	bool push(int n);
	bool pop(int &n);
};
#endif // !MYINTSTACK
