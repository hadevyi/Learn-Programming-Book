#include <iostream>
using namespace std;

template <class T>
bool search(T num, T x[], int size) {

	for (int i = 0; i < size; i++)
		if (x[i] == num)
			return true;

	return false;
}

void main(){
	int x[] = { 1,10,100,5,4 };
	
	if (search(100, x, 5))
		cout << "100이 배열 x에 포함되어 있다." << endl;
	else
		cout << "100이 배열 x에 포함되어있지 않다." << endl;
}