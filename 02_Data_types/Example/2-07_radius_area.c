#include <stdio.h>

int main()
{
	float radius = 10;
	float area;
	area = 3.14f*radius*radius;

	printf("반지름이 %f인 원의 넓이는 %f입니다.\n", radius, area);

	return 0;
}