#include <iostream>
#include "Book.h"
using namespace std;

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