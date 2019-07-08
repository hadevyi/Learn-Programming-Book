#pragma once
#ifndef Matrix
#define Matrix
class Matrix {
	int array[2][2];
public:
	Matrix(int one = 0, int two = 0, int three = 0, int four = 0);
	void operator >> (int x[4]);
	void operator << (int x[4]);
	void show();
};
#endif // !Matrix
