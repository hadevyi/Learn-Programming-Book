#include <stdio.h>
#define SIZE 5

int main() {
	int i, repeat, temp, a[SIZE] = { 1, 2, 3, 5, 4 };
	char swap;		// 이웃 두 원소의 값이 교환된 적이 있는 지를 알려주는 변수

	// 정렬하기 전 원래의 배열 내용을 출력하기
	printf("정렬 전 배열 : ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);

	// 버블 정렬 시작
	for (repeat = 1; repeat < SIZE; repeat++) {	
		swap = 'N';		// 두 원소 간에 교환이 발생하지 않은 상태로 초기화
		for (i = 0; i < SIZE - 1; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;

				swap = 'Y';		// 두 원소 간에 교환이 발생한 상태로 수정
			}
		}

		if (swap == 'N')			// 두 원소 간에 교환이 발생한 적이 없는 정렬 완료 상태라면
			break;					// 정렬 작업을 끝내기
	}

	// 정렬된 결과를 출력하기
	printf("\n\n정렬 후 배열 : ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}