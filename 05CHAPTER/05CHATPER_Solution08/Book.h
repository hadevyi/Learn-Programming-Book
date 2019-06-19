#pragma once
#ifndef BOOK
#define BOOK
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
#endif // !BOOK
