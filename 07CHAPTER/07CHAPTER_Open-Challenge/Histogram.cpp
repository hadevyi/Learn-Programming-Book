#include <iostream>
#include <string>
#include "Histogram.h"
using namespace std;

Histogram::Histogram(string word)
{
	this->word = word;
}

Histogram& Histogram::operator<<(string word)
{
	this->word += word;

	return *this;
}

Histogram& Histogram::operator<<(char ch)
{
	this->word += ch;

	return *this;
}

void Histogram::operator!()
{
	int abc = 0, count = 0;
	char ch, alpabet[26];

	cout << word << endl << endl;

	for (int i = 0; i < 26; i++)
		alpabet[i] = 0;

	for (int i = 0; i < (int)word.size(); i++)
	{
		ch = word.at(i);

		if (isalpha(ch))
		{
			abc = tolower(ch);
			alpabet[abc - 'a']++;
			count++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " : ";

		for (int j = 0; j < alpabet[i]; j++)
			cout << '*';

		cout << endl;
	}
}