#include <stdio.h>

int main() {
	int temp;

	printf("현재 온도는?");
	scanf("%d", &temp);

	if (temp < 0)
		printf("오늘은 영하이며 ");

	printf("현재 온도는 %d도입니다.\n", temp);

	return 0;
}