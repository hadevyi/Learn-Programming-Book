#include <stdio.h>

int main()
{
	int x = 15, n = 1;

	printf("%d >> %d = %d\n", x, n, x >> n);
	printf("%d >> %d = %d\n", x, n + 1, x >> (n + 1));
	printf("%d >> %d = %d\n", x, n + 2, x >> (n + 2));
	printf("%d << %d = %d\n", x, n, x << n);
	printf("%d << %d = %d\n", x, n + 1, x << (n + 1));
	printf("%d << %d = %d\n", x, n + 2, x << (n + 2));

	return 0;
}