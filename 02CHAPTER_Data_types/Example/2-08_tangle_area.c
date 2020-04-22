#include <stdio.h>

int main()
{
	// 변수 선언
	double width, height;
	double area;

	// 처리
	width = 3.0;
	height = 5.0;
	area = width*height / 2.0;

	// 출력
	printf("밑변 %lfcm, 높이 %lfcm인 삼각형의 넓이 = ", width, height);
	printf("%lfcm^2\n", area);

	return 0;
}