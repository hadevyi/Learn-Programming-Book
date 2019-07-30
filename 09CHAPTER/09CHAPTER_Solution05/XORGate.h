#pragma once
#ifndef XORGATE
#define XORGATE
#include "AbstractGate.h"
class XORGate :public AbstractGate {
public:
	bool operation() { return this->x ^ this->y; }
};
#endif // !XORGATE
