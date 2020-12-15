#include <stdio.h>
#define MALE 1
#define YES 1

int main(void) {
	int gender, married, army, plus = 0, children;

	printf("성별 (남:1, 여:2) ? ");
	scanf_s("%d", &gender);

	if (gender == MALE) {
		printf("군 제대 (예:1, 아니오:2) ? ");
		scanf_s("%d", &army);

		if (army == YES) {
			plus++;

			printf("결혼 (예:1, 아니오:2) ? ");
			scanf_s("%d", &married);
			if (married == YES)
				plus++;

		}
	}
	else {
		printf("결혼 (예:1, 아니오:2) ? ");
		scanf_s("%d", &married);
		if (married == YES) {
			plus++;

			printf("자녀수는? ");
			scanf_s("%d", &children);
			if (children == 1)
				plus++;
			else if (children >= 2)
				plus += 2;
		}
	}

	printf("\n>> 총 가산점은 %d점입니다.", plus);

	return 0;
}