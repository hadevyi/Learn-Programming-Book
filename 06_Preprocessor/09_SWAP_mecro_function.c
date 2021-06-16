#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main() {
	int a, b, c;

	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);

	SWAP(a, b, c);
	printf(">> %d %d\n", a, b);

	return 0;
}