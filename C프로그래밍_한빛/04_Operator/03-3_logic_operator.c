#include <stdio.h>

int main(){
	int x, y, z;

	x = -3 * 5 % 5 + 1;
	y = 1;
	z = 1;
	y = x && y || z;
	z += x << 1 + y++;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}