#include <stdio.h>

int main() {
	int half = 14;	// 인의 반감지
	int days, n;
	double amount = 100;	// 현재 인의 양

	printf("현재 인의 양은 %6.1lfmg 입니다.", amount);
	printf("\n\n며칠째 되는 날의 인의 최소 잔량을 구할까요? ");
	scanf("%d", &n);

	days = 0;

	while (1) {				//무한루프로 처리
		// 새로운 반감기가 지나면 양이 반으로 줄어든다.
		days += half;			// 현재일로부터 지나간 일을 반감기만큼 증가하기
		amount = amount / 2;	// 반감기인 half일을 지나면 양이 반으로 줄어든다.

		printf("%2d까지의 인의 최소 잔량은 %6.1lfmg이상\n", days, amount);

		if (days >= n)			// 사용자가 입력한 일이 지났다면 반복을 끝내기
			break;
		
	}
	printf("\n>> 그러므로 %2d일 째에는 %6.1lfmg이상 남았습니다.\n", n, amount);
	
	return 0;
}