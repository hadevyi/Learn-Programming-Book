#include <iostream>
using namespace std;

void main()
{
	cout << "i\tn\trefn" << endl;

	int i = 1;
	int n = 2;
	int &refn = n;

	n = 4;
	refn++;
	cout << i << "\t" << n << "\t" << refn << endl;

	refn = i;
	refn++;
	cout << i << "\t" << n << "\t" << refn << endl;

	int *p = &refn;
	*p = 20;
	cout << i << "\t" << n << "\t" << refn << endl;
}