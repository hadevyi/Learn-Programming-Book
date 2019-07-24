#pragma once
#ifndef WONTOCOLLAR
#define WONTOCOLLAR
#include "Converter.h"
class WonToCollar :public Converter {
public:
	WonToCollar(int ratio) :Converter(ratio) { ; }
	double convert(double src) { return src / 1010; }
	string getSourceString() { return "won"; }
	string getDestString() { return "dollar"; }
};
#endif // !WONTOCOLLAR
