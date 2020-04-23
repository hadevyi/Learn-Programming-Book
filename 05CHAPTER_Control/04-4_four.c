#include <stdio.h>

int main() {
	int n = 1, sum = 0;

	do {
		sum = ++n + 5;
	} while (n <= 10);
	printf("sum = %d\n", sum);

	return 0;
}