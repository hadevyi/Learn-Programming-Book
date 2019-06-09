#include <string>
#include "Person.h"

Person::Person() {
	name = "A";
	tel = "012-3456-7890";
}

string Person::getName() { return name; }
string Person::getTel() { return tel; }

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}