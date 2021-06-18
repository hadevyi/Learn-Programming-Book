#include <iostream>
using namespace std;

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

MyIntStack::MyIntStack() {}

MyIntStack::MyIntStack(int size) { tos = -1; p = new int[size]; this->size = size; }

MyIntStack::MyIntStack(MyIntStack&s) {
	this->p = new int[s.size];
	this->size = s.size;
	this->tos = s.tos;

	for (int i = 0; i <= s.tos; i++)
		this->p[i] = s.p[i];
}

MyIntStack::~MyIntStack() {
	delete[]p;
}

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

void main() {
	MyIntStack a(10);
	a.push(10);
	a.push(10);

	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "Value to Stack A = " << n << endl;
	b.pop(n);
	cout << "Value to Stack B = " << n << endl;
}