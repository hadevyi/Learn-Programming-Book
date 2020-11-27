#include <stdio.h>
#include <string.h>			// strlen 함수를 위한 헤더 파일

void print(char *string);

int main() {
	char *s = "C-Language";
	int i;

	// s 문자열의 (i+1)번째 문자부터 끝까지 출력하기를 반복하기
	for (i = strlen(s); i >= 0; i--)
		print(s + i);

	return 0;
}

// string이 가리키는 곳부터 문자열 끝까지 출력하는 함수
void print(char *string) {
	printf("%s\n", string);
}