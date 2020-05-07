#include <stdio.h>

void sort(int first, int second);	// 함수의 원형 선언

// main 함수의 정의
int main() {
	int point1 = 5000, point2 = 4000;

	printf("함수 호출 전 포인트 점수 %d, %d\n", point1, point2);

	sort(point1, point2);

	printf("함수 호출 후 포인트 점수 %d, %d\n", point1, point2);

	return 0;
}

// 두 매개변수를 오름차순으로 정렬하는 함수
void sort(int first, int second) {
	int temp;

	if (first > second) {	// 정렬된 상태가 아니라면 두 값을 교환
		temp = first;
		first = second;
		second = temp;
	}

	printf("\n(sort 함수의 정렬 결과 first : %d, second : %d\n\n", first, second);
}