#include "Circle.h"

void main()
{
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}