#pragma once
#ifndef MAXTRIX_1
#define MAXTRIX_1
class Matrix {
	int array[2][2];
public:
	Matrix(int one = 0, int two = 0, int three = 0, int four = 0);
	void show();
	Matrix operator+(Matrix op);
	Matrix operator+=(Matrix op);
	bool operator==(Matrix op);
};
#endif // !MAXTRIX_1
