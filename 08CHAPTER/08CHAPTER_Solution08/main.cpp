#include <iostream>
#include <string>
#include "LaserPrinter.h"
#include "InkjetPrinter.h"
using namespace std;

void main()
{
	int printer_selete, page;
	char yes_no;
	InkjetPrinter p1("Officejet V40", "HP", 5, 10);
	LaserPrinter p2("SCX-6x45", "Samsung", 3, 20);

	cout << "The two printers currently in operation are as follows." << endl;
	cout << "InkjetPrinter : "; p1.showInk();
	cout << "LaserPrinter : "; p2.showLaser();
	cout << endl;

	while (true)
	{
		cout << "Please Enter Print(1:InkjetPrinter, 2:LaserPrinter) and Page >> ";
		cin >> printer_selete >> page;

		if (printer_selete == 1)
			p1.printInkJet(page);
		else if (printer_selete == 2)
			p2.printLaser(page);
		else
			cout << "Printers are only inkjet and laser. Please re-enter." << endl;

		p1.showInk();
		p2.showLaser();

		cout << "Do you want to continue printing (y/n) >> ";
		cin >> yes_no;

		while (yes_no != 'y' && yes_no != 'n')
		{
			cout << "You've entered something wrong. Do you want to continue printing (y/n) >>";
			cin >> yes_no;
		}

		if (yes_no == 'y')
			cout << endl;
		else if (yes_no == 'n')
			exit(0);

		cin.ignore();
		cout << endl;
	}
}