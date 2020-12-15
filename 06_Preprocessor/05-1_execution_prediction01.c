#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
	int i = 3;

	printf("%d\n", SQUARE(++i));

	return 0;
}

// 25