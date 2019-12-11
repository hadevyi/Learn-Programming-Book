#include <stdio.h>

int main()
{
	//int fahrenheit, celsius;
	double fahrenheit, celsius;

	//fahrenheit = 72;
	//celsius = (5 / 9) * (fahrenheit - 32);
	fahrenheit = 72.0;
	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

	//printf("화씨온도 %d도는 섭씨온도 %d도입니다.\n", fahrenheit, celsius);
	printf("화씨온도 %lf도는 섭씨온도 %lf도입니다.\n", fahrenheit, celsius);

	return 0;
}

// 상단의 주석은 바뀌기 전의 소스이며, 주석 하단의 소스는 수정된 소스이다.