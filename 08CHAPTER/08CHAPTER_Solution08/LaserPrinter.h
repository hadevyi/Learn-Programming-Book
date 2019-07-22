#pragma once
#ifndef LASERPRINTER
#define LASERPRINTER
#include <string>
#include "Printer.h"
class LaserPrinter :public Printer {
	int availableToner;	//toner residue
public:
	LaserPrinter(string model, string manufasturer, int availableCount, int availableToner);
	void printLaser(int pages);
	void showLaser();
};

LaserPrinter::LaserPrinter(string model, string manufasturer, int availableCount, int availableToner) : Printer(model, manufasturer, availableCount) {
	this->availableToner = availableToner;
}
#endif // !LASERPRINTER
