#pragma once
#ifndef MATRIX_2
#define MATRIX_2
class Matrix {
	int array[2][2];
public:
	Matrix(int one = 0, int two = 0, int three = 0, int four = 0);
	friend void operator >> (Matrix op, int x[4]);
	friend void operator << (Matrix& op, int x[4]);
	void show();
};
#endif // !MATRIX_2
