#include "Book.h"

void main()
{
	Book a("A", 20000, 300), b("B", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}