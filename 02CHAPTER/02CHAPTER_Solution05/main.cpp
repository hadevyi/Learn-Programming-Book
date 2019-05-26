//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	char arr[100];
	int x = 0, leght, i;

	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(arr, 100, '\n');

	leght = strlen(arr);

	for (i = 0; i < leght - 1; i++)
		if (arr[i] == 'x')
			x++;

	cout << "x의 개수는 " << x << endl;
}