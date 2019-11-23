// 인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	unsigned char age = 97;
	int max = 2147483647;
	int max_plus_1 = max + 1;
	unsigned int super = max + 1;

	printf("age = %d\nmax = %d\n", age, max);
	printf("max+1 = %d\n", max_plus_1);
	printf("super = max+1 = %u\n", super);

	return 0;
}