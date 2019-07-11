#pragma once
#ifndef STACK
#define STACK
class Stack {
	int arr[10];
	int count;
public:
	Stack() { count = -1; }
	Stack& operator<<(int num);
	bool operator!();
	Stack operator >> (int& num);
};
#endif // ! STACK
