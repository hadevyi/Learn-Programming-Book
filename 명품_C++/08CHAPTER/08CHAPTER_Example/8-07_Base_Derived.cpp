#include <iostream>
#include <string>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived :private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

void main(){
	Derived x;
	//x.a = 5;
	//x.setA(10);
	//x.showA();
	//x.b = 10;
	//x.setB(10);
	x.showB();
}