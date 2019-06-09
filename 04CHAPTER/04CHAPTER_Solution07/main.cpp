#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

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