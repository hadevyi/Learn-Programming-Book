#include <stdio.h>														// fgetc, fopen, fclose 함수를 위한 헤더 파일
#include <stdlib.h>														// exit 함수를 위한 헤더 파일

int main() {
	FILE *fp1;															// 파일 포인터
	char f_name1[30], ch;												// 읽을 파일명

	printf("읽을 파일명 : ");
	gets(f_name1);														// 파일명 입력하기

	fp1 = fopen(f_name1, "r");

	if (fp1 == NULL) {													// 파일 열기 에러 처리
		printf("%s란 파일이 없습니다.\n", f_name1);
		exit(1);
	}

	// 일단 문자를 읽은 후 성공했다면 화면에 출력하기를 반복
	while ((ch = fgetc(fp1)) != EOF)
		printf("%c", ch);												// fputc(ch, stdout);와 동일

	fclose(fp1);														// 파일 닫기

	return 0;
}