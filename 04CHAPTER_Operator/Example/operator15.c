//인제대학교 컴퓨터공학부 16학번 당현아 작성(Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	char ch;

	printf("문자 입력 : ");
	scanf("%c", &ch);		// ch = getchar();

	printf("%2d", ch&(1 << 7) ? 1 : 0);
	printf("%2d", ch&(1 << 6) ? 1 : 0);
	printf("%2d", ch&(1 << 5) ? 1 : 0);
	printf("%2d", ch&(1 << 4) ? 1 : 0);
	printf("%2d", ch&(1 << 3) ? 1 : 0);
	printf("%2d", ch&(1 << 2) ? 1 : 0);
	printf("%2d", ch&(1 << 1) ? 1 : 0);
	printf("%2d", ch&(1) ? 1 : 0);

	return 0;
}