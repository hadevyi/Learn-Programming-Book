#include <stdio.h>
#include <conio.h>		// getche 함수를 위한 헤더 파일
#define ESC 0x1b		// [Esc] 키의 ASCII 코드값을 매크로 상수로 정의

int main() {
	char ch, upper;

	do {
		printf("알파벳 소문자를 입력하시오 : ");
		ch = _getche();		// 키보드로 문자 한개를 입력

		if (ch >= 'a'&&ch <= 'z') {	// ch가 소문자라면
			upper = 'A' + ch - 'a';	// 소문자를 대문자로 변경
			printf("\n변환된 대문자는 %c입니다\n", upper);
		}
		else
			printf("\n");

	} while (ch != ESC);		// [Esc] 키가 입력되지 않는 한 반복하기

	return 0;
}