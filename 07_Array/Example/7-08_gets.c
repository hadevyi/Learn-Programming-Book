#include <stdio.h>

int main() {
	char univaersity[11], std_no[9], name[10];	//문자열을 저장할 배열
	int i, j;

	// 사용자의 정보를 입력받기
	printf("학교명은? ");
	scanf("%s", univaersity);
	printf("학번은? ");
	scanf("%s", std_no);
	//fflush(stdin); 2015버전 이후부터는 실행되지 않는 함수이다.
	getchar();
	printf("이름은? ");
	gets(name);
	printf("==============================\n");
	printf("%s %c%c학번 %s\n", univaersity, std_no[2], std_no[3], name);
	printf("==============================\n");

	return 0;
}