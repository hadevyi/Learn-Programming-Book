#include "Accumulator.h"

Accumulator::Accumulator(int value) { this->value = value; }
Accumulator& Accumulator::add(int n) { value += n; return *this; }
int Accumulator::get() { return this->value; }