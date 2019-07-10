#include "Circle.h"

Circle operator+(int num, Circle op)
{
	op.radius += num;

	return op;
}