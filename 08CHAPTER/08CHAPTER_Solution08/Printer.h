#pragma once
#ifndef PRINTER
#define PRINTER
#include <string>
class Printer {
	string model;	//Model name
	string manufacturer;	//Manufacturer
	int printedCount;	//print buying
	int availableCount;	//print paper residues
public:
	Printer(string model, string manufacturer, int availableCount);
	void print(int pages);
	void show();
	bool prin(int pages);
};
#endif // !PRINTER
