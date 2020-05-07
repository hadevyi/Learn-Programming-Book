#include <stdio.h>

int find_larger(int first, int second);		// 함수의 원형 선언

int main() {
	int max, score[5] = { 10, 8, 9, 7, 8 };

	max = find_larger(score[3], score[4]);	// 4째, 5째 원소를 전달

	printf(" score[3] = %d과 score[4] = %d 중 큰 값은 %d\n", score[3], score[4], max);

	return 0;
}

// 두 정수 중 큰 값을 반환하는 함수
int find_larger(int first, int second) {
	if (first > second)
		return first;
	else
		return second;
}