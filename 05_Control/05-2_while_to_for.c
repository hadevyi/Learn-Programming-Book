#include <stdio.h>

int main() {
	int i;

	// 본래 while문
	i = 10;
	while (i >= 0) {
		printf("%d\n", i);
		i -= 3;
	}

	// 동일 기능 for문
	for (i = 10; i >= 0; i -= 3)
		printf("%d\n", i);

	return 0;
}