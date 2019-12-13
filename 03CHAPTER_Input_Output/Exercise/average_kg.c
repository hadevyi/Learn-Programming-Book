#include <stdio.h>

void main(void){
	double cm, kg, feet = 30.48, lb = 2.20459, average;

	printf("키(cm)를 입력하세요. ");
	scanf("%lf", &cm);

	printf("몸무게(kg)를 입력하세요. ");
	scanf("%lf", &kg);

	average = (cm - 100)*0.9;

	printf("\n당신의 키는 %.1lfcm(%.1lffeet)입니다.\n", cm, cm / feet);
	printf("당신의 체중은 %.1lfkg(%.1lflb)입니다.\n", kg, kg / lb);
	printf("표준 체중 %.1lf과의 차이는 %+.1lfkg입니다.\n", average, kg - average);
}