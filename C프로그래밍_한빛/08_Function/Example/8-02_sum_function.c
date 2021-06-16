#include <stdio.h>

// compute_sum 함수 정의
int compute_sum(int n) {
	int i, sum = 0;

	for (i = 1; i <= n; i++)
		sum += i;

	return sum;
}

// main 함수 정의
int main() {
	int end = 200;

	printf("1~100까지의 합 : %d \n\n", compute_sum(100));

	printf("1에서 몇까지의 합을 구할까요? ");
	scanf("%d", &end);
	printf("\n1~%d까지의 합 : %d\n", end, compute_sum(end));

	return 0;
}