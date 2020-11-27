#include <stdio.h>			// printf 함수를 위한 헤더 파일
#include <math.h>			// sin 함수를 위한 헤더 파일
#define PI 3.141592

int main() {
	int degree;		// 각도 값을 저장할 변수
	double radian;	// degree의 라디안 값을 저장할 변수
	
	for (degree = 0; degree <= 180; degree += 30) {
		radian = (PI * degree) / 180;	// 각도를 라디안 단위로 변환
		printf("sin(%d˚) = %.5lf\n", degree, sin(radian));
	}

	return 0;
}