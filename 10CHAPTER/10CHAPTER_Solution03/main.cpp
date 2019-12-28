#include <iostream>
using namespace std;

void main(){
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);

	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	cout << endl;
}