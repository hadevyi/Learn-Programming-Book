#include <iostream>
using namespace std;

void main(){
	int retSize, *arr;
	int arr1[6] = { 1,3,2,5,4,7 };
	int arr2[6] = { 3,8,1,4,2,7 };
	arr = remove(arr1, 6, arr2, 6, retSize);

	cout << "arr2에서 arr1의 값을 빼고 출력합니다." << endl;

	for (int i = 0; i < retSize; i++)
		cout << arr[i] << ' ';
	cout << endl;
}