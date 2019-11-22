// 인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	printf("%d %d\n", sizeof 2013, sizeof 2013L);
	printf("%d %d %d\n", 2013, 03735, 0x7DD);
	printf("%d %o %x\n", 2013, 2013, 2013);
	printf("%d %d\n", 2147483648, 2147483648L);
	printf("%u\n", 2147483648);

	return 0;
}