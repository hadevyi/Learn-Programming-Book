#include <stdio.h>

void main(void){
	int int1, int2, int3 = 8;
	double r1, r2;

	int1 = int3 / 5;
	int2 = int3 / 5.0;
	r1 = (double)(int3 / 5);
	r2 = (double)int3 / 5;

	printf("%d\n%d\n%.1lf\n%.1lf\n", int1, int2, r1, r2);
}