#include <stdio.h>

int main(){
	printf("시작해볼까요?\n");

	return 0;


/*
	Error : "파일 끝에서 왼쪽 중괄호('{')이(가) 일치하지 않습니다."
	Explanation : main 함수의 세미콜론이 있으면 종료된 구문으로, 선언내용이 없어 오류가 납니다.
*/