//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include <string>
#include "integer.h"

Integer::Integer() {
	num = 1;
}

Integer::Integer(int n) {
	num = n;
}

Integer::Integer(string s) {
	num = stoi(s);
}

int Integer::get() {
	return num;
}

void Integer::set(int n) {
	num = n;
}

bool Integer::isEven() {
	return true;
}