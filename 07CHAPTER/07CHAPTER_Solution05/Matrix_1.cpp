#include <iostream>
#include "Matrix_1.h"
using namespace std;

Matrix::Matrix(int one, int two, int three, int four)
{
	array[0][0] = one;
	array[0][1] = two;
	array[1][0] = three;
	array[1][1] = four;
}

void Matrix::show()
{
	cout << "Matrix = { " << array[0][0] << " " << array[0][1] << " " << array[1][0] << " " << array[1][1] << " }" << endl;
}

Matrix Matrix::operator+(Matrix op)
{
	Matrix temp;

	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			temp.array[i][j] = array[i][j] + op.array[i][j];

	return temp;
}

Matrix Matrix::operator+=(Matrix op)
{
	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			array[i][j] += op.array[i][j];

	return *this;
}

bool Matrix::operator==(Matrix op)
{
	int same = 0;

	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			if (array[i][j] == op.array[i][j])
				same++;

	if (same == 4)
		return true;
	else
		return false;
}