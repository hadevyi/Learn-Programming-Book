//인제대학교 컴퓨터공학부 16학번 당현아 작성(Email : dang0113@naver.com)
#include <stdio.h>

int main(){
	int x, y;

	x = 1;

	printf("x의 값 : %d\n", x);
	printf("x+1의 값 : %d\n", x + 1);
	printf("y=x+1의 결과 : %d\n", y = x + 1);
	printf("y=1+(x=2+3)의 결과 : %d\n", y = 1 + (x = 2 + 3));
	printf("y=x=5의 결과 : %d\n", y = x = 5);

	return 0;
}
