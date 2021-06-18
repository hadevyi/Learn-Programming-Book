#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string word;
public:
	Histogram(string word);
	Histogram& operator<<(string word);
	Histogram& operator<<(char ch);
	void operator!();
};

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

void main()
{
	Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
	song << "falling" << " in love with you." << "- by ";
	song << 'k' << 'i' << 't';
	!song;
}