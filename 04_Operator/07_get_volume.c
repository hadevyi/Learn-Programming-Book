#include <stdio.h>

int main(){
	double radius, height, volume, pi = 3.141592;

	printf("원기둥의 밑면의 반지름, 높이를 입력하세요(cm 단위) : ");
	scanf("%lf,%lf", &radius, &height);

	volume = pi*radius*radius*height;

	printf(">> 계산한 원기둥의 부피는 %.1lfcm³입니다.\n", volume);

	return 0;
}