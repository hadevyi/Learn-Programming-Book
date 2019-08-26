#pragma once
#ifndef PRINTER
#define PRINTER
#include <string.h>
class Printer {
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0);
	virtual int print(int pages) = 0;
	virtual void show() = 0;
	string getModel() { return model; }
	string getManu() { return manufacturer; }
	int getprintC() { return printedCount; }
	int avavilableCount() { return availableCount; }
	void printed(int page) { availableCount -= page; }
};
#endif // !PRINTER
