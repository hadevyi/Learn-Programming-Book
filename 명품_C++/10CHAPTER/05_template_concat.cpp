#include <iostream>
using namespace std;

template <class T>
T* concat(T arr1[], int sizea, T arr2[], int sizeb){
	int size = sizea + sizeb;

	T* arr = new T[size];

	for (int i = 0; i < size; i++)
		arr[i] = 0;

	for (int i = 0; i < sizea; i++)
		arr[i] = arr1[i];

	for (int i = sizea; i < size; i++)
		arr[i] = arr2[i - sizea];

	return arr;
}

void main(){
	int *arr = new int[8];
	int x[5] = { 4,3,1,6,4 };
	int y[3] = { 9,6,8 };

	arr = concat(x, 5, y, 3);

	for (int i = 0; i < 8; i++)
		cout << arr[i] << " ";
	cout << endl;
}