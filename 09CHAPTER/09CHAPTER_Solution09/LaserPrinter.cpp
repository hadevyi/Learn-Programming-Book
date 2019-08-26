#include <iostream>
#include "LaserPrinter.h"
using namespace std;

int LaserPrinter::print(int pages) {

	if (avavilableCount() < pages)	{
		return -1;
	}
	else if (availableToner < pages)	{
		return -2;
	}
	else	{
		printed(pages);
		availableToner--;

		return 0;
	}
}

void LaserPrinter::show() {
	cout << "LaserPrinter : " << getModel() << ", " << getManu() << ", leftover paper " << avavilableCount() << ", leftover ink " << availableToner << endl;
}