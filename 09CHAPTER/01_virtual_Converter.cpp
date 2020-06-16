#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;	//Convert src into different units.
	virtual string getSourceString() = 0;	//src unit name
	virtual string getDestString() = 0;	//test unit name
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << "Replace " << getSourceString() << " with " << getDestString() << ".";
		cout << "Please enter " << getSourceString();
		cin >> src;
		cout << "The conversion : " << convert(src) << getDestString() << endl;


class WonToCollar :public Converter {
public:
	WonToCollar(int ratio) :Converter(ratio) { ; }
	double convert(double src) { return src / 1010; }
	string getSourceString() { return "won"; }
	string getDestString() { return "dollar"; }
};

void main()
{
	WonToCollar wd(1010);	//1,010 won for a dollar
	wd.run();
}