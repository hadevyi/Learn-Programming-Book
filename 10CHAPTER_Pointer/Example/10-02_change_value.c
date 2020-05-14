#include <stdio.h>

int main() {
	int a = 100, b = 200, temp;
	int *p1, *p2, *p_temp;

	p1 = &a;		// p1은 a를 가르키게 함
	p2 = &b;		// p2는 b를 가르키게 함
	printf("a = %d, b = %d\n", a, b);
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	printf("\n>> p1과 p2가 가리키는 곳에 저장된 값을 직접 바꾸기\n");
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("a = %d, b = %d\n", a, b);
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	printf("\n>> 포인터 p1과 p2에 저장된 주소를 바꾸기 \n");
	a = 100, b = 200;		// 원래 a와 b의 값으로 초기화
	p_temp = p1;
	p1 = p2;
	p2 = p_temp;


	printf("a = %d, b = %d\n", a, b);
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	return 0;
}