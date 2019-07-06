#include "Book.h"

bool operator<(string s, Book op)
{
	if (s < op.title)
		return true;
	else
		return false;
}