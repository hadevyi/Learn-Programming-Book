#include <iostream>
#include <string.h>
using namespace std;

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

void LoopAdder::read() {	//Enter x, y
	cout << name << ":" << endl;
	cout << "Add from the first to the second. Please enter two numbers.>> ";
	cin >> x >> y;
}

void LoopAdder::write() {	//Result sum output
	cout << "The sum of " << x << " to " << y << " is " << sum << endl;
}

void LoopAdder::run() {
	read();	//Read x, y.
	sum = calculate();	//Calculate around the loop.
	write();	//Outputs the result sum.
}

class DoWhileLoopAdder :public LoopAdder {
public:
	DoWhileLoopAdder(string name) :LoopAdder(name) { ; }
	int calculate();
};

class WhileLoopAdder : public LoopAdder {
public:
	WhileLoopAdder(string name) :LoopAdder(name) { ; }
	int calculate();
};

void main(){
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do While Loop");

	whileLoop.run();
	doWhileLoop.run();
}

int WhileLoopAdder::calculate() {
	int x = getX();
	int y = getY();
	int sum = 0;

	while (x <= y) {
		sum += x;
		x++;
	}

	return sum;
}
