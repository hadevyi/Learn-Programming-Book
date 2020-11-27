#include <stdio.h>

int main() {
	int i;

	// 본래 for문
	for (i = 1; i <= 10; i += 3) {
		if (i % 5 == 0)
			printf("%d\n", i);
	}

	// 동일 기능 while문
	i = 1;

	while (i <= 10) {
		if (i % 5 == 0)
			printf("%d\n", i);
		i += 3;
	}

	return 0;
}