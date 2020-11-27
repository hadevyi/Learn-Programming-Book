#include <stdio.h>

int main() {
	int i, n, factorial;

	printf("1부터 n까지의 곱을 구합니다. 정수 n은? ");
	scanf("%d", &n);

	// 1~n의 곱인 n!을 factorial에 구하기
	factorial = 1;
	i = 1;
	while (i <= n) {
		factorial = factorial * i;
		i++;
	}

	printf("1부터 %d까지의 곱은 %d입니다.\n", n, factorial);

	return 0;
}