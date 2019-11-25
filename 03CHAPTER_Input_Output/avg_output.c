//인제대학교 컴퓨터공학부 16학번 당현아 작성 (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	// 변수 선언
	int std_no, kor, world, math;
	double avg;

	// 대입문을 사용해 변수 값 저장하기
	std_no = 2013901;
	kor = 89;
	world = 100;
	math = 95;

	// 세 과목의 평균 구하기
	avg = (kor + world + math) / 3.0;

	// 결과를 혀식에 맞춰 보기 좋게 출력하기
	printf("%-6s: %d\n", "학번", std_no);
	printf("==================\n");
	printf("%-6s: %4d(점)\n", "국어", kor);
	printf("%-6s: %4d(점)\n", "세계사", world);
	printf("%-6s: %4d(점)\n", "수학", math);
	printf("==================\n");
	printf("%-6s: %7.2lf\n", "평균", avg);

	return 0;
}