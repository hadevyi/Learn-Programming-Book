#include <stdio.h>
#define N 5

int find_max(int ary[N]);

int main() {
	int maximum, score[N] = { 10, 8, 6, 9, 8 };

	maximum = find_max(score);
	printf("최댓값 : %d\n", maximum);

	return 0;
}

// 전달된 배열의 최댓값을 반환하는 함수
int find_max(int ary[N]) {
	int i, max;

	max = ary[0];
	for (i = 0; i < N; i++)
		if (max < ary[i])
			max = ary[i];

	return max;
}