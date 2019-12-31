template <class T>
T* concat(T arr1[], int sizea, T arr2[], int sizeb)
{
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