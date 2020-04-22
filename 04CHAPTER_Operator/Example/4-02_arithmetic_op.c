#include <stdio.h>

int main(){
	int x, y;

	printf("정수1 >> "); scanf("%d", &x);
	printf("정수2 >> "); scanf("%d", &y);
	printf("\n");

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d\n", x, y, x / y);		// 정수/정수 결과는 정수
	printf("%d %% %d = %d\n\n", x, y, x%y);		// %%는 '%'를 출력

	printf("%d / %.1lf = %.1lf\n", x, 3.0, x / 3.0);

	return 0;
}
