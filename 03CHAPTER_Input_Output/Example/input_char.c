//인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	char lower, upper, char_num, num;

	printf("알파벳 소문자 한 개를 입력하세요. ");
	lower = getchar();

	upper = 'A' + (lower - 'a');

	printf("입력한 소문자 %c의 대문자 %c \n", lower, upper);

	getchar();	// 버퍼에 남은 개행 문자를 제거하기 위해 버퍼 전체를 비운다.
	printf("\n0~9 중 한 개를 입력하세요. ");
	char_num = getchar();

	num = char_num - '0';

	printf("입력한 문자 '%c'는 정수 %d입니다.\n", char_num, num);

	return 0;
}