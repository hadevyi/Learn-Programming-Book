#include <iostream>
#include "Book.h"
using namespace std;

void operator==(Book op, int x)
{
	if (op.price == x)
		cout << title << ' ' << price << "WON " << pages << "Page" << endl;
}

void operator==(Book op, string s1)
{
	if (op.title == s1)
		cout << s1 << endl;
}

void operator==(Book op1, Book op2)
{
	if (op1.price = op2.price && op1.pages == op2.pages && op1.title == op2.title)
		cout << "The two books are the same." << endl;
}