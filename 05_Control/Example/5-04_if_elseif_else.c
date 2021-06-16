#include <stdio.h>

int main() {
	int score;		// 점수를 저장할 변수
	char grade;		// 학점에 해당하는 문자 1개를 저장할 변수

	printf("점수를 입력하시오 : ");
	scanf("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("학점 : %c\n", grade);

	return 0;
}