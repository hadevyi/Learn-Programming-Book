#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	void show();
	~MyVector();
};

MyVector::MyVector(int n, int val)
{
	size = n;
	mem = new int[n];

	for (int i = 0; i < size; i++)
		mem[i] = val;
}

void MyVector::show()
{
	int cnt = 0;

	for (int i = 0; i < size; i++) {
		cout << mem[i] << ' ';
		cnt++;

		if (cnt % 10 == 0)
			cout << endl;
	}
}

MyVector::~MyVector() { delete[]mem; }

void main()
{
	MyVector MV, MV2(3, 2);

	MV.show();
	MV2.show();
}