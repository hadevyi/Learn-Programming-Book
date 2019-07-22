#include <iostream>
#include <string>
#include "InkjetPrinter.h"
using namespace std;

void InkjetPrinter::printInkJet(int pages)
{
	if (availableInk >= pages)
	{
		if (prin(pages))
			availableInk = availableInk - pages;

		print(pages);
	}
	else
		cout << "There is not enough ink to print" << endl;
}

void InkjetPrinter::showInk() {
	show();
	cout << "leftover ink : " << availableInk << endl;
}