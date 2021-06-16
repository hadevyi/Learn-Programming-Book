#include <stdio.h>

int main() {
	int num, i = 1;

	printf("출력할 3의 배수의 개수는 : ");
	scanf("%d", &num);

	while (num > 0) {
		printf("%d ", 3 * i);
		i++;
		num--;
	}

	return 0;
}