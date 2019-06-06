#include "Exp.h"

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