#include <stdio.h>

// 함수의 원형 선언
void print_header();
void print_numbers(int end);

// main 함수 정의
int main() {
	int year = 2015, month = 2, days = 28;	// 연도, 월, 일 수

	printf("\n\t\t%d년 %d월 달력\n", year, month);
	print_header();			// 달력 윗 부분의 요일과 줄 출력
	print_numbers(days);	// 달력의 날짜 출력

	return 0;
}

// 달력의 날짜를 출력하기 전에 요일을 출력하는 함수
void print_header() {
	printf("=================================================================\n");
	printf("\t일\t월\t화\t수\t목\t금\t토\n");
	printf("=================================================================\n");
}

// 달력의 날짜를 한 주 씩 출력하는 함수
void print_numbers(int end) {
	int day_num;

	for (day_num = 1; day_num <= end; day_num++) {
		printf("\t%2d", day_num);
		if (day_num % 7 == 0)	// 7일이 지날때마다 새로운 행에서 출력하기
			printf("\n");
	}
	printf("\n");
}