#include <iostream>
#include <string>
#include "Printer.h"
using namespace std;

Printer::Printer(string model, string manufacturer, int availableCount) {
	this->model = model;
	this->manufacturer = manufacturer;
	this->printedCount = 0;
	this->availableCount = availableCount;
}

void Printer::print(int pages) {
	if (availableCount > pages)
	{
		availableCount -= pages;
		cout << "I've printed it." << endl;
	}
	else
		cout << "There is not enough paper to print." << endl;
}

void Printer::show() {
	cout << model << ", " << manufacturer << ", leftover paper " << availableCount;
}

bool Printer::prin(int pages) {
	if (availableCount >= pages)
		return true;
	else
		return false;
}