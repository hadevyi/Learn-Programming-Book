#include "Circle.h"

void operator++(Circle& op)
{
	op.radius++;
}

Circle operator++(Circle& op, int n)
{
	Circle temp;
	temp.radius = op.radius;
	op.radius++;
	return temp;
}