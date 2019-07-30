#pragma once
#ifndef DOWHILELOOPADDER
#define DOWHILELOOPADDER
#include <string.h>
#include "LoopAdder.h"
class DoWhileLoopAdder :public LoopAdder {
public:
	DoWhileLoopAdder(string name) :LoopAdder(name) { ; }
	int calculate();
};
#endif // !DOWHILELOOPADEER
