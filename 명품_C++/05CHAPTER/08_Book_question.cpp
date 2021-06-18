#include <iostream>
using namespace std;

class Book {
	char *title;
	int price;
public:
	Book(char *title, int price);
	Book(Book& b);
	~Book();
	void set(char*title, int price);
	void show();
};

Book::Book(char*title, int price) {
	int length = strlen(title);
	this->title = new char[length + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(Book&b) {
	int length = strlen(b.title);
	this->title = new char[length + 1];
	strcpy(this->title, b.title);
	this->price = b.price;
}

Book::~Book() { delete[]title; }

void Book::set(char*title, int price) {
	int length = strlen(title);
	this->title = new char[length + 1];
	strcpy(this->title, title);
	this->price = price;
}

void Book::show() {
	cout << title << " " << price << "Won" << endl;
}

void main() 
{
	Book cpp("C++", 10000);
	Book java = cpp;
	java.set("Java", 12000);
	cpp.show();
	java.show();
}
