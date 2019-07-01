#pragma once
#ifndef HISTOGRAM
#define HISTOGRAM
#include <string>
class Histogram {
	string word;
public:
	Histogram(string word);
	Histogram& operator<<(string word);
	Histogram& operator<<(char ch);
	void operator!();
};
#endif // !HISTOGRAM
