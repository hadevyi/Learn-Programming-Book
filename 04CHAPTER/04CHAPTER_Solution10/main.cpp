#include <iostream>
#include <cstring>
#include <string>
#include "Histogram.h"
using namespace std;

void main()
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Preslsy");
	elvisHisto.print();
}