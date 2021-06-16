#include <stdio.h>
#define MULT(x, y) x*y
#define MSG "안녕하세요?" // 안녕하세요? 라고만 작성하면 string으로 인식하지 못하게됩니다.

int main() {
	int a = 1, b = 2;
	printf("%s\n", MSG);
	printf("%d\n", MULT(2 + a, b));

	return 0;
}