//인제대학교 컴퓨터공학부 16학번 당현아 작성(Email : dang0113@naver.com)
#include <stdio.h>

int main(){
	int x, y;

	printf("두 정수를 입력하세요. >> ");
	scanf("%d %d", &x, &y);

	printf("(%d > %d)의 결과는 %d입니다.\n", x, y, x > y);
	printf("(%d < %d)의 결과는 %d입니다.\n", x, y, x < y);
	printf("(%d >= %d)의 결과는 %d입니다.\n", x, y, x >= y);
	printf("(%d <= %d)의 결과는 %d입니다.\n", x, y, x <= y);
	printf("(%d == %d)의 결과는 %d입니다.\n", x, y, x == y);
	printf("(%d != %d)의 결과는 %d입니다.\n", x, y, x != y);

	return 0;
}
