#include <stdio.h>
#define MAX(a, b, c) (((a)>(b)) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main() {
	int a, b, c; 
	printf("a값 : "); 
	scanf_s("%d", &a); 
	printf("b값 : "); 
	scanf_s("%d", &b); 
	printf("c값 : "); 
	scanf_s("%d", &c); 
	
	printf("입력하신 값 중에서 가장 큰 값은 %d입니다. \n", MAX(a, b, c));

	return 0;
}