#include <stdio.h>

int main() {
	int month;

	printf("월 입력 : ");
	scanf("%d", &month);

	switch (month)
	{
		case 1 :
		case 2 :
		case 3 :
			printf(">> 1분기입니다.");
			break;
		case 4 :
		case 5 :
		case 6 :
			printf(">> 2분기입니다.");
			break;
		case 7 :
		case 8 :
		case 9 :
			printf(">> 3분기입니다.");
			break;
		case 10 :
		case 11 :
		case 12 :
			printf(">> 4분기입니다.");
			break;
		default:
			printf(">> 잘못된 입력입니다.");
			break;
	}

	return 0;
}