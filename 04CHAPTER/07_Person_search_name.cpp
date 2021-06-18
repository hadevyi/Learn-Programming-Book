#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName();
	string getTel();
	void set(string name, string tel);
};

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

void main() {
	Person p_n[3];
	string na, te, sch;

	cout << "Please enter your name and phone number." << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "the total number of people" << i << " >> ";
		cin >> na >> te;
		p_n[i].set(na, te);
	}

	cout << "Everyone's name is...";

	for (int i = 0; i < 3; i++)
		cout << p_n[i].getName() << " ";

	cout << endl << "Search the phone number. Please enter a name. >> ";
	cin >> sch;

	cout << "The phone number is";

	for (int i = 0; i < 3; i++)
		if (p_n[i].getName() == sch)
			cout << p_n[i].getTel();

	cout << endl;
}