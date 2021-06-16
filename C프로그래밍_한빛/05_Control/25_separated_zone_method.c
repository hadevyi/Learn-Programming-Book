#include <stdio.h>

int main() {
	double start, end, sum = 0, dx, temp;
	int num, i;

	printf("적분 구간 시작은? ");
	scanf("%lf", &start);
	printf("적분 구간 끝은? ");
	scanf("%lf", &end);
	printf("n(적분 구간의 개수)은? ");
	scanf("%d", &num);

	dx = (end - start) / num;

	for (i = 1; i < num;i++) {
		temp = (start + i * dx) * (start + i * dx);
		sum += dx * temp;
	}

	printf("f(x) = x²의 [%.1lf, %.1lf] 구간의 적분 근사치는 %.3lf입니다.", start, end, sum);
}