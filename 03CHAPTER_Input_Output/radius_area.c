//인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	double radius, area, pi = 3.14;

	printf("반지름을 입력하세요. ");
	scanf("%lf", &radius);

	area = pi*radius*radius;

	printf("반지름 %.2lf 원의 면적은 %.2lf입니다.\n", radius, area);

	return 0;
}