#include <stdio.h>
#define STR(A, B) #A"은 " #B"의 멤버입니다."

int main() {
	puts(STR(태양, 빅뱅));
	puts(STR(서현, 소녀시대));

	return 0;
}