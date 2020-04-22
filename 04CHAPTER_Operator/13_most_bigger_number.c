#include <stdio.h>

int main(){
	int a, b, c, max;

	printf("세 개의 정수 : ");
	scanf("%d %d %d", &a, &b, &c);

	max = a > b ? a : b;
	max = c > max ? c : max;

	printf(">> 가장 큰 수 = %d\n", max);

	return 0;
}