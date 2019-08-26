#include "Printer.h"

Printer::Printer(string model, string manufacturer, int printedCount, int availableCount)
{
	this->model = model;
	this->manufacturer = manufacturer;
	this->printedCount = printedCount;
	this->availableCount = availableCount;
}