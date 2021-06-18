#include <iostream>
using namespace std;

template <class T>
T biggest(T arr[], int size) {
	T max = arr[0];

	for (int i = 1; i < size; i++)
		max = max < arr[i] ? arr[i] : max;

	return max;
}

void main(){
	int a[6] = { 1,2,3,4,5,6 };
	int b[5] = { 7,1,5,2,3 };
	double c[5] = { 2.1,4.2,7.6,3.4,9.4 };
	char d[4] = { 'b','q','a','w' };

	cout << "{1, 2, 3, 4, 5, 6} 배열의 최대값은 " << biggest(a, 6) << endl;
	cout << "{7, 1, 5, 2, 3} 배열의 최대값은 " << biggest(b, 5) << endl;
	cout << "{2.1, 4.2, 7.6, 3.4, 9.4} 배열의 최대값은 " << biggest(c, 5) << endl;
	cout << "{'b','q','a','w'} 배열의 최대값은 " << biggest(d, 4) << endl;
}