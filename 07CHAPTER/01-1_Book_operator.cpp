#include <iostream>
#include <string>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) { this->title = title; this->price = price; this->pages = pages; }
	void show() { cout << title << ' ' << price << "WON " << pages << "page" << endl; }
	string getTitle() { return title; }
	Book operator+=(int x);
	Book operator-=(int x);
};

Book Book::operator+=(int x)
{
	price += x;
	return *this;
}

Book Book::operator-=(int x)
{
	price -= x;
	return *this;
}

void main()
{
	Book a("A", 20000, 300), b("B", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}