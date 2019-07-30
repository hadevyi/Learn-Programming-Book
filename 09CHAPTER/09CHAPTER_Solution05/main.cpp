#include <iostream>
#include "ANDGate.h"
#include "ORGate.h"
#include "XORGate.h"
using namespace std;

void main(){
	ANDGate and;
	ORGate or;
	XORGate xor;

	and.set(true, false);
	or.set(true, false);
	xor.set(true, false);

	cout.setf(ios::boolalpha);	//Tells you to output a value called "true" and "false" string
	cout << and.operation() << endl;
	cout << or.operation() << endl;
	cout << xor.operation() << endl;
}