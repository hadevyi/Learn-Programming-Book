#include <stdio.h>
#define SIZE 10					// 배열의 크기를 매크로 상수로 정의

void exchange_sort(int *a);		// 교환 정렬
void bubble_sort(int *a);		// 버블 정렬
void select_sort(int *a);		// 선택 정렬
void insert_sort(int *a);		// 삽입 정렬
void swap(int *p, int *q);		// 두 원소의 값을 교환하는 함수
void print(int *a);				// 배열 출력
void copy_list(int*, int *);	// 배열 복사

int main() {
	int copy[SIZE];
	int list[SIZE] = { 10, 5, 4, 2, 3, 8, 7, 9, 6, 1 };		// 배열 선언과 초기화

	printf(">> 배열 원본 : ");
	print(list);				// 정렬할 배열 원본 출력

	copy_list(list, copy);		// 배열 상태 초기화, 정렬, 결과 출력
	printf("\n>> 교환 정렬 : ");
	exchange_sort(copy);
	print(copy);

	copy_list(list, copy);		// 배열 상태 초기화, 정렬, 결과 출력
	printf("\n>> 버블 정렬 : ");
	bubble_sort(copy);
	print(copy);

	copy_list(list, copy);		// 배열 상태 초기화, 정렬, 결과 출력
	printf("\n>> 삽입 정렬 : ");
	insert_sort(copy);
	print(copy);

	return 0;
}

void copy_list(int*a, int *b) {	// b 배열을 a 배열과 동일하게 복사하기
	int i;

	for (i = 0; i < SIZE; i++)
		*(b + i) = *(a + i);	// b[i] = a[i];
}

void exchange_sort(int *a) {	// 교환 정렬 : 포인터 표기법만 이용
	int i, j;

	for (i = 0; i < SIZE; i++)
		for (j = i + 1; j < SIZE; j++)
			if (*(a + i) > *(a + j))
				swap(a + i, a + j);		// a[i]와 a[j]를 교환
}

void bubble_sort(int *a) {		// 버블 정렬 : 포인터 표기법만 이용
	int i, j;

	for (i = 0; i < SIZE - 1; i++)
		for (j = 0; j < SIZE - 1; j++)
			if (*(a + j) > *(a + j + 1))
				swap(a + j, a + j + 1);	// a[i]와 a[j]를 교환
}

void select_sort(int a[]) {		// 선택 정렬 : 배열명[첨자] 표기법만 이용
	int i, j, index;

	for (i = 0; i < SIZE - 1; i++) {
		index = i;				// a[i]를 최솟값으로 가정하여 index를 i로 초기화
		for (j = i + 1; j < SIZE; j++) {
			if (a[index] > a[j])	// 현재의 최솟값 a[index]보다 a[j]가 더 작다면
				index = j;			// index를 새 최솟값의 첨자 j로 수정하기
		}
		swap(&a[i], &a[index]);		// a[i]와 a[index]를 교환
	}
}

void insert_sort(int *a) {		// 삽입 정렬 : 포인터 표기법과 배열명[첨자] 표기법 혼용
	int i, j, target;

	for (i = 1; i < SIZE; i++) {
		target = a[i];					// 정렬할 원소 a[i]의 값을 target에 대피

		for (j = i - 1; j >= 0; j--)	// a[i-1] ~ a[0] 중에서 a[i]를 삽입할 위치 찾기
			if (target < a[j])
				a[j + 1] = a[j];		// a[j]를 한칸 뒤로 미루기
			else
				break;					// target이 들어갈 위치 (j+1)를 찾았으므로 for문을 끝내기

		a[j + 1] = target;				// target을 정확한 위치에 저장하기
	}
}

void swap(int *p, int *q) {		// p와 q가 가리키는 인수의 값을 교환하기
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}

void print(int *a) {			// a가 가리키는 배열 내용 출력하기
	int i;

	for (i = 0; i < SIZE; i++)
		printf("%d ", *(a + i));	// printf("%d", a[i]);와 동일
	printf("\n");
}