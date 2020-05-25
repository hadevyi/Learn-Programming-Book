#include <stdio.h>											// fopen, fscanf, fclose, feof 함수를 위한 헤더 파일
#include <stdlib.h>											// exit, rand, srand 함수를 위한 헤더 파일
#include <time.h>											// time 함수를 위한 헤더 파일

int main() {
	int i, size;

	FILE *fp = fopen("rand.txt", "w");						// 파일을 쓰기 모드로 열기

	if (fp == NULL) {
		printf("파일 열기 에러!\n");
		exit(1);
	}

	printf("1~1000 사이의 난수를 몇 개 발생할까요? ");
	scanf("%d", &size);

	// 1~1000 중의 난수 size개를 파일에 쓰기
	srand(time(NULL));										// rand 함수의 씨드를 현재 시간으로 설정
	for (i = 0; i < size; i++)
		fprintf(fp, "%4d\n", rand() % 1000 + 1);			// 얻은 난수를 스케일링한 후 파일에 쓰기
	fclose(fp);												// 파일 닫기

	return 0;
}