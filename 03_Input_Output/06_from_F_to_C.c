#include <stdio.h>

void main(void){
	double f, c;

	printf("화씨온도(F)를 입력하세요. : ");
	scanf("%lf", &f);

	c = (5.0 / 9.0)*(f - 32.0);

	printf("화씨온도 %.1lf의 섭씨온도는 %.1lf입니다.\n", f, c);
}