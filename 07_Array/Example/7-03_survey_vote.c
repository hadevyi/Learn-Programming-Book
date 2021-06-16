#include <stdio.h>
#define PERSONS 30		// 설문 조사 응답수
#define STARS 6			// 연예인 번호와 vote 배열의 첨자를 일치시키기 위해 연예인 수 + 1

int main() {
	int survey[PERSONS] = {1, 3, 2, 5, 3, 2, 1, 2, 3, 4, 5, 2, 3, 3, 2,
							1, 4, 5, 2, 3, 5, 1, 3, 4, 2, 3, 1, 4, 2, 3 };

	int vote[STARS] = { 0 };
	int i;

	for (i = 0; i < PERSONS; i++)
		vote[survey[i]]++;		// 응답자가 답한 연예인(survey[i]의 득표수를 1증가

	printf("연예인 득표수\n");
	printf("====================================\n");
	for (i = 1; i < STARS; i++)	// vote[0]에는 아무런 자료도 저장되어있지 않다.
		printf("  %d번    %d표\n", i, vote[i]);

	return 0;
}