//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	char histogram[10000];
	int abc[26] = { 0 }, a_start = (int)'a';
	int i, j, cnt = 0, leght;

	cout << "영문 테스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n" << endl;

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

	cout << "\n총 알파벳 수 " << cnt << endl << endl;

	for (i = 0; i < 26; i++)
	{
		cout << (char)(i + a_start) << " (" << abc[i] << ")\t: ";

		for (j = 0; j < abc[i]; j++)
			cout << "*";

		cout << endl << endl;
	}
}

/*
//실습 입력 예시 영문장
Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help. falling in love with you

Like a river flows, surely to the sea
Darling so it goes, some things aren't meant to be ;
*/
