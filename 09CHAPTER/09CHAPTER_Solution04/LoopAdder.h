#pragma once
#ifndef LOOPADDER
#define LOOPADDER
class LoopAdder {	//Abstract Class
	string name;	//Roof's name
	int x, y, sum;	//Sum from x to y
	void read();	//Function to read x and y values
	void write();	//sum output function
protected:
	LoopAdder(string name = "") { this->name = name; }	//receive the name of a loop Initial value is ""
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;	//pure virtual function a function of obtaining the sum around a loop.
public:
	void run();	//a function that proceeds with a operation.
};
#endif // !LOOPADDER
