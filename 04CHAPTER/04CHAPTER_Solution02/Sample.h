#pragma once
#ifndef SAMPLE
#define SAMPLE
class Sample {
	int *p;
	int size;
public:
	Sample(int n);
	~Sample();
	void read();
	void write();
	int big();
};
#endif // !SAMPLE
