#include <stdio.h>

int main()
{
	int x = 5, y = 12;

	printf("%d & %d = %d\n", x, y, x&y);
	printf("%d | %d = %d\n", x, y, x | y);
	printf("%d ^ %d = %d\n", x, y, x ^ y);
	printf("~%d = %d\n", x, ~x);

	return 0;
}