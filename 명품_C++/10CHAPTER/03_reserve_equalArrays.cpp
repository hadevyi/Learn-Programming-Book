#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], int size) {
	T temp;
	int end = size - 1;

	for (int i = 0; i < size / 2; i++){
		temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;
	}
}

void main(){
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);

	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	cout << endl;
}