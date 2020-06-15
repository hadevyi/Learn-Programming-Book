#include <iostream>
#include <string>
using namespace std;
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) { this->title = title; this->price = price; this->pages = pages; }
	void show() { cout << title << ' ' << price << "원 " << pages << "페이지" << endl; }
	string getTitle() { return title; }
	friend Book operator+=(Book& op, int x);
	friend Book operator-=(Book& op, int x);
}; 

Book operator+=(Book& op, int x)
{
	op.price += x;
	return op;
}

Book operator-=(Book& op, int x)
{
	op.price -= x;
	return op;
}

void main()
{
	Book a("A", 20000, 300), b("B", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}