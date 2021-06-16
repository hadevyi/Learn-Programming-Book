#include <stdio.h>

void print_title();
void print_information(void);

int main() {
	print_title();
	print_information();
}

// 보고서 제목 출력
void print_title() {
	printf("=============================\n");
	printf("==      C 프로그래밍       ==\n");
	printf("== 사인 함수 그래프 그리기 ==\n");
	printf("=============================\n");

}

// 개인 정보 출력하기
void print_information(void) {
	printf("\n\n");
	printf("%30s\n", "대한대학교");
	printf("%30s\n", "IT학부");
	printf("%30s\n", "홍길동");
}