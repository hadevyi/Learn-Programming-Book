#include <stdio.h>
#define N 5

int main() {
	int f[N] = { 3, 0, -30, -20, -1 };		// 배열을 선언과 동시에 초기화하기
	int i, min;

	// 최솟값 구하기
	min = f[0];
	for (i = 1; i < N; i++) {
		if (f[i] < min)
			min = f[i];
	}

	// 배열 내용 출력
	printf("어는 점 목록 : ");
	for (i = 0; i < N; i++)
		printf("%4d", f[i]);

	// 최솟값 출력
	printf("\n가장 낮은 어는 점 : %d\n", min);

	return 0;
}