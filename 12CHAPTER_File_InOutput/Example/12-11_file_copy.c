#include <stdio.h>													// fgetc, fputc, fopen, fclose 함수를 위한 헤더 파일
#include <stdlib.h>													// exit 함수를 위한 헤더 파일

int main() {
	FILE *fp1, *fp2;												// 원본 파일과 복사본 파일에 대한 파일 포인터
	char f_name1[30], f_name2[30], ch;								// 원본 파일명, 본사본 파일명

	printf("파일을 복사합니다.\n");

	// 원본 파일을 읽기 모드로 열기
	printf("원본 파일명 : ");
	gets(f_name1);
	fp1 = fopen(f_name1, "r");

	if (fp1 == NULL) {												// 파일 열기 에러 처리
		printf("%s란 파일이 없습니다.\n", f_name1);
		exit(1);
	}

	// 복사본 파일을 쓰기 모드로 열기
	printf("복사본 파일명 : ");
	gets(f_name2);
	fp2 = fopen(f_name2, "w");

	if (fp2 == NULL) {												// 파일 열기 에러 처리
		printf("%s란 파일이 없습니다.\n", f_name2);
		exit(1);
	}

	// 파일의 끝에 도달하지 않아서 ch에 저장된 값이 EOF가 아니라면 복사본에 쓰기를 반복
	while ((ch = fgetc(fp1)) != EOF)
		fputc(ch, fp2);												// 복사본 파일에 읽은 문자 쓰기

	fclose(fp1);
	fclose(fp2);													// 파일 닫기

	printf("원본 %s를 복사한 복사본 %s가 저장되었습니다.\n", f_name1, f_name2);

	return 0;
}