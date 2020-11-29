#include <stdio.h>

int main() {
	int num, total = 0;

	printf("제곱의 합을 구할 n을 입력 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		total += i * i;
	}

	printf("1부터 %d까지의 제곱의 합은 %d입니다.\n", num, total);

	return 0;
}