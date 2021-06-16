#include <stdio.h>

int main() {
	int i, n, sum, multi;

	printf("정수 n : ");
	scanf("%d", &n);

	i = 1;
	sum = 0;
	multi = 1;

	do {
		sum += i;
		multi *= i;
		i++;
	} while (i <= n);

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	printf("1부터 %d까지의 곱은 %d입니다.\n", n, multi);

	return 0;
}