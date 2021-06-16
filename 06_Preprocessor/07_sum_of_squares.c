#include <stdio.h>
#define SQ(x) ((x) * (x))

int main() {
	int n, i, total = 0;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	printf(">> ");

	for (i = 1; i <= n; i++) {
		total += SQ(i);
		printf("%d²+ ", i);
	}

	printf("\b\b= %d\n", total);

	return 0;
}