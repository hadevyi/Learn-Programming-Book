#include <iostream>
using namespace std;

int main()
{
	char histogram[10000];
	int abc[26] = { 0 }, a_start = (int)'a';
	int i, j, cnt = 0, leght;

	cout << "Enter English test. Draw a histogram." << endl;
	cout << "The end of the text is ;. Up to 10000.\n" << endl;

	cin.getline(histogram, 10000, ';');
	leght = strlen(histogram);

	for (i = 0; i < leght - 1; i++)
	{
		if (isalpha(histogram[i]))
		{
			histogram[i] = tolower(histogram[i]);
			abc[histogram[i] - a_start]++;
			cnt++;
		}
	}

	cout << "\nTotal alphabets is " << cnt << endl << endl;

	for (i = 0; i < 26; i++)
	{
		cout << (char)(i + a_start) << " (" << abc[i] << ")\t: ";

		for (j = 0; j < abc[i]; j++)
			cout << "*";

		cout << endl << endl;
	}
}

/*
//Practical Input Example English Chapter
Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help. falling in love with you

Like a river flows, surely to the sea
Darling so it goes, some things aren't meant to be ;
*/
