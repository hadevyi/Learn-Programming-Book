//인제대학교 컴퓨터공학부 16학번 당현아 작성(Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	int x = 15, n = 1;

	printf("%d >> %d = %d\n", x, n, x >> n);
	printf("%d >> %d = %d\n", x, n + 1, x >> (n + 1));
	printf("%d >> %d = %d\n", x, n + 2, x >> (n + 2));
	printf("%d << %d = %d\n", x, n, x << n);
	printf("%d << %d = %d\n", x, n + 1, x << (n + 1));
	printf("%d << %d = %d\n", x, n + 2, x << (n + 2));

	return 0;
}