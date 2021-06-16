#include <stdio.h>

/*
//수정 전 소스
int main(){
	int r = 5;
	double length;

	length = 2 * 3.14*r;

	printf("둘레를 구할 원의 반지름은? ");
	scanf("%d", &r);
	printf("반지름이 %d인 원의 둘레는 %.2lf \n", r, length);

	return 0;
}
*/

//수정 후 소스
int main(){
	int r = 5;
	double length = 0;

	printf("둘레를 구할 원의 반지름은? ");
	scanf("%d", &r);

	length = 2 * 3.14*r;

	printf("반지름이 %d인 원의 둘레는 %.2lf \n", r, length);

	return 0;
}
