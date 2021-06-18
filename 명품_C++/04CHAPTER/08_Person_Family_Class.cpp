#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person();
	Person(string name);
	string getName();
	void setName(string name);
};

class Family {
	int size;
	Person *p;
	string name;
public:
	Family(string name, int size);
	~Family();
	void show();
	void setName(int count, string name);
};

Person::Person() {}
Person::Person(string name) { this->name = name; }
string Person::getName() { return name; }
void Person::setName(string name) { this->name = name; }

Family::Family(string name, int size) {
	this->name = name;
	this->size = size;
	p = new Person[size];
}

void Family::setName(int count, string name) { p[count].setName(name); }

void Family::show() {

	cout << name << "My family is " << size << " as follows." << endl;

	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";

	cout << endl;
}
Family::~Family() { delete[] p; }

void main() {
	Family *simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr.Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}