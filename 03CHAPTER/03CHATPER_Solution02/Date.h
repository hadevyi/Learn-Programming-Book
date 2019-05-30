#pragma once
#ifndef DATE
#define DATE
#include <string>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date();
	Date(int a, int b, int c);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};
#endif // !DATE

