template <class T>
T biggest(T arr[], int size) {
	T max = arr[0];

	for (int i = 1; i < size; i++)
		max = max < arr[i] ? arr[i] : max;

	return max;
}