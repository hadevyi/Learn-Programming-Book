#include <stdio.h>

int main(){
	int x;
	double result;

	printf("x입력 : ");
	scanf("%d", &x);

	result = (2 * x*x*x) - (3 * x*x) + (1 / (double)x);

	printf("   -> x = %d일 때\n      f(x) = 2x³-3x²+1/x = %.1lf\n", x, result);

	return 0;
}