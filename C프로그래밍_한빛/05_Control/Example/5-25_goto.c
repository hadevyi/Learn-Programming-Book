#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int i, j;

	for (i = 1; i <= 10000; i++) {		// 최대 1000행 출력
		for (j = 1; j <= 10; j++) {		// 한 행에 '*' 10개 출력
			if (_kbhit()) 
				goto end;		// 사용자가 키보드를 누르면 21행으로 이동
			printf("*");
		}
		printf("\n");
	}

	printf("\n프로그램을 종료합니다!\n");
	exit(0);

end:
	printf("\n키보드를 눌렀습니다!\n");

	return 0;
}
