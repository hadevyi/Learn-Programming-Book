#pragma once
#ifndef INKJETPRINTER
#define INKJETPRINTER
#include <string>
#include "Printer.h"
class InkjetPrinter : public Printer {
	int availableInk;	//ink residue
public:
	InkjetPrinter(string model, string manufasturer, int availableCount, int availableInk);
	void printInkJet(int pages);
	void showInk();
};

InkjetPrinter::InkjetPrinter(string model, string manufasturer, int availableCount, int availableInk) :Printer(model, manufasturer, availableCount) {
	this->availableInk = availableInk;
}
#endif // !INKJETPRINTER
