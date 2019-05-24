
//2017-1학기 C++ 20163131 당현아
#include <iostream>
using namespace std;

void main()
{
	char name_line[1000];
	int i, j, leght, count = 0, cnt = 0;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>> ";
	cin.getline(name_line, 1000, '\n');

	leght = strlen(name_line);

	for (i = 0; i < 5; i++)
	{
		cout << i << " : ";

		for (j = count; j < leght - 1; j++)
		{
			if (name_line[j] == ';')
			{
				cnt++;
				break;
			}

			cout << name_line[j];
			cnt++;
		}
		count = cnt;
		cout << endl;
	}
}
