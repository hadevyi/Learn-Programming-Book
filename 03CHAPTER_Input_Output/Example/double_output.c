//인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	double d = 12.345e-50;

	printf("d = %.5lf\n", d);
	printf("d = %.50lf\n", d);

	printf("d = %.5e\n", d);
	printf("d = %.5E\n", d);

	return 0;
}