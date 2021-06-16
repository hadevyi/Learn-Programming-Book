#include <stdio.h>						// fopen, fscanf, fclose, feof 함수를 위한 헤더 파일
#include <stdlib.h>						// exit 함수를 위한 헤더 파일

int main() {
	FILE *fp;							// 파일 포인터 선언
	int age;

	fp = fopen("age.txt", "r");			// 파일을 읽기모드로 여려기

	if (fp == NULL) {					// 파일 열기 에러 처리
		printf("파일 열기 에러!");
		exit(1);
	}

	// 파일에 저장된 모든 나이를 읽어서 모니터에 출력하기
	fscanf(fp, "%d", &age);			// 파일에서 정수를 읽어 age에 저장하기
	while (!feof(fp)) {					// 파일의 끝을 지나지 않았다면 반복 수행
		printf("%2d\n", age);			// 파일에서 읽은 age를 모니터로 출력하기
		fscanf(fp, "%d", &age);			// 파일에서 정수를 읽어 age에 저장하기
	}

	fclose(fp);							// fp에 연결된 파일 닫기

	return 0;
}