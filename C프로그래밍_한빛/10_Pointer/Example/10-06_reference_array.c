#include <stdio.h>
#define SIZE 5

int main() {
	int i, arr[SIZE] = { 1, 2, 3, 4, 5 };	// 배열 선언
	int *ptr;								// 포인터 선언

	ptr = arr;			// ptr에 배열 arr의 시작 주소를 대입하여 arr 배열을 가리키게 하기

	// 배열명[첨자]를 사용해 배열 원소에 저장된 값 출력하기
	for (i = 0; i < SIZE; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	printf("\n");

	printf("arr 배열의 시작 주소(%u) = ptr에 저장된 주소(%u)\n\n", arr, ptr);

	// 배열명에 대한 연산을 통해 배열 원소에 저장된 값을 출력하기
	for (i = 0; i < SIZE;i++)
		printf("*(arr+%d) = *(%u) = %d\n", i, arr + i, *(arr + i));
	printf("\n");

	// 포인터 연산을 통해 배열 원소에 저장된 값을 출력하기(포인터와 배열의 성질은 동일)
	for (i = 0; i < SIZE; i++)
		printf("*(ptr+%d) = *(%d) = %d\n", i, ptr + i, *(ptr + i));
	printf("\n");

	// 포인터 변수 ptr을 배열명처럼 사용하여 원소를 출력하기
	for (i = 0; i < SIZE; i++)
		printf("ptr[%d] = %d\n", i, ptr[i]);
	printf("\n");

	return 0;
}