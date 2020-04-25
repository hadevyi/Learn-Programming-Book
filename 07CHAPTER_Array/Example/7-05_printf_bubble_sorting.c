#include <stdio.h>
#define SIZE 5

int main() {
	int i, repeat, temp, a[SIZE] = { 5, 4, 3, 2, 1 };

	// 정렬하기 전 원래의 배열 내용을 출력하기
	printf("정렬 전 배열 : ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);

	// 버블 정렬 시작
	for (repeat = 1; repeat < SIZE; repeat++) {	
		for (i = 0; i < SIZE - 1; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}

	// 정렬된 결과를 출력하기
	printf("\n\n정렬 후 배열 : ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}