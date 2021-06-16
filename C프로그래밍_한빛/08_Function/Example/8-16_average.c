#include <stdio.h>
#define N 4

int main() {
	int notebook[N] = { 2507, 2232, 2009, 2890 };	// 노트 판매수
	int i, sum, pen[N] = { 4527,5370,4923,6097 };	// 펜 판매수
	double average;

	// 노트의 평균 판매수 구하기
	sum = 0;
	for (i = 0; i < N; i++)
		sum = sum + notebook[i];
	average = (double)sum / N;

	printf("노트 평균 판매수 : %.1lf\n", average);

	// 펜의 평균 판매수 구하기
	sum = 0;
	for (i = 0; i < N; i++)
		sum = sum + pen[i];
	average = (double)sum / N;

	printf("펜 평균 판매수 : %.1lf\n", average);

	return 0;
}