#include <stdio.h>

int main() {
	int score;

	printf("점수 입력하기 : ");
	scanf("%d", &score);

	// 올바른 if문
	if (score <= 70)
		printf("하");
	else if (score <= 90)
		printf("중");
	else
		printf("상");

	// 잘못된 if문
	if (score <= 70)
		printf("하");
	if (score <= 90)
		printf("중");
	if (score <= 100)
		printf("상");

	/*
	if - else if - else는 하나의 세트로 앞서 판단한 영역에 대해서는 제외한다.
	하지만 각기 다른 if는 매번 다른 영역을 확인하기에 중복된 결과를 보일 수 있다.
	*/

	return 0;
}