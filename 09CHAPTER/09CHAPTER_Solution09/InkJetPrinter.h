#pragma once
#ifndef INKJETPRINTER
#define INKJETPRINTER
#include "Printer.h"
#include <string.h>
class InkJetPrinter :public Printer {
	int availableInk;
public:
	InkJetPrinter(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0, int availableInk = 0) :Printer(model, manufacturer, printedCount, availableCount) {
		this->availableInk = availableInk;
	}
	int print(int pages);
	void show();
};
#endif // !INKJETPRINTER
