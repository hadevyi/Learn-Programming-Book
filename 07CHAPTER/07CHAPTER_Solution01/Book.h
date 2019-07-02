#pragma once
#ifndef BOOK
#define BOOK
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
#endif // !BOOK
