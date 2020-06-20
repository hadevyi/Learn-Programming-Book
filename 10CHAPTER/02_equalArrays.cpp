#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T arr1, T arr2, int size) {

	for (int i = 0; i < size; i++)
		if (arr1[i] != arr2[i])
			return false;

	return true;
}

void main(){
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };

	if (equalArrays(x, y, 5))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
}