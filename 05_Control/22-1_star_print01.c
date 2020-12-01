#include <stdio.h>
#define MAX 9

int main() {
	int i, j;

	for (i = 0; i < MAX; i++) {
		if (i == 0 || i == MAX - 1)
			for (j = 0; j < MAX; j++)printf("*");
		else {
			printf("*");
			for (j = 1; j < MAX - 1; j++)printf(" ");
			printf("*");
		}
		printf("\n");
	}
}