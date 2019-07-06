#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

void main()
{
	Book a("Youth", 20000, 300);
	string b;
	cout << "Please enter a name for the book. >> ";
	getline(cin, b);

	if (b < a)
		cout << a.getTitle() << " is behind " << b << "!" << endl;
}