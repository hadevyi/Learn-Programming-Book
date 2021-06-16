#include <stdio.h>
#define MAX 5

int main() {
	int i, j;

	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX - (i+1); j++)
			printf(" ");

		for (j = 0; j < (i+1)*2-1; j++)
			printf("*");
		
		printf("\n");
	}

	for (i = MAX-1; i >= 0; i--) {
		for (j = 0; j < MAX - (i + 1); j++)
			printf(" ");

		for (j = 0; j < (i + 1) * 2 - 1; j++)
			printf("*");

		printf("\n");
	}
}