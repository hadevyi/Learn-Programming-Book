#include <stdio.h>

int main() {
	int num, total = 1;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	if (num < 0)
		printf("음수는 불가능합니다.\n");
	else if (num == 0)
		total = 1;
	else {
		for (int i = 1; i <= num; i++) {
			total *= i;
		}
	}

	printf("%d! = %d\n", num, total);

	return 0;
}