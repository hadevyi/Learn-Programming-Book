#include <stdio.h>

int main()
{
	int age;
	char gender;
	double height;

	// 자료 입력 받기
	printf("나이는? ");
	scanf("%d", &age);
	printf("키는? ");
	scanf("%lf", &height);
	printf("성별은? (남자라면 M 여자라면 F) ");
	
	getchar();			
	// 비쥬얼 10버전 이후 부터는 fflush(stdin);으로 버퍼 삭제가 원활하지 않다. 
	//따라서 getchar()로 버퍼를 지워준다.
	
	gender = getchar();	// scanf("%c", &gender);

	// 결과 출력하기
	printf("\n====================\n");
	printf("성별 : %c\n", gender);
	printf("나이 : %d세\n", age);
	printf("키 : %.1lfcm\n", height);

	return 0;
}