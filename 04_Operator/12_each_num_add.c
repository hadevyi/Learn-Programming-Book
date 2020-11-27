#include <stdio.h>

int main() {
	int n, result = 0;
	int n1, n2, n3, n4;

	printf("네자리 정수를 입력하세오 : ");
	scanf("%d", &n);

	n1 = n / 1000;
	n = n % 1000;

	n2 = n / 100;
	n = n % 100;

	n3 = n / 10;
	n4 = n % 10;

	printf("입력한 수는 %d천%d백%d십%d입니다.\n", n1, n2, n3, n4);
}