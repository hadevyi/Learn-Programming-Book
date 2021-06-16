#include <stdio.h>						// fopen, fscanf, fclose 함수를 위한 헤더 파일
#include <stdlib.h>						// exit 함수를 위한 헤더 파일
#define SIZE 5							// 회원 수

int main() {
	FILE *fp;							// 파일 포인터 선언
	char *f_name = "age.txt";			// 파일명, char f_name[20] = "age.txt";도 가능
	int age, i;

	fp = fopen(f_name, "r");			// f_name 이름의 파일을 읽기용으로 열기
	
	if (fp == NULL) {					// 파일 열기 에러 처리
		printf("%s 파일을 열 수 없습니다..\n", f_name);
		exit(1);
	}

	for (i = 0; i < SIZE; i++) {		// 파일의 나이응 SIZE개 읽어 모니터에 출력하기
		// fp에 연결된 파일에서 정수 한개를 읽어 age에 저장하기
		fscanf(fp, "%d", &age);

		// age에 저장되 ㄴ나이를 모니터에 출력하기
		printf("%2d번 회원의 나이는 %d세 \n", i + 1, age);
	}

	fclose(fp);							// fp에 연결된 age.txt 파일을 닫고 연결을 끊기

	return 0;
}