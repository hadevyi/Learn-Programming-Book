#include <stdio.h>

int main() {
	int var = 100;		// int형 변수 var을 선언하면서 값을 100으로 초기화
	int *ptr;			// int형 값을 저장하는 기억 장소의 주소를 저장할 포인터 변수 ptr 선언

	ptr = &var;			// ptr이 변수 var을 가리키게 함

	// 변수 var에 저장된 값을 직접 참조하여 출력하기
	printf("변수 var의 값 : %d\n", var);

	// ptr을 이용해 var에 저장된 값을 간접적으로 참조하여 출력하기
	printf("var의 간접 참조(*ptr) 결과 값 : %d\n\n", *ptr);

	// 변수 var의 주기억장치 주소와 포인터 변수 ptr에 저장된 주소 출력하기
	printf("변수 var의 주소 : %u(%p)\n", &var, &var);
	printf("변수 ptr에 저장된 주소 : %u(%p)\n", &var, &var);

	return 0;
}