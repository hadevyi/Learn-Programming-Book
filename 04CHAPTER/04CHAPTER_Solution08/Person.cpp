#include "Person.h"
#include <string>

Person::Person() {}
Person::Person(string name) { this->name = name; }
string Person::getName() { return name; }
void Person::setName(string name) { this->name = name; }