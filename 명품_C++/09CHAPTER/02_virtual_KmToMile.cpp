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

class KmToMile :public Converter {
public:
	KmToMile(double ratio) :Converter(ratio) { ; }
	double convert(double src) { return src / 1.609344; }
	string getSourceString() { return "Km"; }
	string getDestString() { return "Mile"; }
};

void main()
{
	KmToMile toMile(1.609344);	//1 mile = 1.609344 Km
	toMile.run();
}