#include <stdio.h>

int main() {
	int die1, die2;
	int cnt = 0;

	printf("====================\n");
	printf("주사위1      주사위2\n");
	printf("====================\n");

	for (die1 = 1; die1 <= 6; die1++) {
		for (die2 = 1; die2 <= 6; die2++) {
			if (die1 + die2 == 7) {
				printf("\t%d\t%d\n", die1, die2);
				cnt++;
			}
		}
	}

	printf("====================\n");
	printf("\t총 %d가지\n", cnt);

	return 0;
}