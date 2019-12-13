#include <stdio.h>

void main(void){
	int cm;
	double circumference, area, volume;
	double pi = 3.141592;

	printf("반지름(cm)을 입력하세요. ");
	scanf("%d", &cm);

	circumference = cm*2.0*pi;
	area = cm*cm*pi;
	volume = 4.0 / 3.0 * pi*cm*cm*cm;

	printf("둘레 = %7.2lfcm\n면적 = %7.2lfcm²\n부피 = %7.2lfcm³\n", circumference, area, volume);
}