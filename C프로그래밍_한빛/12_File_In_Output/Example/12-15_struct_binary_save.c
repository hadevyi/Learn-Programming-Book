#include <stdio.h>														// fwrite, ffloush 함수를 위한 헤더 파일
#include <stdlib.h>														// exit 함수를 위한 헤더 파일
#define SIZE 3															// 정보를 입력할 사용자 수

struct person {															// 구조체 정의
	char name[7], gender[3];											// 이름, 성별
	int age;															// 나이
};
typedef struct person PERSON;											// 자료형 재정의

int main() {
	int i;
	PERSON user;														// 사용자 정보를 저장할 구조체 변수 선언
	FILE *fp = fopen("user.bin", "wb");									// 쓰기 모드로 이진 파일 열기

	if (fp == NULL) {													// 파일 열기 에러 처리
		printf("파일 열기 에러!\n");
		exit(1);
	}

	// SIZE명의 사용자 정보를 키보드에서 입력받아 이진 파일에 출력하기
	printf(">> 사용자 정보를 입력하세요. (%d명)", SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("\n%d. 이름 : ", i + 1);
		gets(user.name);
		printf("   성별 : ");
		gets(user.gender);
		printf("   나이 : ");
		scanf("%d", &user.age);

		// user에 저장된 사용자 정보 즉 PERSON형 구조체 한 개를 파일에 쓰기
		fwrite(&user, sizeof(PERSON), 1, fp);
		//fflush(stdin);													// 다음 gets 입력을 위해 표준 입력 장치의 버퍼 비우기
		getchar();
	}

	fclose(fp);
	printf("\n== 파일 출력 완료 ==\n");

	return 0;
}