#include <stdio.h>

// 새로운 자료형 구조체
struct game {
	char name[7];		// 선수 이름을 저장할 배열 (한글 세 자 저장 가능)
	int R1, R2, R3;		// 각 라운드 점수
};

int main() {
	struct game player;			// 구조체 변수 선언
	double avg;

	// 선수의 경기 정보 입력
	printf("선수의 이름은? ");
	scanf("%s", player.name);
	printf("1, 2, 3하운드 점수는? ");
	scanf("%d %d %d", &player.R1, &player.R2, &player.R3);

	// 1, 2, 3라운드의 평균 점수 구하기
	avg = (double)(player.R1 + player.R2 + player.R3) / 3;

	// 게임 결과 출력하기
	printf("%s선수의 게임 성적 평균 %.1lf점\n", player.name, avg);

	return 0;
}