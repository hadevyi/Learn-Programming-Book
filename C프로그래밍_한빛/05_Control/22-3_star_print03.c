#include <stdio.h>
#define MAX 9

int main() {
	int i, j;

	for (i = 1; i < MAX; i++) {
		for (j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}
}