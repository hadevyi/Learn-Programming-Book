#include "09_header.h"		// 사용자가 작성한 헤더 파일을 포함하기 위한 전처리기 지시자
#include <stdio.h>			// 헤더 파일을 포함하기 위한 전처리기 지시자

int main() {
	int n;

	printf("입력 : ");
	scanf("%d", &n);

	printf("%d의 제곱 = %d, %d의 세제곱 = %d\n", n, SQUARE(n), n, CUBE(n));

	return 0;
}