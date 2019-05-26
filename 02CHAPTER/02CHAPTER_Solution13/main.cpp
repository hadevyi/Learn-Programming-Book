//2017-1학기 C++ 20163131 당현아
#include <iostream>
#include <cstring>
using namespace std;

void main()
{
	char line[30], *ch = NULL;
	int num1 = 0, num2 = 0;

	cout << "더하기 : +\n빼기 : -\n곱하기 : *\n나누기 : /\n나머지 : %\n----------------------------------";
	cout << "\n정수와 연산자 사이에 띄어쓰기 필수\n----------------------------------\n";

	while (1)
	{
		cout << "? ";
		cin.getline(line, 30, '\n');

		if (strlen(line) == 0)
			exit(1);

		num1 = atoi(strtok(line, " "));
		ch = strtok(NULL, " ");
		num2 = atoi(strtok(NULL, " "));

		cout << num1 << " " << ch << " " << num2 << " = ";

		if (strcmp(ch, "+") == 0)
			cout << (num1 + num2);
		else if (strcmp(ch, "-") == 0)
			cout << (num1 - num2);
		else if (strcmp(ch, "*") == 0)
			cout << (num1*num2);
		else if (strcmp(ch, "/") == 0)
			cout << (num1 / num2);
		else if (strcmp(ch, "%") == 0)
			cout << (num1%num2);
		else
		{
			cout << "연산자를 잘 못 입력하셨습니다.\n";
			exit(1);
		}

		cout << endl;
	}
}