#include "Book.h"

void main()
{
	Book a("C++", 30000, 500), b("C", 30000, 500);
	a == 30000;
	a == "C++";
	a == b;
}