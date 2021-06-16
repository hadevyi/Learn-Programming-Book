#include <stdio.h>						// fopen, fprintf, fclose 함수를 위한 헤더 파일
#include <stdlib.h>						// exit 함수를 위한 헤더 파일

int main() {
	FILE *fp;							// 파일 포인터 선언
	char *f_name = "age.txt";			// 파일명, char f_name[20] = "age.txt";도 가능
	int age, i, n;

	fp = fopen(f_name, "a");			// f_name 이름의 파일을 추가용으로 열기

	if (fp == NULL) {					// 파일 열기 에러 처리
		printf("%s 파일 열기 에러!\n", f_name);
		exit(1);
	}

	printf("회원의 나이를 입력하면 %s 파일에 추가합니다.\n", f_name);
	printf("추가할 회원의 수는? ");
	scanf("%d", &n);					// 파일에 추가할 회원의 나이 개수를 입력받기

	// n명의 나이를 키보드에서 입력받아 파일에 추가하기
	for (i = 0; i < n; i++) {
		printf("회원의 나이는? ");
		scanf("%d", &age);				// 키보드에서 회원의 나이를 입력받기
		
		fprintf(fp, "%d\n", age);		// age에 저장된 나이를 fp에 연결된 파일에 쓰기
	}

	fclose(fp);							// fp에 연결된 age.txt 파일을 닫고 연결을 끊기
	printf("회원 %d명의 나이를 %s 파일에 추가했습니다.\n", n, f_name);

	return 0;
}