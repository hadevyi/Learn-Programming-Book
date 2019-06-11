#pragma once
#ifndef HISTOGRAM
#define HISTOGRAM
#include <string>
class Histogram {
	string s;
	int legth;
	int abc[26];
public:
	Histogram(string s);
	void put(string s);
	void putc(char c);
	void print();
};
#endif // !HISTOGRAM
