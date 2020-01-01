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