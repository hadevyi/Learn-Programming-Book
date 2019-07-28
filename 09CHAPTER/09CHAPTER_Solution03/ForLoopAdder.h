#pragma once
#ifndef FORLOOPADDER
#define FORLOOPADDER
#include <string.h>
#include "LoopAdder.h"
class ForLoopAdder :public LoopAdder {
public:
	ForLoopAdder(string name) :LoopAdder(name) { ; }
	int calculate();
};
#endif // !FORLOOPADDER
