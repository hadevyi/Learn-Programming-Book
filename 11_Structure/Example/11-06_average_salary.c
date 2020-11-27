#include <stdio.h>
#define SIZE 5						// 인원수

struct employee_info {				// 구조체 정의
	char name[7];					// 최대 6개 문자(한글 세개)를 저장할 배열 멤버
	char id[10];					// 최대 9개 문자를 저장할 매열 멤버
	int salary;						// 급여를 저장할 정수형 멤버
};

int main() {
	struct employee_info employee[SIZE];		// 구조체 배열 선언
	int average = 0, sum = 0, i;				// 급여 평균, 급여 합계

	// 직원 5명의 정보 입력 및 급여 누적
	printf(">> 직원의 정보(이름, ID, 급여)를 입력하세요. <<\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d번 : ", i + 1);
		scanf("%s %s %d", employee[i].name, employee[i].id, &employee[i].salary);
		sum += employee[i].salary;				// 급여 합계 계산
	}

	average = sum / SIZE;						// 급여 평균(원단위) 계산

	// 급여가 평균 이상인 직원의 id와 급여를 출력하기
	printf("\n----------------------------------------------\n");
	printf("   급여가 %d만원(평균) 이상인 직원 정보", average);
	printf("\n----------------------------------------------\n");
	for (i = 0; i < SIZE; i++) {
		if (employee[i].salary >= average)
			printf("\t%s\t%d만원\n", employee[i].id, employee[i].salary);
	}
	printf("----------------------------------------------\n");

	return 0;
}