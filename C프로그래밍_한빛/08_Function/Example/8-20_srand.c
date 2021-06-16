#include <stdio.h>
#include <stdlib.h>		// rand, srand 함수를 위한 헤더 파일
#include <time.h>		// time 함수를 위한 헤더 파일

int main() {
	int i, random;

	//time 함수를 실행할 때 컴퓨터의 현재 시간을 rand 함수의 씨드로 설정하기
	srand(time(NULL));

	for (i = 1; i <= 5; i++) {
		random = rand();		// 난수를 얻어 random 변수에 저장
		printf("%d번째 난수 : %5d\n", i, random);
	}

	return 0;
}