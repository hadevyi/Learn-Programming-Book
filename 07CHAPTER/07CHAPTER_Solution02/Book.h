#pragma once
#ifndef BOOK
#define BOOK
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
#endif // !BOOK
