#include <stdio.h>

int main()
{
	int num;							// 변수 num 선언
	num = 02013;						// 변수 num 8진수 2013을 대입
	printf("num(8진수) = %o\n", num);	//num에 저장된 값을 8진수로 출력
	printf("num(10진수) = %d\n", num);	//num에 저장된 값을 10진수로 출력

	return 0;
}