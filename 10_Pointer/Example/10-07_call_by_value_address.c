#include <stdio.h>

void swap_value(int x, int y);				// 값에 의한 호출 방식
void swap_address(int *x, int *y);			// 주소에 의한 호출 방식

int main(){
	int x = 100, y = 200;

	printf("In main : x = %d, y=%d\n\n", x, y);

	swap_value(x, y);						// 값에 의한 호출 : x와 y의 값을 전달
	printf("In main : x = %d, y=%d (swap_value(x, y) 호출 후)\n\n", x, y);

	swap_address(&x, &y);						// 값에 의한 호출 : x와 y의 값을 전달
	printf("In main : x = %d, y=%d (swap_address(x, y) 호출 후)\n\n", x, y);
	
	return 0;
}

// 매개변수 x와 y의 값을 교환하지만 자신을 호출한 함수의 두 인수는 교환하지 못하는 함수
void swap_value(int x, int y) {
	int temp;			// 임시 대피 장소

	temp = x;
	x = y;
	y = temp;
	printf("In swap_value : x = %d, y=%d\n", x, y);
}

// 포인터 매개변수 x와 y를 이용해 자신을 호출한 함수의 두 인수의 값을 교환하는 함수
void swap_address(int *x, int *y) {
	int temp;			// 임시 대피 장소

	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap_address : *x = %d, *y=%d\n", *x, *y);

}