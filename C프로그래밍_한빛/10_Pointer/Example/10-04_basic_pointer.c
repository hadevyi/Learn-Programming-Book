#include <stdio.h>

int main() {
	int a = 100, b = 200;
	int *p1, *p2;		// int형 포인터 변수 선언

	p1 = &a;			// p1이 a를 가리키게 함
	printf("p1 = &a 후 : a = %d, *p1 = %d\n", a, *p1);

	*p1 = *p1 + 1;		// p1이 가리키는 곳의 값을 1 증가
	printf("p1 = &a 후 : a = %d, *p1 = %d\n", a, *p1);

	p2 = p1;			// p2도 p1이 가리키는 곳을 가리키게 함
	printf("p2 = p1 후 : a = %d, *p1 = %d, *p2 = %d\n", a, *p1, *p2);

	(*p2)++;			// *p2 = *p2 + 1; p2가 가리키는 곳의 값을 1증가
	printf("(*p2)++ 후 : a = %d, *p1 = %d\n\n", a, *p1);

	printf("&a = %u, &b = %u, b = %d\n", &a, &b, b);
	printf("p1 = %u, p1-1 = %u, *(p1-3) = %d\n", p1, p1 - 1, *(p1 - 3));

	return 0;
}