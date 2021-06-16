#include <stdio.h>							// fopen, fprintf, fclose 함수를 위한 헤더 파일
#include <stdlib.h>							// exit 함수를 위한 헤더 파일
#define SIZE 5								// 회원 수

int main() {
	FILE *fp;								// 파일 포인터 선언
	char *f_name = "age.txt";				// 파일명, char f_name[20] = "age.txt";도 가능
	int age, i;

	fp = fopen(f_name, "w");				// f_name 이름의 파일을 쓰기용으로 열기

	if (fp == NULL) {						// 파일 열기 에러 처리
		printf("%s 파일 열기 에러!\n", f_name);
		exit(1);
	}

	printf("회원 %d명의 나이를 입력하면 파일로 저장합니다.\n", SIZE);

	for (i = 0; i < SIZE; i++) {			// SIZE명의 나이를 키보드에서 입력받아 파일에 쓰기
		printf("%2d번 회원의 나이는? ", i + 1);
		scanf("%d", &age);					// 키보드에서 회원의 나이를 입력받기

		fprintf(fp, "%d\n", age);			// age의 값을 fp에 연결된 파일에 쓰기
	}

	fclose(fp);								// fp에 연결된 age.txt 파일을 닫고 연결을 끊기
	printf("회원 %d명의 나이를 %s 파일에 저장했습니다.\n", SIZE, f_name);

	return 0;
}