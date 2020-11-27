#include <stdio.h>														// fseek, rewind, ftell을 위한 헤더 파일
#include <stdlib.h>														// exit를 위한 헤더 파일

typedef struct person {													// 구조체 정의						
	char name[7];
	char gender[3];
	int age;
}PERSON;																// 구조체 struct person을 PERSON으로 재정의

int main() {
	FILE *fp;
	PERSON user;
	int size, position, i, no;

	fp = fopen("user.bin", "r+b");										// 읽기/쓰기 모드로 이진 파일 열기

	if (fp == NULL) {													// 파일 열기 에러 처리
		printf("파일 열기 에러!\n");
		exit(1);
	}

	// 파일에 저장된 구조체 정보의 개수를 구하기 위해 파일 위치 지시자 정보를 이용하기
	fseek(fp, 0, SEEK_END);												// (파일 끝 + 0)으로 이동하기
	position = ftell(fp);												// 현 위치를 position에 저장하기
	size = position / sizeof(PERSON);									// PERSON 크기의 블록 개수 구하기

	// 파일의 내용을 읽어서 모니터에 출력하기
	puts("-----------------------");
	puts(" 번호 이름  성별  나이  ");
	puts("-----------------------");
	rewind(fp);															// 파일의 시작 위치로 이동
	for (i = 0; i < size; i++) {
		fread(&user, sizeof(PERSON), 1, fp);
		printf("%3d %-8s %-3s %4d\n", i + 1, user.name, user.gender, user.age);
	}
	puts("-----------------------");

	// 정보를 수정할 번호와 수정 정보를 입력받기
	printf("정보를 수정할 사용자의 번호는? ");
	scanf("%d", &no);

	if ((no < 1) || (no > size)) {										// 잘못된 입력 번호 처리
		printf("번호의 범위가 잘못되어 종료합니다.\n");
		exit(1);
	}

	printf("\n이름 : ");
	scanf("%s", user.name);
	printf("성별 : ");
	scanf("%s", user.gender);
	printf("나이 : ");
	scanf("%d", &user.age);

	// 파일 위치 지사자를 no번째 사용자 정보 시작 위치로 이동한 후 새 정보를 파일에 쓰기
	fseek(fp, sizeof(PERSON)*(no - 1), SEEK_SET);
	fwrite(&user, sizeof(PERSON), 1, fp);

	fclose(fp);
	printf("\n파일 수정이 완료되었습니다.\n");

	return 0;
}