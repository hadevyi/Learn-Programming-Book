#include <stdio.h>

int main() {
	int i, n;
	double sum;

	printf("임의의 정수 n을 입력하시오 : ");
	scanf("%d", &n);

	sum = 0;
	for (i = 2; i <= n; i++)
		sum = sum + ((double)(i - 1) / i);

	// 수식 출력하기
	for (i = 2; i <= n; i++)
		printf("%d/%d + ", i - 1, i);
	printf("\b\b= %.1lf\n", sum);

	return 0;
}