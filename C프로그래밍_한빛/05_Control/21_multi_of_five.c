#include <stdio.h>

int main() {
	int num1, num2, i;

	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n", num1, num2);

	for (i = 1; i <= 100; i++) {
		if (i % num1 == 0 && i % num2 != 0) {
			printf("%d ", i);
		}
	}

	return 0;
}