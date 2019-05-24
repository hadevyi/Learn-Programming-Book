//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	char s1[10], s2[10];

	cout << "새 암호를 입력하세요>> ";
	cin >> s1;

	cout << "새 암호를 다시 한 번 입력하세요>> ";
	cin >> s2;

	if (strcmp(s1, s2) == 0)
		cout << "같습니다." << endl;
	else
		cout << "같지 않습니다." << endl;
}