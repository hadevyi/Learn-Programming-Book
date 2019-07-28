#pragma once
#ifndef CONVERTER
#define CONVERTER
#include <iostream>
#include <string.h>
using namespace std;
class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;	//Convert src into different units.
	virtual string getSourceString() = 0;	//src unit name
	virtual string getDestString() = 0;	//dest unit name
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << "Replace " << getSourceString() << " with " << getDestString();
		cout << "Please enter " << getSourceString();
		cin >> src;
		cout << "Conversion Results : " << convert(src) << getDestString() << endl;
	}
};
#endif // !CONVERTER
