#include <stdio.h>
#define N 4

double compute_avg(int arr[]);	// 함수의 원형 선언

int main() {
	int notebook[N] = { 2507, 2232, 2009, 2890 };
	int i, sum, pen[N] = { 4527,5370,4923,6097 };
	double average;

	// 노트의 평균 판매수 구하기
	average = compute_avg(notebook);

	printf("노트 평균 판매수 : %.1lf\n", average);

	// 펜의 평균 판매수 구하기
	average = compute_avg(pen);

	printf("펜 평균 판매수 : %.1lf\n", average);

	return 0;
}

double compute_avg(int arr[]) {
	int i, sum = 0;

	for (i = 0; i < N; i++)
		sum = sum + arr[i];

	return (double)sum / N;
}