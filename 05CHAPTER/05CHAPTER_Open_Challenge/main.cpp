#include <iostream>
#include <string>
#include "Morse.h"
using namespace std;

void main() {
	Morse m;
	string text, morse;

	cout << "Please enter English text below. Replace with a Morse code." << endl;
	getline(cin, text);
	m.text2Morse(text, morse);
	cout << morse << endl << endl;

	cout << "Replace the Morse code with English text." << endl;
	m.morse2Text(morse, text);
	cout << text << endl << endl;
}