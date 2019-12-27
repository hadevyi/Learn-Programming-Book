template <class T>
bool equalArrays(T arr1, T arr2, int size) {

	for (int i = 0; i < size; i++)
		if (arr1[i] != arr2[i])
			return false;

	return true;
}