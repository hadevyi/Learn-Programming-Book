#include <iostream>
#include <string.h>
using namespace std;

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

Printer::Printer(string model, string manufacturer, int printedCount, int availableCount)
{
	this->model = model;
	this->manufacturer = manufacturer;
	this->printedCount = printedCount;
	this->availableCount = availableCount;
}

class LaserPrinter :public Printer {
	int availableToner;
public:
	LaserPrinter(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0, int availableToner = 0) :Printer(model, manufacturer, printedCount, availableCount) {
		this->availableToner = availableToner;
	}
	int print(int pages);
	void show();
};

int LaserPrinter::print(int pages) {

	if (avavilableCount() < pages) {
		return -1;
	}
	else if (availableToner < pages) {
		return -2;
	}
	else {
		printed(pages);
		availableToner--;

		return 0;
	}
}

void LaserPrinter::show() {
	cout << "LaserPrinter : " << getModel() << ", " << getManu() << ", leftover paper " << avavilableCount() << ", leftover ink " << availableToner << endl;
}

class InkJetPrinter :public Printer {
	int availableInk;
public:
	InkJetPrinter(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0, int availableInk = 0) :Printer(model, manufacturer, printedCount, availableCount) {
		this->availableInk = availableInk;
	}
	int print(int pages);
	void show();
};

int InkJetPrinter::print(int pages) {

	if (avavilableCount() < pages) {
		return -1;
	}
	else if (availableInk < pages) {
		return -2;
	}
	else {
		printed(pages);
		availableInk -= pages;

		return 0;
	}
}

void InkJetPrinter::show() {
	cout << "InkJet : " << getModel() << ", " << getManu() << ", leftover paper " << avavilableCount() << ", leftover ink " << availableInk << endl;
}

void main(){
	char ch;
	int print, page;
	InkJetPrinter inkprint("Officejet V40", "HP", 0, 5, 10);
	LaserPrinter laserprint("SCX-6x45", "Samsung Electronics", 0, 3, 20);

	cout << "The two printers currently in operation are as follows." << endl;
	inkprint.show();
	laserprint.show();

	while (true)	{
		cout << endl << endl << "Printer (1:Inkjet, 2:Laser) and Purchase Input >> ";
		cin >> print >> page;

		if (print == 1)
		{
			switch (inkprint.print(page))
			{
			case -1:
				cout << "There is not enough paper to print" << endl;
				break;
			case -2:
				cout << "There is not enough ink to print." << endl;
				break;
			case 0:
				cout << "Printed." << endl;
				break;
			default:
				break;
			}
		}
		else if (print == 2)
		{
			switch (laserprint.print(page))
			{
			case -1:
				cout << "There is not enough paper to print" << endl;
				break;
			case -2:
				cout << "There is not enough toner to print." << endl;
				break;
			case 0:
				cout << "Printed." << endl;
				break;
			default:
				break;
			}
		}
		else
		{
			cout << "You've entered something wrong. Printers are number one or number two. " << endl;
		}

		inkprint.show();
		laserprint.show();

		cout << "Do you want to continue printing(y/n) >> ";
		cin >> ch;

		if (ch == 'y')
			cout << endl;
		else if (ch == 'n')
			exit(0);
	}
}
