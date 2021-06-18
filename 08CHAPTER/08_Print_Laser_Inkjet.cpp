#include <iostream>
#include <string>
using namespace std;

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

void LaserPrinter::printLaser(int pages)
{
	if (availableToner > 0 && availableToner >= pages)
	{
		if (prin(pages))
			availableToner--;

		print(pages);
	}
	else
		cout << "There is not enough toner to print." << endl;
}

void LaserPrinter::showLaser() {
	show();
	cout << "remaining toner : " << availableToner << endl;
}

void main()
{
	int printer_selete, page;
	char yes_no;
	InkjetPrinter p1("Officejet V40", "HP", 5, 10);
	LaserPrinter p2("SCX-6x45", "Samsung", 3, 20);

	cout << "The two printers currently in operation are as follows." << endl;
	cout << "InkjetPrinter : "; p1.showInk();
	cout << "LaserPrinter : "; p2.showLaser();
	cout << endl;

	while (true)
	{
		cout << "Please Enter Print(1:InkjetPrinter, 2:LaserPrinter) and Page >> ";
		cin >> printer_selete >> page;

		if (printer_selete == 1)
			p1.printInkJet(page);
		else if (printer_selete == 2)
			p2.printLaser(page);
		else
			cout << "Printers are only inkjet and laser. Please re-enter." << endl;

		p1.showInk();
		p2.showLaser();

		cout << "Do you want to continue printing (y/n) >> ";
		cin >> yes_no;

		while (yes_no != 'y' && yes_no != 'n')
		{
			cout << "You've entered something wrong. Do you want to continue printing (y/n) >>";
			cin >> yes_no;
		}

		if (yes_no == 'y')
			cout << endl;
		else if (yes_no == 'n')
			exit(0);

		cin.ignore();
		cout << endl;
	}
}