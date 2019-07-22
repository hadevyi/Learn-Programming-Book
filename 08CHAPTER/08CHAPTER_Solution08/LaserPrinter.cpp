#include <iostream>
#include <string>
#include "LaserPrinter.h"
using namespace std;

void LaserPrinter::printLaser(int pages)
{
	if (availableToner > 0 && availableToner >= pages)
	{
		if (prin(pages))
			availableToner--;

		print(pages);
	}
	else
		cout << "There is not enough toner to print." << endl;
}

void LaserPrinter::showLaser() {
	show();
	cout << "remaining toner : " << availableToner << endl;
}