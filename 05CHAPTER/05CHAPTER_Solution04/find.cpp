char&find(char a[], char c, bool&success) {
	for (int i = 0; i < sizeof(a); i++)
	{
		if (a[i] == c)
		{
			success = true;
			return a[i];
		}
		return *a;
	}
}