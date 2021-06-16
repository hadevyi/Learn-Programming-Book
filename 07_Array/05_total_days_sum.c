#include <stdio.h>

int main() {
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month, i, total = 0;

	printf("1월부터 몇월까지의 총일을 구할까요? ");
	scanf("%d", &month);

	for (i = 1; i <= month; i++) 
		total += days[i];
	
	printf("1월부터 %d월까지는 총 %d일이 있습니다.\n", month, total);
}