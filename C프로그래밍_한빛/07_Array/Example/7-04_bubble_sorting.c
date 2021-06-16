#include <stdio.h>
#define SIZE 5

int main() {
	int i, repeat, temp, a[SIZE] = { 5, 4, 3, 2, 1 };

	// 버블 정렬 시작
	for (repeat = 1; repeat < SIZE; repeat++) {	// (배열 원소수 - 1) 번 반복하기
		// 배열의 이웃한 두 원소간의 정렬을 차례대로 반복하기
		for (i = 0; i < SIZE - 1; i++) {
			// 이웃 두 원소의 정렬
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}	// 안쪽 for 끝
	}		// 바깥쪽 for 끝

	return 0;
}