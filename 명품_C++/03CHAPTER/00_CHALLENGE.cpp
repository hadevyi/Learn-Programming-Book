#include <iostream>
using namespace std;

class Exp {
	int under, up;
public:
	Exp();
	Exp(int n1);
	Exp(int n1, int n2);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

Exp::Exp() {
	under = 1;
	up = 1;
}

Exp::Exp(int n1) {
	under = n1;
	up = 1;
}

Exp::Exp(int n1, int n2) {
	under = n1;
	up = n2;
}

int Exp::getValue() {
	int i = 0, result = 1;

	for (i = 0; i < up; i++)
		result *= under;

	return result;
}

int Exp::getBase() {
	return under;
}

int Exp::getExp() {
	return up;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}

void main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "the base of a" << a.getBase() << ", the index of a" << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}
