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
	bool operator!();
};

bool Book::operator!()
{
	if (price == 0)
		return true;
	else
		return false;
}

void main()
{
	Book book("market", 0, 50);

	if (!book)
		cout << "free" << endl;
}