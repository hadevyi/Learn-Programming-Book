#include <iostream>
#include <cstring>
#include <string>
#include "Histogram.h"
using namespace std;

Histogram::Histogram(string s) {
	legth = 0;

	for (int i = 0; i < 26; i++)
		abc[i] = 0;

	this->s += s + "\n";

	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s.at(i)))
		{
			tolower(s.at(i));
			abc[(int)s.at(i) - 'a']++;
			legth++;
		}
	}
}

void Histogram::put(string s) {
	this->s += s;

	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s.at(i)))
		{
			tolower(s.at(i));
			abc[(int)s.at(i) - 'a']++;
			legth++;
		}
	}
}
void Histogram::putc(char c) { this->s += c; }
void Histogram::print() {
	cout << s << endl << endl;
	cout << "Total alphabets " << legth << endl << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " (" << abc[i] << ") : ";

		for (int j = 0; j < abc[i]; j++)
			cout << "*";

		cout << endl;
	}
}