//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include "Date.h"

Date::Date() {
	year = 1;
	month = 1;
	day = 1;
}

Date::Date(int a, int b, int c) {
	year = a;
	month = b;
	day = c;
}

Date::Date(string s) {
	int fri, sec, leght;

	leght = s.length();

	fri = s.find('/');
	sec = s.find('/', fri + 1);

	year = stoi(s.substr(0, fri));
	month = stoi(s.substr(fri + 1, sec - 1));
	day = stoi(s.substr(sec + 1, leght));
}

void Date::show() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}

int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}