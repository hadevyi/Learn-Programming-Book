#include <iostream>
using namespace std;

class Matrix {
	int array[2][2];
public:
	Matrix(int one = 0, int two = 0, int three = 0, int four = 0);
	void show();
	friend Matrix operator+(Matrix op1, Matrix op2);
	friend void operator+=(Matrix& op1, Matrix op2);
	friend bool operator==(Matrix op1, Matrix op2);
};

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

Matrix operator+(Matrix op1, Matrix op2)
{
	Matrix temp;

	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			temp.array[i][j] = op1.array[i][j] + op2.array[i][j];

	return temp;
}

void operator+=(Matrix& op1, Matrix op2)
{
	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			op1.array[i][j] += op2.array[i][j];
}

bool operator==(Matrix op1, Matrix op2)
{
	int same = 0;

	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			if (op1.array[i][j] == op2.array[i][j])
				same++;

	if (same == 4)
		return true;
	else
		return false;
}

void main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();

	if (a == c)
		cout << "a and c are the same" << endl;
	else
		cout << "WHAT" << endl;
}