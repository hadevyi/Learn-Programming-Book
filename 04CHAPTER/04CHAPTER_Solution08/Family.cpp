#include "Family.h"
#include "Person.h"
#include <string>
using namespace std;

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