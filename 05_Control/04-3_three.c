#include <stdio.h>

int main() {
	int n = 1;

	while (n++ <= 10) {
		if (n == 7)
			continue;
		printf("n= %d\n", n);
	}

	return 0;
}