#include <stdio.h>

int main(){
	int x = 5, y;
	double z;

	y = x / 2;
	printf("y = %d\n", y);
	y = (double)x / 2;
	printf("y = %d\n", y);
	z = x / 2;
	printf("z = %.1lf\n", z);
	z = (double)x / 2;
	printf("z = %.1lf\n", z);
	z = (double)(x / 2);
	printf("z = %.1lf\n", z);

	return 0;
}