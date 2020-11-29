#include <stdio.h>

int main() {
	int num = 1, total = 0;

	while (1) {
		if (total + num > 1000) {
			num--;
			break;
		}
		else {
			total += num;
			num++;
		}
	}

	printf("1부터 %d까지의 합이 %d입니다.\n", num, total);

	return 0;
}