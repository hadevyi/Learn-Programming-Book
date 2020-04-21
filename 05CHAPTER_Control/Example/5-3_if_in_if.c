#include <stdio.h>

int main() {
	int num;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	printf("입력한 수 %d는(은)", num);

	if (num < 0) {
		if (num % 2 == 0)
			printf("양의 짝수입니다.\n");
		else
			printf("양의 홀수입니다.\n");
	}
	else {
		if (num % 2 == 0)
			printf("음의 짝수입니다.\n");
		else
			printf("음의 홀수입니다.\n");
	}

	return 0;
}