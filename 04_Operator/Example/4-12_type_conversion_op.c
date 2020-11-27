#include <stdio.h>

int main()
{
	char ch = 'A';
	int x = 10, y = 4, sum;
	double pi = 3.14, avg;

	sum = ch + 2;	// 자동 형 넓힘 변환
	printf("sum = %d = %c\n", sum, sum);
	
	sum = pi;		// 자동 형 좁힘 변환
	printf("sum = %d\n", sum);

	printf("정수 간 x/y = %d\n", x / y);
	printf("실수 간 x/y = %lf\n", (double)x / (double)y);	// 강제 형 변환

	sum = (double)x / (double)y;		// 강제 형 변환 후 자동 형 좁힘 변환
	printf("잘못된 나눗셈 = %d\n", sum);

	avg = (double)(x / y);				// 강제 형 변환
	printf("잘못된 나눗셈 = %lf\n", avg);

	avg = (double)x / y;				// 강제 형 변환과 자동 형 넓힘 변환
	printf("정확한 나눗셈 = %lf\n", avg);

	return 0;
}