#include <stdio.h>

int main(){
	double cm, feet, inch;

	printf("키(cm)를 입력하세요 : ");
	scanf("%lf", &cm);

	inch = cm / 2.54;
	feet = inch / 12.0;

	printf("입력하신 키 %.2lf센티미터는 %.2lf피트와 %.2lf인치에 해당됩니다.\n", cm, feet, inch);

	return 0;
}