#include <stdio.h>

int main() {
	int i, n, sum = 0;

	printf("정수 n을 입력 : ");
	scanf("%d", &n);

	i = 0;
	while (i <= n) {
		i++;
		if (i % 2 == 1)
			continue;
		sum += i;
	}

	printf("정수 1에서 %d이하의 짝수들의 합은 %d입니다.\n", n, sum);

	return 0;
}