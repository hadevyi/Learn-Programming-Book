#include <stdio.h>
#define PI 3.141592
#define VOLUME(r) 4.0/3.0*PI*(r)*(r)*(r)

int main() {
	int radius;

	printf("반지름 : ");
	scanf("%d", &radius);

	printf(">> 반지름이 %d인 구의 부피 = %.2lf\n", radius, VOLUME(radius));

	return 0;
}