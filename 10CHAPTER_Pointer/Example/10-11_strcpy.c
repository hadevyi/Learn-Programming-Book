#include <stdio.h>
#include <string.h>		// strcpy 함수를 위한 헤더 파일

int main() {
	char first[10] = "GilDong", last[10] = "Hong";		// 이름과 성
	char temp[10];										// 문자열을 임시로 저장할 배열

	printf("Name : %s %s\n", first, last);

	// 배열의 내용을 직접 교환하여 두 문자열을 교환하기
	strcpy(temp, first);		// first 배열의 문자열을 temp 배열에 복사하기
	strcpy(first, last);		// last 배열의 문자열을 first 배열에 복사하기
	strcpy(last, temp);			// temp 배열의 문자열을 last 배열에 복사하기

	printf("Name : %s %s\n", first, last);

	return 0;
}