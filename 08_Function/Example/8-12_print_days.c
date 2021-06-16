#include <stdio.h>
#define TRUE 1
#define FALSE 0

// 함수의 원형 선언
int days(int yy);
int leap_year(int y);

int main() {
	int year;

	printf("총 일을 구하고 싶은 연도는? ");
	scanf("%d", &year);

	// days 함수를 호출해 year년의 총 일을 구하기
	printf("%d년은 %d일까지 있습니다.\n", year, days(year));

	return 0;
}

int days(int yy) {		// yy년의 총 일(365 또는 366)을 반환하는 함수
	if (leap_year(yy) == TRUE)	// if (leap_year(yy))와 동일
		return 366;
	else
		return 365;
}

int leap_year(int y) {	// y년도의 윤영 여부를 반환하는 함수
	if (y % 400 == 0 || (y % 4 == 0) && (y % 100 != 0))
		return TRUE;	// 윤년이므로 return 1;
	else
		return FALSE;	// 윤년이 아니므로 return 0;
}