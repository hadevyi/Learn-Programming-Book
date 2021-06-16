#include <stdio.h>

int main(){
	char name[10];
	int language, english, math, attendance;
	double average;

	printf("학생의 이름 : "); gets(name);
	printf("국어 : "); scanf("%d", &language);
	printf("영어 : "); scanf("%d", &english);
	printf("수학 : "); scanf("%d", &math);
	printf("출결 : "); scanf("%d", &attendance);

	average = (language + english + math + attendance) / 4.0;

	printf("-------------------------------------------\n");
	printf("\t[%s] 학생 >> ", name);
	(average >= 70) && (attendance >= 80) ? printf("합격\n") : printf("불합격\n");
	printf("-------------------------------------------\n");
	printf("\t네 과목의 평균 : %.1lf\n", average);
	printf("\t출결 점수      : %d\n", attendance);
	printf("-------------------------------------------\n");

	return 0;
}