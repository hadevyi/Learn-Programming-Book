#include <stdio.h>
#define NUMBER(x) printf("\t\t%4o\t%4d\t%4x\n", x, x, x);

int main(void) {
	int n;

	printf("정수 입력 : ");
	scanf("%d", &n);

	printf(">> 결과 : \t8진수 10진수  16진수\n");
	NUMBER(n);

	return 0;
}