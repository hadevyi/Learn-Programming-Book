#include <iostream>
#include "Book.h"
using namespace std;

void main()
{
	Book book("market", 0, 50);

	if (!book)
		cout << "free" << endl;
}