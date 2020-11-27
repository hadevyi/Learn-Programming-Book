#include <stdio.h>

// 함수의 원형 선언
int get_pay(int hours, int day_rate, int hour_rate);

// main 함수의 정의
int main() {
	int total_hours;	// 근로 시간
	int daily_rate = 100000, hourly_rate = 10000;	// 일급, 시급
	int pay;			// 임금

	printf("근로 시간은? ");
	scanf("%d", &total_hours);

	pay = get_pay(total_hours, daily_rate, hourly_rate);
	printf("총 하루 임금은 %d원\n", pay);

	return 0;
}

// 근로 시간에 대한 급여를 구하는 get_pay 함수의 정의
int get_pay(int hours, int day_rate, int hour_rate) {
	int day = hours / 8;
	hours = hours % 8;

	return (day*day_rate + hours * hour_rate);
}