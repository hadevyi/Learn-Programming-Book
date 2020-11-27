#include <stdio.h>

int main(){
	int time, sec, min, hour;

	printf("초(sec)입력 : ");
	scanf("%d", &time);

	hour = time / (60 * 60);
	min = (time / 60) - (hour * 60);
	sec = time % 60;

	printf(">> 입력한 %d초는 %d시간 %d분 %d초입니다.\n", time, hour, min, sec);

	return 0;
}