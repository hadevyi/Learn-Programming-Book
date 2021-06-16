#include <stdio.h>

int main(){
	int op1 = 10, op2 = -20, sum;
	
	sum = op1 + op2;

	printf("%d+%d = %d\n", op1, op2, sum);
	printf("%3d + %3d = %3d\n", op1, op2, sum);
	printf("%3d-+%3d = %3d\n", op1, op2, sum);
	printf("%2d %%%2d = %2d\n", op1, op2, op1 % 3);

	return 0;
}
