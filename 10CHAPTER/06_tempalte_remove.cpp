#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMius, int &retSize) {
	int same = -1;

	for (int i = 0; i < sizeSrc; i++)
	{
		for (int j = 0; j < sizeMius; j++)
		{
			if (src[i] == minus[j])
			{
				same++;

				for (int k = j; k < sizeMius - 1; k++)
				{
					minus[k] = minus[k + 1];
				}

				minus[sizeMius - same - 1] = NULL;
			}
		}
	}

	retSize = sizeMius - same - 1;

	return minus;
}

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