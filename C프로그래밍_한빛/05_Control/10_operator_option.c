#include <stdio.h>

int main() {
	int num, option;

	printf("수 입력 : ");
	scanf("%d", &num);

	printf("계산법(1,2,3) : ");
	scanf("%d", option);

	switch (option)	{
		case 1 :
			printf("입력한 수 %d입니다.", num);
			break;
		case 2 :
			printf("입력한 수 %d의 2배수는 %d입니다.", num, num * 2);
			break;
		case 3:
			printf("입력한 수 %d의 3배수는 %d입니다.", num, num * 3);
			break;
		default:
			printf("잘못된 연산입니다. 계산법은 1~3만 존재합니다.");
			break;
	}

	return 0;
}