//인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	char name[10];		// 이름(최대 10개의 문자를 저장할 배열)
	int year;			// 학년
	double GPA, score;	// 평점, 점수

	// 학생의 정보 입력
	printf("이름은? "); gets(name);
	printf("몇 학년? "); scanf("%d", &year);
	printf("%d학년 %s 평점은? ", year, name); scanf("%lf", &GPA);

	// 평점을 100점 만점의 점수로 변환
	score = (GPA * 100) / 4.5;

	// 처리 결과 출력
	printf("\n-----------------------------------------\n");
	printf("   이름       학년        평점 (점수)");
	printf("\n-----------------------------------------\n");
	printf("  %-10s   %d      %7.1lf (%5.1lf) ", name, year, GPA, score);
	printf("\n-----------------------------------------\n");

	return 0;
}