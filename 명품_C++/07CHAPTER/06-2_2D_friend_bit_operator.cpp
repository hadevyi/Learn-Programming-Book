#include <iostream>
using namespace std;

class Matrix {
	int array[2][2];
public:
	Matrix(int one = 0, int two = 0, int three = 0, int four = 0);
	friend void operator >> (Matrix op, int x[4]);
	friend void operator << (Matrix& op, int x[4]);
	void show();
};

Matrix::Matrix(int one, int two, int three, int four)
{
	array[0][0] = one;
	array[0][1] = two;
	array[1][0] = three;
	array[1][1] = four;
}

void operator >> (Matrix op, int x[4])
{
	x[0] = op.array[0][0];
	x[1] = op.array[0][1];
	x[2] = op.array[1][0];
	x[3] = op.array[1][1];
}

void operator<<(Matrix& op, int x[4])
{
	op.array[0][0] = x[0];
	op.array[0][1] = x[1];
	op.array[1][0] = x[2];
	op.array[1][1] = x[3];
}

void Matrix::show()
{
	cout << "Matrix = { ";

	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			cout << array[i][j] << ' ';

	cout << "}" << endl;
}

void main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';
	cout << endl;
	b.show();
}