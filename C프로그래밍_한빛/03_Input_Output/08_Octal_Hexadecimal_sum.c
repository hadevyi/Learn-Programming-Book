#include <stdio.h>

void main(void){
	int eight, sixteen, sum;

	printf("8진수 16진수를 순서대로 입력하세요. : ");
	scanf("%o %x", &eight, &sixteen);

	sum = eight + sixteen;

	printf("%o(8) + %x(16) = %d\n", eight, sixteen, sum);
}