#include <stdio.h>
#define N 4

void print_arr(int arr[N]);
void percentage(int arr[N]);

int main() {
	int count[N] = { 42, 37, 83, 33 };	// 유명인 선택수를 저장한 배열

	printf("인원수: ");
	print_arr(count);					// percentage 함수 호출 전 배열 출력

	percentage(count);					// 인원수를 백분율로 변경

	printf("\n백분율 : ");
	print_arr(count);					// percentage 함수 호출 후 배열 출력

	return 0;
}

// 배열의 원소를 출력하는 함수
void print_arr(int arr[N]) {			// (inr arr[])도 가능
	int i;

	for (i = 0; i < N; i++)
		printf("%3d", arr[i]);
}

// 배열에 저장된 수치를 백분율로 변경하는 함수
void percentage(int arr[N]) {
	int i, total = 0;

	// 인기도 조사에 참여한 전체 인원을 total에 구하기
	for (i = 0; i < N; i++)
		total += arr[i];

	// 전체 인원수 total을 이용해 백분율 구하기
	for (i = 0; i < N; i++)
		arr[i] = (int)((double)arr[i] / total * 100);
}