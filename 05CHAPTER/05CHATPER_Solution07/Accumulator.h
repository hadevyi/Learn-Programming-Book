#pragma once
#ifndef ACCUMCULTOR
#define ACCUMCULTOR
class Accumulator {
	int value;
public:
	Accumulator(int value);
	Accumulator& add(int n);
	int get();
};
#endif // ACCUMCULTOR
