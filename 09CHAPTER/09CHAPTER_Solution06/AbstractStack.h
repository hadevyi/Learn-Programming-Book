#pragma once
#ifndef ABSTRACTSTACK
#define ABSTRACTSTACK
class AbstractStack {
public:
	virtual bool push(int n) = 0;	//Push n to stack. If the stack is full, false return
	virtual bool pop(int& n) = 0;	//Store the integer you pop in the stack to n and return if the stack is empty
	virtual int size() = 0;	//Returns the number of integers stored in the current stack
};
#endif // !ABSTRACTSTACK

