#include <stdio.h>
#define N 10

int find_larger(int first, int second);		// 함수의 원형 선언

int main() {
	int freeze[N] = { 15, 0, -20, -30, 50, -5, -120, -5, 10, -12 };
	int i, max;

	/*
		max의 초깃값을 첫째 원소로 지정한 후
		현재의 amx와 나머지 배열 원소 중 큰 값을 find_larger 함수를 이용하여 구한 후
		다시 max에 저장한다.
	*/

	max = freeze[0];
	for (i = 1; i < N; i++)
		max = find_larger(max, freeze[i]);

	/*
	max = freeze[0];
	for (i = 1;i < N;i++)
		if (max < freeze[i])
			max = freeze[i];
	*/

	printf("어는 점 목록 : ");
	for (i = 0; i < N; i++)
		printf("%d ", freeze[i]);
	printf("\n가장 높은 어는 점 : %d\n", max);

	return 0;
}

// 두 정수 중 큰 값을 반환하는 함수
int find_larger(int first, int second) {
	if (first > second)
		return first;
	else
		return second;
}