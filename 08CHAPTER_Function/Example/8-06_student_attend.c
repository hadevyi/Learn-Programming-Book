#include <stdio.h>

// 함수의 원형
int pass(int number);

// main 함수의 정의
int main() {
	int absence = 5;

	if (pass(absence))
		printf("통과\n");
	else
		printf("과락\n");

	return 0;
}

// pass 함수 정의
int pass(int number) {
	int limit = 6;

	if (number < limit)
		return 1;
	else
		return 0;
}