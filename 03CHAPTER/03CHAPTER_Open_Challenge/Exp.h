#pragma once
#ifndef EXP_H
#define EXP_H

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

#endif // !EXP_H
