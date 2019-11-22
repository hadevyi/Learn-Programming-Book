// 인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	printf("%d %d\n", sizeof 3.14f, sizeof 3.14);
	printf("%lf %lf\n", 0.314e1, 31.4e-1);
	printf("%lf\n", 0.12345678901234567890);
	printf("%.20lf\n", 0.12345678901234567890);
	printf("%.20f\n", 0.12345678901234567890f);

	return 0;
}