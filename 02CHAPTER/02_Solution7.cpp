//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	char ch[100];

	while (true)
	{
		cout << "종료하고싶으면 yes를 입력하세요>> ";
		cin.getline(ch, 100, '\n');

		if (strcmp(ch, "yes") == 0)
		{
			cout << "종료합니다..." << endl;
			break;
		}
	}
}