#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	friend Power operator++(Power& op);
	friend Power operator++(Power& op, int x);
};

void Power::show(){
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power operator++(Power& op){
	op.kick++;
	op.punch++;
	return op;
}

Power operator++(Power& op, int x){
	Power temp = op;
	op.kick++;
	op.punch++;
	return temp;
}

void main(){
	Power a(3, 5), b;
	b = ++a;
	a.show();
	b.show();

	b = a++;
	a.show();
	b.show();
}