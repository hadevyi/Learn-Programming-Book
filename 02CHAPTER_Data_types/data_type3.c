// 인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	int a1, a2, a3;		// 정수를 저장할 int형 변수 선언

	a1 = 10;
	a2 = 20;
	a3 = a1 + a2;		// a1과 a2에 저장된 값을 더한 결과를 a3에 저장

	printf("a1 = %d, a2 = %d, a3 = %d\n", a1, a2, a3);

	a3 = a2 / 2;		// a2에 저장된 값을 2로 나눈 값(몫)을 다시 a3에 저장

	printf("a1 = %d, a2 = %d, a3 = %d\n", a1, a2, a3);

	return 0;
}