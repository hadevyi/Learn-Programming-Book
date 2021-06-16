#include <stdio.h>
#define LEVEL 3

int main() {
	#ifdef LEVEL
		#if (LEVEL >= 2)
			printf("고급자용 프로그램\n");
		#else
			printf("중급자용 프로그램\n");
	#else
		pirntf("초급자용 프로그램\n");
	#endif

	return 0;
}

// Error : 현재 #if/#endif 쌍이 짝이 맞지 않습니다.