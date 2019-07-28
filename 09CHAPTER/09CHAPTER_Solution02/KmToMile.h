#pragma once
#ifndef KMTOMILE
#define KMTOMILE
#include "Converter.h"
class KmToMile :public Converter {
public:
	KmToMile(double ratio) :Converter(ratio) { ; }
	double convert(double src) { return src / 1.609344; }
	string getSourceString() { return "Km"; }
	string getDestString() { return "Mile"; }
};
#endif // !KMTOMILE
