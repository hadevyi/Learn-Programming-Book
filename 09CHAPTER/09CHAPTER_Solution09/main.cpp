#include <iostream>
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;

void main(){
	char ch;
	int print, page;
	InkJetPrinter inkprint("Officejet V40", "HP", 0, 5, 10);
	LaserPrinter laserprint("SCX-6x45", "Samsung Electronics", 0, 3, 20);

	cout << "The two printers currently in operation are as follows." << endl;
	inkprint.show();
	laserprint.show();

	while (true)	{
		cout << endl << endl << "Printer (1:Inkjet, 2:Laser) and Purchase Input >> ";
		cin >> print >> page;

		if (print == 1)
		{
			switch (inkprint.print(page))
			{
			case -1:
				cout << "There is not enough paper to print" << endl;
				break;
			case -2:
				cout << "There is not enough ink to print." << endl;
				break;
			case 0:
				cout << "Printed." << endl;
				break;
			default:
				break;
			}
		}
		else if (print == 2)
		{
			switch (laserprint.print(page))
			{
			case -1:
				cout << "There is not enough paper to print" << endl;
				break;
			case -2:
				cout << "There is not enough toner to print." << endl;
				break;
			case 0:
				cout << "Printed." << endl;
				break;
			default:
				break;
			}
		}
		else
		{
			cout << "You've entered something wrong. Printers are number one or number two. " << endl;
		}

		inkprint.show();
		laserprint.show();

		cout << "Do you want to continue printing(y/n) >> ";
		cin >> ch;

		if (ch == 'y')
			cout << endl;
		else if (ch == 'n')
			exit(0);
	}
}
