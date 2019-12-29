template <class T>
bool search(T num, T x[], int size) {

	for (int i = 0; i < size; i++)
		if (x[i] == num)
			return true;

	return false;
}