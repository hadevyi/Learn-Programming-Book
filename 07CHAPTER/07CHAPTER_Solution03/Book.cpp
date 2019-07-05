#include "Book.h"

bool Book::operator!()
{
	if (price == 0)
		return true;
	else
		return false;
}