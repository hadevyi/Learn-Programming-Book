#include <stdio.h>

int main() {
	int n, i, sum, factorial;

	printf("1부터 까지의 합과 곱을 구합니다. 정수 n은? ");
	scanf("%d", &n);

	// 1에서 n까지의 합을 sum에 구하기
	sum = 0;
	for (i = 1; i <= n; i++)
		sum += i;

	// 1에서 n까지의 곱을 factorial에 구하기
	factorial = 1;
	for (i = 1; i <= n; i++)
		factorial *= i;

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	printf("1부터 %d까지의 곱은 %d입니다.\n", n, factorial);
	return 0;
}