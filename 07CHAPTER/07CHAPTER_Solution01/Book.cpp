#include "Book.h"

Book operator+=(Book& op, int x)
{
	op.price += x;
	return op;
}

Book operator-=(Book& op, int x)
{
	op.price -= x;
	return op;
}