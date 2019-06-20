#include <iostream>
#include "Book.h"
using namespace std;

void main() 
{
	Book cpp("C++", 10000);
	Book java = cpp;
	java.set("Java", 12000);
	cpp.show();
	java.show();
}
