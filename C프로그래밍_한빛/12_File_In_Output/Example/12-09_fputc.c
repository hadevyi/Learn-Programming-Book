#include <stdio.h>													// fputc, fopen, fclose 함수를 위한 헤더 파일
#include <stdlib.h>													// exit 함수를 위한 헤더 파일

int main() {
	FILE *fp2;														// 파일 포인터
	char f_name2[30], ch;											// 쓰기를 할 파일명

	printf("만들 파일명 : ");
	gets(f_name2);													// 파일명 입력

	fp2 = fopen(f_name2, "w");										// 파일을 쓰기용으로 열기
	
	if (fp2 == NULL) {												// 파일 열기 에러 처리
		printf("%s 파일 만들기 에러\n", f_name2);
		exit(1);
	}

	scanf("%c", &ch);												// 키보드에서 문자 한개 입력하기

	while (ch != '&') {												// 입력 끝을 알리는 &가 아니라면 계속 입력하기
		fputc(ch, fp2);												// 방금 입력받은 ch에 저장된 문자를 파일에 기록하기
		scanf("%c", &ch);											// ch - fgetc(stdin);과 동일
	}

	fclose(fp2);													// 파일 닫기

	return 0;
}