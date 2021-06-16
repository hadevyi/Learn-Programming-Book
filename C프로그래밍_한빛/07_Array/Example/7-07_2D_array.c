#include <stdio.h>
#define M 2		// 행렬의 행 개수를 매크로 상수로 정의
#define N 3		// 행렬의 열 개수를 매크로 상수로 정의

int main() {
	int A[M][N], B[M][N], C[M][N];		// MxN 행렬을 저장할 배열 세 개 선언
	int i, j;

	// 행렬 A 입력
	printf("\n행렬 A 입력 \n");
	for(i=0;i<M;i++)
		for (j = 0; j < N; j++) {
			printf("%d행 %d열? ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}

	// 행렬 B 입력
	printf("\n행렬 B 입력 \n");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++) {
			printf("%d행 %d열? ", i + 1, j + 1);
			scanf("%d", &B[i][j]);
		}

	// 두 행렬의 합을 배열 C에 구하기
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			C[i][j] = A[i][j] + B[i][j];

	// 행렬 A 출력
	printf("행렬 A\n");
	for (i = 0; i < M; i++) {
		printf(" [ ");

		for (j = 0; j < N; j++)
			printf("%2d ", A[i][j]);
		
		printf("]\n");
	}

	// 행렬 B 출력
	printf("\n행렬 B\n");
	for (i = 0; i < M; i++) {
		printf(" [ ");

		for (j = 0; j < N; j++)
			printf("%2d ", B[i][j]);

		printf("]\n");
	}

	// 행렬 C 출력
	printf("\n행렬 C\n");
	for (i = 0; i < M; i++) {
		printf(" [ ");

		for (j = 0; j < N; j++)
			printf("%2d ", C[i][j]);

		printf("]\n");
	}

	return 0;
}