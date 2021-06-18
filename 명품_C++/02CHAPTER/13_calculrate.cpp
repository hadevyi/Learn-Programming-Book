#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char line[30], *ch = NULL;
	int num1 = 0, num2 = 0;

	cout << "Plus : +\nMinus : -\nMultiplication : *\nDivision : /\nRemainder : %\n----------------------------------";
	cout << "\nSpacing required between integer and operator.\n----------------------------------\n";

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
			cout << "You entered the operator incorrectly.\n";
			exit(1);
		}

		cout << endl;
	}
}
