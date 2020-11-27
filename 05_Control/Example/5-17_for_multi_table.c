#include <stdio.h>

int main() {
	int i, n;

	printf("출력을 원하는 단은? ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %2d\n", n, i, n*i);

	return 0;
}