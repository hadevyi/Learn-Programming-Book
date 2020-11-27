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
	FILE *fp = fopen("user.bin", "rb");									// 읽기 모드로 이진 파일 열기

	if (fp == NULL) {													// 파일 열기 에러 처리
		printf("파일 열기 에러!\n");
		exit(1);
	}

	puts("-----------------------------------------------------");
	puts("  이름   성별  나이");
	puts("-----------------------------------------------------");

	// 파일에서 블록 1개를 제대로 읽었다면 계속 반복하기
	while (fread(&user, sizeof(PERSON), 1, fp) == 1)
		printf(" %-8s %-3s %4d\n", user.name, user.gender, user.age);

	puts("-----------------------------------------------------");
	fclose(fp);															// 파일 닫기

	return 0;
}