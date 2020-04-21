#include <stdio.h>

int main() {
	int n, odd, even, odd_sum = 0, even_sum = 0;

	printf("정수 n을 입력하시오 : ");
	scanf("%d", &n);

	odd = 1;
	even = 2;

	while (odd <= n && even <= n) {
		odd_sum += odd;
		even_sum += even;
		odd += 2;
		even += 2;
	}

	printf("정수 1에서 %d이하 홀수들의 합은 %d이고 ", n, odd_sum);
	printf("짝수들의 합은 %d입니다.\n", even_sum);

	return 0;
}