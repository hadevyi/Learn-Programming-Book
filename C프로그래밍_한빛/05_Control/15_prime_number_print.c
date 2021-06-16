#include <stdio.h>

int main() {
	int num, n = 2, check;

	printf("최대 몇까지의 소수를 출력? ");
	scanf("%d", &num);

	while (n < num) {
		check = 0;
		for (int i = 2; i < n; i++) {
			if (n%i == 0)
				check = 1;
		}

		if (check == 0) printf("%d ", n);

		n++;
	}

	return 0;
}