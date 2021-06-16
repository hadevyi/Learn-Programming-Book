#include <stdio.h>

int main() {
	char ch;

	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z') printf("알파벳 소문자입니다.\n");
	else if (ch >= 'A' && ch <= 'Z') printf("알파벳 대문자입니다.\n");
	else if (ch >= '0' && ch <= '9') printf("숫자입니다.\n");
	else printf("대문자, 소문자, 숫자 외의 문자입니다.\n");

	return 0;
}