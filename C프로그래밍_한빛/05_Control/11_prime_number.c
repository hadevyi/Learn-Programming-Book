#include <stdio.h>

int main() {
	int num, i, check = 1; // if check is 1, number is prime

	printf("양의 정수 n : ");
	scanf("%d", &num);

	if (num <= 0) printf("양의 정수만 확인 가능합니다.");
	else {
		if (num <= 3) printf("%d는(은) 소수입니다.\n", num);
		else {
			for (i = 2; i < num; i++) {
				if (num % i == 0)
					check = 0;
			}

			if (check == 0) printf("%d는(은) 소수가 아닙니다.\n", num);
			else printf("%d는(은) 소수입니다.\n", num);
		}
	}

	return 0;
}