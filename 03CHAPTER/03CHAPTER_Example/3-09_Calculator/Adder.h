#pragma once
#ifndef ADDER_H
#define ADDER_H

class Adder{
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};
#endif // !ADDER_H