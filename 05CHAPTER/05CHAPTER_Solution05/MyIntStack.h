#pragma once
#ifndef MYINTSTACK
#define MYINTSTACK
class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack();
	bool push(int n);
	bool pop(int &n);
};
#endif // !MYINTSTACK
