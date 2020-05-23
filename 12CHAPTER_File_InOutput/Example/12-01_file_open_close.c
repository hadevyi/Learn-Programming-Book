#include <stdio.h>						// fopen, fclose 함수를 위한 헤더 파일
#include <stdlib.h>						// exit 함수를 위한 헤더 파일

int main() {
	FILE *fp;							// 파일 포인터 선언
	char filename[80];					// 사용자가 입력한 파일명을 저장할 배열

	printf("열고 싶은 파일명을 입력하세요. ");
	gets(filename);						// 파일명을 직접 입력받기, scanf("%s", filename);

	fp = fopen(filename, "r");			// 파일을 읽기용으로 열어 fp와 연결하기
	
	if (fp == NULL) {
		printf("\n열기 에러 : %s 파일이 있는지 확인해보세요.\n", filename);
		exit(1);						// 프로그램 강제 종료
	}

	printf("\n파일을 읽기 모드로 성공적으로 열었습니다.");
	fclose(fp);							// 파일 닫기
	printf("\n파일을 닫고 프로그램을 종료합니다.\n");

	return 0;
}