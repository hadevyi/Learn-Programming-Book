#include <iostream>
#include "IntStack.h"
using namespace std;

void main()
{
	int selete, num, cnt;

	cout << "How many arrays do you want to create? ";
	cin >> cnt;

	IntStack instack(cnt);

	cout << "=======================================================================" << endl;
	cout << "1 : Enter the number, 2 : Find and remove the number, 3 : Return the current count, 4 : View the current status" << endl;
	cout << "=======================================================================" << endl;

	while (true)
	{
		cout << "Click on the time you want it to be executed. >> ";
		cin >> selete;

		if (selete == 1)
		{
			cout << "Please enter the number you want to enter. >> ";
			cin >> num;

			if (instack.push(num))
				cout << "<Safely performed>" << endl;
			else
				cout << "<Action failed>" << endl;
		}
		else if (selete == 2)
		{
			cout << "Please enter a number to find and destroy. >> ";
			cin >> num;

			if (instack.pop(num))
				cout << "<Safely performed>" << endl;
			else
				cout << "<Action failed>" << endl;
		}
		else if (selete == 3)
		{
			cout << "The current number is " << instack.size() << endl;
		}
		else if (selete == 4)
		{
			instack.now();
		}
		else
		{
			cout << "<The range is 1 to 4. You've entered something wrong.>" << endl << "<Exit the program.>" << endl;
			exit(0);
		}

		cout << endl << endl;
	}
}