#include <stdio.h>

/*
//수정 전 소스
int main(){
	int op1 = 10, op2 = -20, sum;

	printf(' 국어 음악 점수는? ');
	scanf("%d %d ", kor, music);

	double ave;
	ave = kor + music / 2.0;

	printf("=========================================\n");
	printf("국어              음악               평균\n");
	printf("-----------------------------------------\n");
	printf("%3d           %3d              %d \n", kor, music, ave);
	printf("=========================================\n");

	return 0;
}
*/


//수정 후 소스
int main(){
	int kor, music;
	double ave;

	printf(" 국어 음악 점수는? ");
	scanf("%d %d", &kor, &music);

	ave = (kor + music) / 2.0;

	printf("=========================================\n");
	printf(" 국어         음악             평균\n");
	printf("-----------------------------------------\n");
	printf(" %3d          %3d              %.1lf \n", kor, music, ave);
	printf("=========================================\n");

	return 0;
}
