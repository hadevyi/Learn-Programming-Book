#include <stdio.h>

int main(){
	int x = 5, y = 10, z;

	z = (x += 2) || (y += 1);

	printf("x = %d, y = %d\n", x, y);
	printf("z = %d\n", z);

	return 0;
}
