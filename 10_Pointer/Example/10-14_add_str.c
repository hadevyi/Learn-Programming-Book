#include <stdio.h>
#include <string.h>			// strcmp, strcpy 함수를 위한 헤더 파일
#include <stdlib.h>			// itoa 함수를 위한 헤더 파일

int main() {
	char f_name[20], temp[10];		// 파일명을 저장할 배열, 임시 문자열 배열
	int Ca, Na;

	for (Ca = 10; Ca <= 20; Ca += 10) {
		for (Na = 1; Na <= 3; Na++) {
			strcpy(f_name, "file");						// 파일명에 "file"을 저장
			
			strcat(f_name, "_Ca_");						// 파일명에 "_Ca_"를 연결
			strcat(f_name, _itoa(Ca, temp, 10));			// 파일명에 Ca의 값을 연결

			strcat(f_name, "_Na_");						// 파일명에 "_Na_"를 연결
			strcat(f_name, _itoa(Na, temp, 10));			// 파일명에 Na에 값을 연결

			printf("Ca = %d, Na = %d일 때 파일명 : %s \n", Ca, Na, f_name);
		}
	}

	return 0;
}