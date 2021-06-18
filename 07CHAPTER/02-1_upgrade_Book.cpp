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
	void operator==(int x);
	void operator==(string s1);
	void operator==(Book op);
};

void Book::operator==(int x)
{
	if (price == x)
		cout << "a net price " << x  << endl;
}

void Book::operator==(string s1)
{
	if (title == s1)
		cout << s1  << endl;
}

void Book::operator==(Book op)
{
	if (price = op.price && pages == op.pages && title == op.title)
		cout << "The two books are the same." << endl;
}

void main()
{
	Book a("C++", 30000, 500), b("°íÇ° C", 30000, 500);
	a == 30000;
	a == "C++";
	a == b;
}