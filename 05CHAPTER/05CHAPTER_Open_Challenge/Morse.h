#pragma once
#ifndef MORSE
#define MORSE
#include <string>
class Morse {
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period, plus, equal;
public:
	Morse();
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
};
#endif // !MORSE
