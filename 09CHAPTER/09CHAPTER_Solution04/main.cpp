#include "WhileLoopAdder.h"
#include "DoWhileLoopAdder.h"

void main()
{
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do While Loop");

	whileLoop.run();
	doWhileLoop.run();
}