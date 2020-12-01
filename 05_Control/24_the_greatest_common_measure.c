#include <stdio.h>

int main() {
	int num1, num2, tmp, greatest;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	} // num1에 큰 수를 num2에 작은 수를 배치한다.

	while (1) {

		if (num2 == 0) {
			greatest = num1;
			break;
		}

		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}

	printf("최대 공약수는 %d입니다.\n", num1);
}