//인제대학교 컴퓨터공학부 16학번 당현아 작성(Email : dang0113@naver.com)
#include <stdio.h>

int main(){
	int x;

	printf("정수 입력 >> ");
	scanf("%d", &x);

	(x % 2 == 0) ? printf("%d는 짝수입니다.\n", x) : printf("%d는 홀수입니다.\n", x);

	return 0;
}
