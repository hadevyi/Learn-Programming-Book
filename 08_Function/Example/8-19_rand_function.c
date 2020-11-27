#include <stdio.h>
#include <stdlib.h>		// rand 함수를 위한 헤더 파일

int main() {
	int i, random;

	for (i = 1; i <= 5; i++) {
		random = rand();		// 난수를 얻어 random 변수에 저장
		printf("%d번째 난수 : %5d\n", i, random);
	}

	return 0;
}