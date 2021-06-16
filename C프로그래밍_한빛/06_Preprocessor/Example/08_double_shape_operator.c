#include <stdio.h>
// #define DATE(Y, M, D) YMD
// #define DATE(Y, M, D) Y M D
#define DATE(Y, M, D) Y ## M ## D

int main() {
	printf("积斥岿老 : %d\n", DATE(11, 06, 10));
	printf("积斥岿老 : %d\n", DATE(10, 11, 25));
	return 0;
}