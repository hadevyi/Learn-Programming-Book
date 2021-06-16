#include <stdio.h>

int main() {
	int score;
	char grade;

	printf("점수을 입력하시오 : ");
	scanf("%d", &score);

	switch (score/10)
	{
		case 10:
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		default: grade = 'F';
	}

	printf("학점 : %c\n", grade);

	return 0;
}