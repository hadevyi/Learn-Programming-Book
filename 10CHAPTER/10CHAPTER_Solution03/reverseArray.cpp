template <class T>
void reverseArray(T arr[], int size){
	T temp;
	int end = size - 1;

	for (int i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;
	}

}