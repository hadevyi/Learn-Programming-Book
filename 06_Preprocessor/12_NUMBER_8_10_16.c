#include <stdio.h>
#define NUMBER(x) printf("\t%4o\t%4d\t%4x\n", x, x, x);

int main(void) {
	int i;
	printf("------------------------------------\n");
	printf("\t8진수\t10진수\t16진수\n");
	printf("------------------------------------\n");
	for (i = 1; i <= 15; i++)
		NUMBER(i);
	printf("------------------------------------\n");

	return 0;
}