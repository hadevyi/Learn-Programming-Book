#include <stdio.h>
#define M 5		// 행 개수를 매크로 상수로 정의
#define N 7		// 열 개수를 매크로 상수로 정의

int main() {
	// n1부터 n5까지의 5개의 2차원 배열에 숫자 1개를 확대한 텍스트 그래픽 저장
	char n1[M][N] = { "　■　" , "■■　",  "　■　" , "　■　" , "　■　" };
	char n2[M][N] = { "■■■" , "　　■",  "■■■" , "■　　" , "■■■" };
	char n3[M][N] = { "■■■" , "　　■",  "■■■" , "　　■" , "■■■" };
	char n4[M][N] = { "■　■" , "■　■",  "■■■" , "　　■" , "　　■" };
	char n5[M][N] = { "■■■" , "■　　",  "■■■" , "　　■" , "■■■" };
	int i, n;

	printf("1~5 중에서 크게 출력하고 싶은 점수를 입력하세요 : ");
	scanf("%d", &n);

	// 확대 문자가 저장된 며늘 출력하기
	switch (n)
	{
		case 1: for (i = 0; i < M; i++) printf("  %s\n", n1[i]); break;
		case 2: for (i = 0; i < M; i++) printf("  %s\n", n2[i]); break;
		case 3: for (i = 0; i < M; i++) printf("  %s\n", n3[i]); break;
		case 4: for (i = 0; i < M; i++) printf("  %s\n", n4[i]); break;
		case 5: for (i = 0; i < M; i++) printf("  %s\n", n5[i]); break;
	}

	return 0;
}