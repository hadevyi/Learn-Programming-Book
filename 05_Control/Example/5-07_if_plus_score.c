#include <stdio.h>

int main() {
	int gender, married, army, plus, children;

	plus = 0;											// 가산점을 먼저 0으로 초기화

	printf("성별 (남 : 1, 여 : 2)? ");					// 성별 묻기
	scanf("%d", &gender);

	if (gender == 1) {									// 남자인 경우 처리 부분
		printf("군 제대 (예 : 1, 아니오 : 2)? ");		// 군 제대 여부를 묻기
		scanf("%d", &army);

		if (army == 1) {
			plus++;										// 군 제대자라면 +1

			printf("결혼 (예 : 1, 아니오 : 2)? ");		// 제대자라면 결혼 여부를 묻기
			scanf("%d", &married);

			if (married == 1)
				plus++;									// 군제대자이면서 기혼자라면 +1
		}
	}
	else {												// 여자인 경우의 처리 부분
		printf("결혼 (예 : 1, 아니오 : 2)? ");			// 결혼 여부를 붇기
		scanf("%d", &married);

		if (married == 1) {
			plus++;										// 기혼자라면 +1

			printf("자녀수는? ");
			scanf("%d", &children);

			if (children == 1)
				plus++;									// 자녀가 1명이라면 +1
			else if (children >= 2)
				plus += 2;								// 자녀가 둘 이상이라면 +2
		}
	}

	printf("\n>> 총 가산점은 %d점입니다.\n", plus);

	return 0;
}