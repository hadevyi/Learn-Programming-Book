#include <stdio.h>

double array_avg(int arr[], int n);			// 함수의 원형 선언

int main() {
	int pen[4] = { 4500, 5370, 4920, 6090 };
	int monthly_stock[12] = { 505, 409, 389, 257, 450, 501, 500, 624, 480, 350, 389, 250 };
	double average;

	average = array_avg(pen, 4);			// 연 평균 판매수 구하기
	printf("펜 평균 판매수 : %.1lf\n", average);
	average = array_avg(monthly_stock, 12);	// 연 평균 재고량 구하기
	printf("평균 재고량 : %.1lf\n", average);

	return 0;
}

// 배열 원소가 n개 있는 arr 배열의 평균을 구하는 함수
double array_avg(int arr[], int n) {
	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + arr[i];

	return (double)sum / n;
}