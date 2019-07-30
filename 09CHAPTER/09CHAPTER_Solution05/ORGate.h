#pragma once
#ifndef ORGATE
#define ORGATE
#include "AbstractGate.h"
class ORGate : public AbstractGate {
public:
	bool operation() { return this->x || this->y; }
};
#endif // !ORGATE
