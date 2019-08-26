#include <iostream>
#include "InkJetPrinter.h"
using namespace std;

int InkJetPrinter::print(int pages) {

	if (avavilableCount() < pages)	{
		return -1;
	}
	else if (availableInk < pages)	{
		return -2;
	}
	else	{
		printed(pages);
		availableInk -= pages;

		return 0;
	}
}

void InkJetPrinter::show() {
	cout << "InkJet : " << getModel() << ", " << getManu() << ", leftover paper " << avavilableCount() << ", leftover ink " << availableInk << endl;
}