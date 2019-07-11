#pragma once
#ifndef STATISTICS
#define STATISTICS
class Statistics {
	int* arr;
	int count;
public:
	Statistics() { arr = new int[10]; count = 0; }
	bool operator!();
	Statistics& operator<< (int num);
	void operator~();
	void operator >> (int& avg);
};
#endif // !STATISTICS
