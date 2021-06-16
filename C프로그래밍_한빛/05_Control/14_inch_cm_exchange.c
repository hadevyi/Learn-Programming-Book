#include <stdio.h>

int main() {
	char option;
	double data;

	printf("입력 단위가 cm이면 'c'나 'C'를, inch이면 'i'나 'I'를 입력하세요.\n입력 단위 : ");
	scanf("%c", &option);
	printf("입력 값 : ");
	scanf("%lf", &data);

	if (option == 'c' || option == 'C') {
		printf("입력한 %.2lfcm는 %.2lfinch입니다.\n", data, data / 2.54);
	}else if(option == 'i' || option == 'I') {
		printf("입력한 %.2lfinch는 %.2lfcm입니다.\n", data, data * 2.54);
	}

	return 0;
}