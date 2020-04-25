#include <stdio.h>
#define SIZE 5				// 배열 원소수 5를 매크로 상수 SIZE로 정의

int main() {
	int quiz[SIZE];			// 정수 SIZE개의 저장할 배열 선언
	int i, count, sum;
	double avg;

	// 배열의 입력
	printf("%d명의 점수를 순서대로 입력하시오\n\n", SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("%d번의 퀴즈 점수는? ", i + 1);
		scanf("%d", &quiz[i]);
	}

	//배열 평균 구하기
	sum = 0;
	for (i = 0; i < SIZE; i++)
		sum = sum + quiz[i];

	avg = (double)sum / SIZE;

	//평균 미만자 수 구하기
	count = 0;
	for (i = 0; i < SIZE; i++)
		if (quiz[i] < avg)
			count++;

	//결과 출력
	printf("===================================\n");
	printf("   번호   점수   평균과의 차이\n");
	printf("===================================\n");
	for (i = 0; i < SIZE; i++)
		printf("   %2d      %2d      %5.1lf\n", i + 1, quiz[i], quiz[i] - avg);
	printf("===================================\n");
	printf("평균 : %.1lf점\n", avg);
	printf("===================================\n");
	printf("평균 미만 : %d명\n", count);
	printf("===================================\n");

	return 0;
}