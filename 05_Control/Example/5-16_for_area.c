#include <stdio.h>

int main() {
	int i;
	double area = 100, target = 1;	// 현재 사각형의 면적, 최저 면적

	for (i = 1;; i++) {
		area = area / 2;
		printf("%d번 접었을 떄의 넓이 : %6.2lf\n", i, area);

		if (area < target)
			break;
	}

	return 0;
}