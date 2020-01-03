#include <iostream>
#include 'bigger.h'
using namespace std;

class Comparable {
	int radius;
public:
	Comparable(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	virtual bool operator>(Comparable& op2) = 0;
	virtual bool operator<(Comparable& op2) = 0;
	virtual bool operator==(Comparable& op2) = 0;
};

class Circle :public Comparable{
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator>(Comparable& op2);
	bool operator<(Comparable& op2);
	bool operator==(Comparable& op2);
};

bool Circle::operator>(Comparable& op2){
	if (this->radius > op2.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator<(Comparable& op2){
	if (this->radius < op2.getRadius())
		return true;
	else
		return false;

}
bool Circle::operator==(Comparable& op2){
	if (this->radius == op2.getRadius())
		return true;
	else
		return false;
}