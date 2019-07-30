#pragma once
#ifndef WHILELOOPADDER
#define WHILELOOPADDER
#include <string.h>
#include "LoopAdder.h"
class WhileLoopAdder : public LoopAdder {
public:
	WhileLoopAdder(string name) :LoopAdder(name) { ; }
	int calculate();
};
#endif // !WHILELOOPADDER
