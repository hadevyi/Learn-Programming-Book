#include <iostream>
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
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
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

void main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
