#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) { this->title = title; this->price = price; this->pages = pages; }
	void show() { cout << title << ' ' << price << "WON " << pages << "Page" << endl; }
	string getTitle() { return title; }
	friend void operator==(Book op, int x);
	friend void operator==(Book op, string s1);
	friend void operator==(Book op1, Book op2);
};

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

void main()
{
	Book a("C++", 30000, 500), b("C", 30000, 500);
	a == 30000;
	a == "C++";
	a == b;
}