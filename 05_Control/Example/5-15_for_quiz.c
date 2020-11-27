#include <stdio.h>

int main() {
	int i, quiz, sum, pass, fail;
	double avg;

	// 누적용 변수를 0으로 초기화
	sum = 0;
	pass = 0;
	fail = 0;

	//10명의 퀴즈 정수를 입력받아 sum에 누적하고 통과자와 탈락자수 구하기
	for (i = 1; i <= 10; i++) {
		printf("%d번의 퀴즈 점수는? ", i);
		scanf("%d", &quiz);		// i번 학생의 퀴즈 점수 입력

		// 평균을 구하기 위해 점수를 sum에 누적하기
		sum += quiz;

		if (quiz >= 70)
			pass++;		// 70점 이상이면 통과
		else
			fail++;		// 70점 미만이면 탈락
	}

	// for문에서 구한 sum으로부터 평균 구하기
	avg = (double)sum / 10;

	// 결과 출력
	printf("====================================\n");
	printf("평균 : %.2lf점\n", avg);
	printf("통과자 %2d명\n", pass);
	printf("탈락자 %2d명\n", fail);

	return 0;
}