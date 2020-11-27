#include <stdio.h>

int main() {
	// 1번 - switch의 조건은 정수형만 가능하다. 따라서 n의 변수를 int로, case의 값을 정수로, 변환명세를 %d로 수정한다.
	// 또한 각 경우의 break를 걸어 경우의 대한 실행을 보인다.
	int n, sum, i;

	printf("입력 : ");
	scanf("%d", &n);

	switch (n) {
		case 1: printf("%d\n", n); break;
		case 2:printf("%d\n", n + 1); break;
		case 3:printf("%d\n", n + 2); break;
		default:printf("실행종료!");
	}

	// 2번 - 음수, 양수, 0 구분하기
	// if - else if - else 중에서 if와 else는 오직 한개만 올 수 있다.

	if (n > 0)
		printf("양수");
	else if (n < 0)
		printf("음수");
	else
		printf("0");

	// 3번 - 1 ~ 10의 합 sum 구하기
	// for의 증감값을 i의 값 자체의 변화를 주어야한다. 따라서 i + 1이 아닌 i += 1 혹은 i++로 작성해야 한다.
	sum = 0;
	for (i = 1; i <= 10; i ++)
		sum = sum + i;

	return 0;
}