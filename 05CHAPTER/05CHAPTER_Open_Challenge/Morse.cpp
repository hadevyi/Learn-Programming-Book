#include <iostream>
#include <string>
#include "Morse.h"
using namespace std;

Morse::Morse() {
	string alphabet_morse[26] = { ".-", "-...", "-.-.", "-..", ".","..-.", "--.", "....", "..", ".---","-.-", ".-..", "--", "-.", "---",".--.", "--.-", ".-.", "...", "-","..-", "...-", ".--", "-..-", "-.--", "--.." };
	string digit_morse[10] = { "-----", ".----", "..---", "...--", "....-",	".....", "-....", "--...", "---..", "----." };
	slash = "-..-.";
	question = "..--..";
	comma = "--..--";
	period = ".-.-.-";
	plus = ".-.-.";
	equal = "-...-";

	for (int i = 0; i < 26; i++)
		alphabet[i] = alphabet_morse[i];

	for (int i = 0; i < 10; i++)
		digit[i] = digit_morse[i];
}

void Morse::text2Morse(string text, string &morse) {
	morse = "";

	int legth = text.length();

	for (int i = 0; i < legth; i++)
	{
		char ch = text.at(i);

		if (isalpha(ch))
		{
			if (ch >= 'A'&&ch <= 'Z')
				towlower(ch);
			morse += alphabet[(int)(ch - 'a')] + " ";
		}
		else if (ch == ' ')
			morse += "  ";
		else if (isdigit(ch))
			morse += digit[(int)(ch - '1')] + " ";
		else
		{
			if (ch == '/') morse += slash + " ";
			else if (ch == '?') morse += question + " ";
			else if (ch == ',') morse += comma + " ";
			else if (ch == '.') morse += period + " ";
			else if (ch == '+') morse += plus + " ";
			else if (ch == '=') morse += equal + " ";
		}
	}
}

bool Morse::morse2Text(string morse, string&text) {
	int before;
	int pos = -1;
	string retext;
	bool exit = true;

	string al[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i",
		"j", "k", "l", "m", "n", "o", "p", "q", "r", "s",
		"t", "u", "v", "w", "x", "y", "z" };
	string di[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

	while (1) {
		before = pos + 1;
		pos = morse.find(" ", before);

		string temp = morse.substr(before, pos - before);

		for (int i = 0; i < 26; i++) {
			if (temp == alphabet[i]) {
				retext.append(al[i]);
				exit = false;
				break;
			}
		}
		if (exit) {
			for (int i = 0; i < 10; i++) {
				if (temp == digit[i]) {
					retext.append(di[i]);
					break;
				}
			}

			if (temp == slash) retext.append("/");
			else if (temp == question) retext.append("?");
			else if (temp == comma) retext.append(",");
			else if (temp == period) retext.append(".");
			else if (temp == plus) retext.append("+");
			else if (temp == equal) retext.append("=");
		}

		exit = true;

		if (pos == morse.size() - 1) break;;  //while¹® Á¾·á

		while (morse.at(pos) == ' ' && morse.at(pos + 1) == ' ' && morse.at(pos + 2) == ' ') {
			retext.append(" ");
			pos += 2;
		}

	}

	if (retext == text) return true;
	else return false;
}