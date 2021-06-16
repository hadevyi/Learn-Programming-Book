#include <stdio.h>
#define PI 3.141592
#define R 5

int main() {
	double area;

	#ifdef PI
		printf("PI = 3.141592\n");	// PI란 매크로 상수가 이전에 정의되어 있다면 포함할 문장
	#endif

	#undef R						// 매크로 상수 R의 정의 해제
	#define R 3						// 매크로 상수 R을 3으로 정의

	area = PI * R * R;
	printf("Radius = %d\nArea = %.2lf\n", R, area);

	return 0;
}