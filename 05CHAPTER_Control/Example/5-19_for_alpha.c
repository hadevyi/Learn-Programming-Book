#include <stdio.h>

int main() {
	char start, ch;

	for (start = 'z'; start >= 'a'; start--) {
		// 각 행 시작 부분의 연속된 빈칸 출력하기
		for (ch = 'a'; ch < start; ch++)
			printf(" ");

		// 빈 칸 뒤에 알파벳을 start부터 'z'까지 출력하기
		for (ch = start; ch <= 'z'; ch++)
			printf("%c", ch);

		printf("\n");	// 알바벳 출력 후 행 바꾸기
	}

	return 0;
}