#include <stdio.h>

int main()
{
	int age;
	char gender;
	double height;

	// 자료 입력 받기
	printf("성별은? (남자라면 M 여자라면 F) ");
	scanf("%c", &gender);
	printf("나이는? ");
	scanf("%d", &age);
	printf("키는? ");
	scanf("%lf", &height);

	// 결과 출력하기
	printf("\n==================\n");
	printf("성별 : %c\n", gender);
	printf("나이 : %d세\n", age);
	printf("키 : %.1lfmcm\n", height);

	return 0;
}