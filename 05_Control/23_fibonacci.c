#include <stdio.h>

int main() {
	int num, i, temp, now = 1, before = 0;

	printf("피보나치 개수 입력 : ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("%d, ", before);

		temp = now + before;
		before = now;
		now = temp;
	}

	printf("\b\b입니다.");
}