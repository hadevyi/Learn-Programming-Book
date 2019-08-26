#pragma once
#ifndef LASERPRINTER
#define LASERPRINTER
#include "Printer.h"
class LaserPrinter :public Printer {
	int availableToner;
public:
	LaserPrinter(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0, int availableToner = 0) :Printer(model, manufacturer, printedCount, availableCount) {
		this->availableToner = availableToner;
	}
	int print(int pages);
	void show();
};
#endif // !LASERPRINTER
