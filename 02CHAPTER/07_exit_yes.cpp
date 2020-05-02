#include <iostream>
using namespace std;

int main()
{
	char ch[100];

	while (true)
	{
		cout << "Enter yes if you want to exit.>> ";
		cin.getline(ch, 100, '\n');

		if (strcmp(ch, "yes") == 0)
		{
			cout << "exit..." << endl;
			break;
		}
	}
}
