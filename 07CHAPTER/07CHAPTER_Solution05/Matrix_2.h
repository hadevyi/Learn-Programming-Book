#pragma once
#ifndef MATRIX_2
#define MATRIX_2
class Matrix {
	int array[2][2];
public:
	Matrix(int one = 0, int two = 0, int three = 0, int four = 0);
	void show();
	friend Matrix operator+(Matrix op1, Matrix op2);
	friend void operator+=(Matrix& op1, Matrix op2);
	friend bool operator==(Matrix op1, Matrix op2);
};
#endif // !MATRIX_2
